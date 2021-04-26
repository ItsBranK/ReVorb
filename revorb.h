#pragma once
#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <string.h>
#include <iostream>
#include "libogg/ogg.h"
#include "libvorbis/codec.h"

#pragma comment(lib, "libogg_static.lib")
#pragma comment(lib, "libvorbis_static.lib")

extern bool Failed;