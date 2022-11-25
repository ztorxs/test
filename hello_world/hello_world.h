#ifndef HELLO_WORLD_H
#define HELLO_WORLD_H

#if defined(_MSC_VER)
#if defined(HELLO_WORLD_EXPORT) 
#define HW_EXPORT __declspec(dllexport)
#else
#define HW_EXPORT  __declspec(dllimport)
#endif
#else
#define HW_EXPORT
#endif

#include <iostream>

extern "C" {

HW_EXPORT void Hello();

};

#endif