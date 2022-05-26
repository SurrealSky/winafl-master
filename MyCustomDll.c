#include"MyCustomDll.h"




CUSTOM_API int APIENTRY dll_run(char* data, long size, int fuzz_iterations) {
	return 1;
}

CUSTOM_API int APIENTRY dll_init() 
{
	return 1;
}