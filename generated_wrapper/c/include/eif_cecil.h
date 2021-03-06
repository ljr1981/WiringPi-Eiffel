/*
	description: "Definitions and macros for the C-Eiffel Call-In Library."
	date:		"$Date: 2015-05-25 20:50:35 +0000 (Mon, 25 May 2015) $"
	revision:	"$Revision: 97361 $"
	copyright:	"Copyright (c) 1985-2015, Eiffel Software."
	license:	"GPL version 2 see http://www.eiffel.com/licensing/gpl.txt)"
	licensing_options:	"Commercial license is available at http://www.eiffel.com/licensing"
	copying: "[
			This file is part of Eiffel Software's Runtime.
			
			Eiffel Software's Runtime is free software; you can
			redistribute it and/or modify it under the terms of the
			GNU General Public License as published by the Free
			Software Foundation, version 2 of the License
			(available at the URL listed under "license" above).
			
			Eiffel Software's Runtime is distributed in the hope
			that it will be useful,	but WITHOUT ANY WARRANTY;
			without even the implied warranty of MERCHANTABILITY
			or FITNESS FOR A PARTICULAR PURPOSE.
			See the	GNU General Public License for more details.
			
			You should have received a copy of the GNU General Public
			License along with Eiffel Software's Runtime; if not,
			write to the Free Software Foundation, Inc.,
			51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA
		]"
	source: "[
			 Eiffel Software
			 356 Storke Road, Goleta, CA 93117 USA
			 Telephone 805-685-1006, Fax 805-685-6869
			 Website http://www.eiffel.com
			 Customer support http://support.eiffel.com
		]"
*/

#ifndef _eif_cecil_h_
#define _eif_cecil_h_
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#include "eif_plug.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Main declarations (should be user visible)
 */

/* Macros to remap cryptic names to meaningful ones. Note that the
 * interface defined in ETL uses the remaped names. Only this interface
 * is guaranteed.
 */

/*
 * Specific Cecil types.
 */ 

#if defined(ISE_GC) && !defined(EIF_IL_DLL)
typedef EIF_REFERENCE*	EIF_OBJECT;			/* Eiffel object: safe indirection to an Eiffel reference */
#else
typedef EIF_REFERENCE	EIF_OBJECT;			/* Eiffel object: safe indirection to an Eiffel reference */
#endif

/* Types defined for easier reference when dealing with function pointers.
 * Their use is not compulsory it's only a matter of "convenience".
 * They do not guarantee the type checking of the parameters
 * passed as arguments.	
 */

typedef void	(*EIF_PROCEDURE)(EIF_REFERENCE, ...);		/* Returns void */
typedef EIF_INTEGER_8	(*EIF_INTEGER_8_FUNCTION)(EIF_REFERENCE, ...);		/* Returns an Eiffel Integer 8 bits */
typedef EIF_INTEGER_16	(*EIF_INTEGER_16_FUNCTION)(EIF_REFERENCE, ...);		/* Returns an Eiffel Integer 16 bits */
typedef EIF_INTEGER_32	(*EIF_INTEGER_32_FUNCTION)(EIF_REFERENCE, ...);		/* Returns an Eiffel Integer 32 bits */
#define EIF_INTEGER_FUNCTION EIF_INTEGER_32_FUNCTION
typedef EIF_INTEGER_64	(*EIF_INTEGER_64_FUNCTION)(EIF_REFERENCE, ...);		/* Returns an Eiffel Integer 64 bits */
typedef EIF_BOOLEAN	(*EIF_BOOLEAN_FUNCTION)(EIF_REFERENCE, ...);		/* Returns an Eiffel Boolean */
#define EIF_CHARACTER_FUNCTION EIF_CHARACTER_8_FUNCTION
typedef EIF_CHARACTER_8	(*EIF_CHARACTER_8_FUNCTION)(EIF_REFERENCE, ...);		/* Returns char */
typedef EIF_REAL_32	(*EIF_REAL_32_FUNCTION)(EIF_REFERENCE, ...);	/* Returns an Eiffel Real */
typedef EIF_REAL_64	(*EIF_REAL_64_FUNCTION)(EIF_REFERENCE, ...);	/* Returns an Eiffel Double */
typedef EIF_REFERENCE (*EIF_REFERENCE_FUNCTION)(EIF_REFERENCE, ...);		/* Returns an Eiffel Reference */
typedef EIF_POINTER (*EIF_POINTER_FUNCTION)(EIF_REFERENCE, ...);	/* Returns an Eiffel Pointer */


#define eif_create			eifcreate		/* Object creation */


/* Macros returning the address of an Eiffel routine. If it fails,
 * it returns a NULL pointer or raises an Visible exception, if 
 * enabled
 */

#define eif_procedure(rout,ftype)				(EIF_PROCEDURE) eifref(rout,ftype)
#define eif_integer_8_function(rout,ftype)	(EIF_INTEGER_8_FUNCTION) eifref(rout,ftype)
#define eif_integer_16_function(rout,ftype)	(EIF_INTEGER_16_FUNCTION) eifref(rout,ftype)
#define eif_integer_32_function(rout,ftype)	(EIF_INTEGER_32_FUNCTION) eifref(rout,ftype)
#define eif_integer_function(rout,ftype)		(EIF_INTEGER_32_FUNCTION) eifref(rout,ftype)
#define eif_integer_64_function(rout,ftype)	(EIF_INTEGER_64_FUNCTION) eifref(rout,ftype)
#define eif_character_function				eif_character_8_function
#define eif_character_8_function(rout,ftype)	(EIF_CHARACTER_8_FUNCTION) eifref(rout,ftype)
#define eif_character_32_function(rout,ftype)	(EIF_CHARACTER_32_FUNCTION) eifref(rout,ftype)
#define eif_real_32_function(rout,ftype)		(EIF_REAL_32_FUNCTION) eifref(rout,ftype)
#define eif_real_64_function(rout,ftype)		(EIF_REAL_64_FUNCTION) eifref(rout,ftype)
#define eif_reference_function(rout,ftype)	(EIF_REFERENCE_FUNCTION) eifref(rout,ftype)
#define eif_boolean_function(rout,ftype)		(EIF_BOOLEAN_FUNCTION) eifref(rout,ftype)
#define eif_pointer_function(rout,ftype)		(EIF_POINTER_FUNCTION) eifref(rout,ftype)

/*
 * Miscellaneous Macros
 */

#define eif_type			eiftype			/* Dynamic type ID */
#define eif_name			eifname			/* Reverts class ID to name */
#define eif_attribute_type    eifattrtype           /* Get the type of an attribute, returns EIF_NO_TYPE if fails */
#define eif_locate  eiflocate   /* Return index of a given attribute in a given object */

/*
 * Aliases
 */

#define eif_type_by_name	eif_type_id
#define eif_name_by_tid		eif_name

/* 
 * Cecil exception settings
 */

#define eif_enable_visible_exception   eifvisex /* When a class or a feature is not visible, raise an exception */
#define eif_disable_visible_exception eifuvisex /* Disable the visible exception */

/* 
 * Convention for attribute types.
 * The values are in sync with REFLECTOR_CONSTANTS.
 */

#define EIF_POINTER_TYPE		0
#define EIF_REFERENCE_TYPE		1
#define EIF_CHARACTER_8_TYPE	2
#define EIF_BOOLEAN_TYPE		3
#define EIF_INTEGER_32_TYPE		4
#define EIF_REAL_32_TYPE		5
#define EIF_REAL_64_TYPE		6
#define EIF_EXPANDED_TYPE		7
#define EIF_INTEGER_8_TYPE		9
#define EIF_INTEGER_16_TYPE		10
#define EIF_INTEGER_64_TYPE 	11
#define EIF_CHARACTER_32_TYPE	12
#define EIF_NATURAL_8_TYPE		13
#define EIF_NATURAL_16_TYPE		14
#define EIF_NATURAL_32_TYPE 	15
#define EIF_NATURAL_64_TYPE 	16

/* Obsolete code. */
#define EIF_CHARACTER_TYPE    EIF_CHARACTER_8_TYPE
#define EIF_WIDE_CHAR_TYPE    EIF_CHARACTER_32_TYPE
#define EIF_INTEGER_TYPE      EIF_INTEGER_32_TYPE
#define EIF_BIT_TYPE			8


/* Accessing an attribute in read/write mode (this is both an lvalue and
 * a rvalue). The 'type' is the C type of the attribute being accessed. It
 * must be correct or havoc will result.
 * Attention! It returns an EIF_REFERENCE, which might be obsolete after a
 * GC collection.
 */
#define attribute_exists(object,name) \
	(eif_locate (object, name) == -1)? EIF_FALSE : EIF_TRUE

#define eifaddr(object,name,ret)	((void *) ((char *) object + eifaddr_offset (object, name, ret)))
#define eif_field(object,name,type) *(type *)(eifaddr(object,name, NULL))	/* Obsolete. Use "eif_attribute" instead. */
#define eif_attribute(object,name,type,ret) *(type *)(eifaddr(object,name,ret)) /* Returns the attribute of an object. Return status in "ret".*/

#define eif_attribute_safe(object,name,type_int,ret) eif_field_safe(object, name, type_int, ret)	/* For debugging: check type. Must be preceded by a cast to the proper type, e.g. *(EIF_INTEGER_32 *) when type of attribute is an INTEGER_32. */

/* Miscellaneous useful functions. */

/* Make an Eiffel array from a C array:
 * `eif_array' is the direct reference to the Eiffel array.
 * `c_array' is the C array.
 * `nelts' the number of elements to copy in the eiffel array, it has to
 * be equal to `eif_array.count'.
 * type is an Eiffel type.
 */
#define eif_make_from_c(eif_array, c_array, nelts, type) \
	{ \
		EIF_REFERENCE area = eif_field (eif_array, \
										"area", EIF_REFERENCE); \
		memcpy ((type *) area, c_array, nelts * sizeof (type));\
	}

/*
 * Creation an Eiffel string.
 */

#define	eif_string(x) RTMS(x)	
		/* Create an Eiffel string from a C string `x' */

/* 
 * Error report codes 
 */

#define EIF_NO_TYPE			(-1)			/* No type associated to a name */
#define EIF_NO_ATTRIBUTE	(-1)			/* No attribute found */
#define EIF_WRONG_TYPE	(-2)			/* Wrong type */
#define EIF_CECIL_OK	(0)			/* Function returned successfully. */
#define EIF_CECIL_ERROR	(1)			/* Function returned unsuccessfully. */

/*
 * Structures used by Cecil (aka private informations)
 */

/* This is the structure which describes the hash table index by strings: the
 * array of keys and the array of values, along with the table's size and the
 * number of recorded elements.
 */
struct ctable {
	int32 h_size;		/* Size of table (prime number) */
	int h_sval;			/* Size of each value item, in bytes */
	char **h_keys;		/* Array of keys (pointer to an array of strings) */
	char *h_values;		/* Array of values (pointer needs casting) */
};

/* Information on types. The structure records the number of generic
 * parameters and an array which gives the type ids for every possible meta-
 * type as defined in the compiler (i.e. simple types plus expandeds).
 * The array gt_gen holds patterns like [INTEGER, REFERENCE] in an unstructured
 * way (i.e. they are simply gathered in a whole array, for static intialization
 * purposes). The end of the array is signaled by a *single* SK_INVALID marker.
 * All the types are skeleton types as declared in eif_struct.h.
 * The gt_type array then lists the associated types (entry at "index" i in
 * gt_gen is associated to the same index i in gt_type).
 */
struct cecil_info {
	uint16 nb_param;			/* Number of generic parameters, 0 if none*/
	EIF_TYPE_INDEX dynamic_type;		/* Dynamic type when no generics. */
	uint32 *patterns;		/* Generic parameters patterns, if generics, otherwise NULL. */
	EIF_TYPE_INDEX *dynamic_types;	/* Dynamic type for each meta-type, if generics, otherwise NULL. */
};

/*
 * 	Obsolete Macros  
 */

#define eif_proc		eif_procedure			/* Use `eif_procedure' instead */
#define eif_fn_int		eif_integer_32_function			/* Use `eif_integer_32_function' instead */
#define eif_fn_char		eif_character_8_function	/* Use `eif_character_8_function' instead */
#define eif_fn_float	eif_real_function	/* Use `eif_real_function' instead */
#define eif_fn_double	eif_double_function	/* Use `eif_double_function' instead */
#define eif_fn_ref		eif_reference_function	/* Use `eif_reference_function' instead */
#define eif_fn_bool		eif_boolean_function	/* Use `eif_boolean_function' instead */
#define eif_fn_pointer	eif_pointer_function	/* Use `eif_pointer_function' instead */


#define EIF_PROC EIF_PROCEDURE		/* Use EIF_PROCEDURE instead */
#define EIF_FN_INT EIF_INTEGER_32_FUNCTION		/* Use EIF_INTEGER_32_FUNCTION instead */
#define EIF_FN_BOOL EIF_BOOLEAN_FUNCTION		/* Use EIF_BOOLEAN_FUNCTION instead*/
#define EIF_FN_CHAR EIF_CHARACTER_8_FUNCTION		/* Use EIF_CHARACTER_8_FUNCTION instead  */
#define EIF_FN_REAL_32 EIF_REAL_32_FUNCTION	/* Use EIF_REAL_32_FUNCTION instead */
#define EIF_FN_REAL_64 EIF_REAL_64_FUNCTION	/* Use EIF_REAL_64_FUNCTION instead */
#define EIF_FN_REF EIF_REFERENCE_FUNCTION /* use EIF_REFERENCE_FUNCTION instead */
#define EIF_FN_POINTER EIF_POINTER_FUNCTION	/* Use EIF_POINTER_FUNCTION instead */


#define	EIF_OBJ	EIF_OBJECT						/* Use EIF_OBJECT instead */

/*
 * Functions and variables declarations.
 */

/* The ce_rname is indexed by dynamic type (i.e. it won't work on simple
 * types). Only the SK_DTYPE part of the type_id is kept for the intersection.
 */

#ifndef WORKBENCH
extern struct ctable fce_rname[];		/* Routine names -> function pointer */
#endif

RT_LNK unsigned char eif_visible_is_off;
RT_LNK void eifvisex (void);          /* Enable the visible exception (in current thread) */
RT_LNK void eifuvisex (void);          /* Disable visible exception (in current thread) */
RT_LNK int eifattrtype (char *attr_name, EIF_TYPE_ID ftype);
										/* Type of `attr_name' from class id `ftype' */
RT_LNK EIF_OBJECT eifcreate(EIF_TYPE_ID ftype);				/* Object creation */

RT_LNK EIF_REFERENCE_FUNCTION eifref(char *routine, EIF_TYPE_ID ftype);				/* Eiffel function returning ANY */

RT_LNK EIF_TYPE_ID eiftype(EIF_OBJECT object);			/* Give dynamic type of EIF_OBJECT. Obsolete, use "eif_type_by_object". */
RT_LNK EIF_TYPE_ID eif_type_by_reference (EIF_REFERENCE object);
#define eif_type_by_object(obj)	eiftype(obj)			/* Give dynamic type of EIF_OBJECT */

RT_LNK const char *eifname(EIF_TYPE_ID ftype);			/* Give class name from class ID */
RT_LNK void *eif_field_safe (EIF_REFERENCE object, char *name, int type_int, int * const ret);					/* Safely Compute address of attribute, checking type validityi. Must be preceded by a cast to the proper type, e.g. *(EIF_INTEGER_32 *) when type of attribute is an INTEGER_32. */

RT_LNK void *old_eifaddr(EIF_REFERENCE object, char *name);					/* Compute address of attribute. Old version. */
RT_LNK EIF_INTEGER eifaddr_offset(EIF_REFERENCE, char *name, int * const ret);	/* Compute offset to `object' of attribute `name' */

/* Dynamic Type id of an object of type `type_string' */
RT_LNK EIF_TYPE eif_type_id2 (char *type_string);
RT_LNK EIF_TYPE_ID eif_type_id (char *type_string);
RT_LNK int eif_pre_ecma_mapping (void);
RT_LNK void eif_set_pre_ecma_mapping(int);

RT_LNK int eiflocate(EIF_OBJECT object, char *name); /* Return the index of attribute `name' in EIF_OBJECT `object'*/


/* 
 * Initialization 
 */

RT_LNK void  failure(void);					/* The Eiffel exectution failed */
RT_LNK void eif_rtinit(int argc, EIF_NATIVE_CHAR **argv, EIF_NATIVE_CHAR **envp);				/* Eiffel run-time initialization */

extern char *ct_value(const struct ctable *ct, const char *key);				/* Hash table query */

#ifdef EIF_THREADS

/*
 * Initialization of non Eiffel Threads.
 */
RT_LNK void eif_set_thr_context (void);

#endif	/* EIF_THREADS */

#ifdef __cplusplus
}
#endif

#endif
