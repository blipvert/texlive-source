/* tilde.h: declare tilde expander.

   Copyright 1993, 2008, 2010 Karl Berry.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this library; if not, see <http://www.gnu.org/licenses/>.  */

#ifndef KPATHSEA_TILDE_H
#define KPATHSEA_TILDE_H

#include <kpathsea/c-proto.h>
#include <kpathsea/types.h>

#ifdef MAKE_KPSE_DLL /* libkpathsea internal only */

/* Replace a leading ~ or ~NAME in FILENAME with getenv ("HOME"), or
   getenv ('USERPROFILE") on Windows, or with NAME's home directory,
   respectively.  Excise trailing slashes.  FILENAME may not be null.  */

extern string kpathsea_tilde_expand (kpathsea kpse, const_string filename);

#if defined (KPSE_COMPAT_API)
extern string kpse_tilde_expand (const_string filename);
#endif

#endif /* MAKE_KPSE_DLL */

#endif /* not KPATHSEA_TILDE_H */
