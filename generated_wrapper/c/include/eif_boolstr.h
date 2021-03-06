/*
	description: "Externals for class BOOL_STRING."
	date:		"$Date: 2012-01-06 17:01:04 +0000 (Fri, 06 Jan 2012) $"
	revision:	"$Revision: 88161 $"
	copyright:	"Copyright (c) 1985-2006, Eiffel Software."
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

#ifndef _eif_boolstr_h_
#define _eif_boolstr_h_
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifdef __cplusplus
extern "C" {
#endif

RT_LNK char *bl_str_set(char *a1, int s, int n);
RT_LNK char *bl_str_and(char *a1, char *a2, char *a3, int s);
RT_LNK char *bl_str_or(char *a1, char *a2, char *a3, int s);
RT_LNK char *bl_str_xor(char *a1, char *a2, char *a3, int s);
RT_LNK char *bl_str_not(char *a1, char *a2, int s);
RT_LNK char *bl_str_shiftr(char *a1, char *a2, int s, int n);
RT_LNK char *bl_str_shiftl(char *a1, char *a2, int s, int n);

#ifdef __cplusplus
}
#endif

#endif

