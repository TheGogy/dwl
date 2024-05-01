// somebar - dwl bar
// See LICENSE file for copyright and license details.

#pragma once
#include "common.hpp"

constexpr bool topbar = true;

constexpr int paddingX = 10;
constexpr int paddingY = 3;

// See https://docs.gtk.org/Pango/type_func.FontDescription.from_string.html
constexpr const char* font = "JetBrainsMono Nerd Font 13";

constexpr ColorScheme colorInactive = {Color(0xbb, 0xbb, 0xbb), Color(0x00, 0x00, 0x00)};
constexpr ColorScheme colorActive = {Color(0xd6, 0x5d, 0x0e), Color(0x00, 0x00, 0x00)};
constexpr const char* termcmd[] = {"foot", nullptr};

static std::vector<std::string> tagNames = {
	"一", "二", "三",
	"四", "五", "六",
	"七", "八", "九",
};

constexpr Button buttons[] = {
	{ ClkStatusText,   BTN_RIGHT,  spawn,      {.v = termcmd} },
};
