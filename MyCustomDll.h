#pragma once

#define WIN32_LEAN_AND_MEAN /* prevent winsock.h to be included in windows.h */

#include <stdio.h>
#include <tchar.h>
#include <Windows.h>
#include <wininet.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdlib.h>

#define CUSTOM_API __declspec(dllexport)

CUSTOM_API int APIENTRY dll_init();
CUSTOM_API int APIENTRY dll_run(char* data, long size, int fuzz_iterations);