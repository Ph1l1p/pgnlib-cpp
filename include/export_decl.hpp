/**
 * Copyright (C) 2010 Nikita Manovich <nikita.manovich@gmail.com>
 * 
 * This file is part of C++ PGN parser, http://code.google.com/p/pgnparser-cpp
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PGN_EXPORT_DECL_HPP
#define PGN_EXPORT_DECL_HPP

#if defined(_WIN32)
#ifdef PGN_PARSER_API_EXPORT
#    define PGN_PARSER_API __declspec(dllexport)
#else
#    define PGN_PARSER_API __declspec(dllimport)
#endif
#else
#    define PGN_PARSER_API
#endif

#endif /* #ifndef PGN_EXPORT_DECL_HPP */

