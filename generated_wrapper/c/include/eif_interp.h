/*
	description: "Interpreter declarations and definitions."
	date:		"$Date: 2015-06-26 08:01:47 +0000 (Fri, 26 Jun 2015) $"
	revision:	"$Revision: 97570 $"
	copyright:	"Copyright (c) 1985-2013, Eiffel Software."
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

#ifndef _eif_interp_h_
#define _eif_interp_h_
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#include "eif_globals.h"
#include <stdio.h>		/* %%zs added: for FILE definition line 91 */
#include "eif_portable.h"
#include "eif_struct.h"
#include "eif_stack.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef EIF_THREADS
#ifdef WORKBENCH
/* Operational stacks. */
RT_LNK struct c_opstack cop_stack;
RT_LNK struct opstack op_stack;
RT_LNK unsigned char *IC;			/* Interpreter Counter (like PC on a CPU) */
#endif
#endif

/* Macros for easy reference */
#define it_bool		item.b
#define it_char		item.c1
#define it_wchar	item.c4
#define it_int8		item.i1
#define it_int16	item.i2
#define it_int32	item.i4
#define it_int64	item.i8
#define it_real32	item.r4
#define it_real64	item.r8
#define	it_uint8	item.n1
#define	it_uint16	item.n2
#define	it_uint32	item.n4
#define	it_uint64	item.n8
#define it_ref		item.r
#define it_ptr		item.p

/* Interpreter interface to outside world */
RT_LNK void xinitint(void);										/* Initialize the interpreter */
RT_LNK void xinterp(unsigned char *icval, rt_uint_ptr nb_pushed);					/* Compound from a given address */
RT_LNK void eif_override_byte_code_of_body (int body_id, int pattern_id, unsigned char *bc, int count); /* Update byte-code for feature */

#define iget()	eif_opstack_push_empty(&op_stack)
#define opop()	eif_opstack_pop_address(&op_stack)

#ifdef __cplusplus
}
#endif

#endif
