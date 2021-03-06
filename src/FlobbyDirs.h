// This file is part of flobby (GPL v2 or later), see the LICENSE file

#pragma once

#include <string>

void initDirs();

// return values below ends with '/'
std::string const& configDir();
std::string const& cacheDir();
