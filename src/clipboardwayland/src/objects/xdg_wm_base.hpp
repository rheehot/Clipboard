/*  Clipboard - Cut, copy, and paste anything, anywhere, all from the terminal.
    Copyright (C) 2023 Jackson Huff and other contributors on GitHub.com
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.*/
#pragma once

#include "forward.hpp"
#include "spec.hpp"
#include <wayland-xdg-shell.hpp>

struct XdgWmBaseSpec {
    WL_SPEC_BASE(xdg_wm_base, 4)
    WL_SPEC_DESTROY(xdg_wm_base)
    WL_SPEC_LISTENER(xdg_wm_base)
};

class XdgWmBase : public WlObject<XdgWmBaseSpec> {
    friend XdgWmBaseSpec;

public:
    explicit XdgWmBase(obj_t* value) : WlObject<spec_t> { value } {}

private:
    void ping(std::uint32_t);
};
