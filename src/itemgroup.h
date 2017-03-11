/*
Minetest
Copyright (C) 2013 celeron55, Perttu Ahola <celeron55@gmail.com>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3.0 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef ITEMGROUP_HEADER
#define ITEMGROUP_HEADER

#include <string>
#include "util/cpp11_container.h"

typedef UNORDERED_MAP<std::string, int> ItemGroupList;

static inline int itemgroup_get(const ItemGroupList &groups,
		const std::string &name)
{
	ItemGroupList::const_iterator i = groups.find(name);
	if(i == groups.end())
		return 0;
	return i->second;
}

#endif

