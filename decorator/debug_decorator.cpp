/*
 *   Copyright (c) 2021 Akryllax (akryllax@gmail.com)

 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.

 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.

 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "debug_decorator.h"
#include "deco_id.h"
#include "spdlog/spdlog.h"

const uint16_t DebugDecorator::DECO_ID = DECO_ID_DEBUG;

std::string DebugDecorator::to_string()
{
    return "DebugDecorator";
};

void DebugDecorator::initialize()
{
    spdlog::trace("Creating new DebugDecorator");
}