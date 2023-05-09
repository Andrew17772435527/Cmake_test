#pragma once
#ifndef __PROJECT_2_H__
#define __PROJECT_2_H__

#include<stdio.h>

#ifdef   __cplusplus
extern "C" {
#endif

typedef unsigned char uc_t;
typedef short s_t;

void test_function_1(void);
void test_function_2(void);

typedef struct{
	uc_t test_char;
	s_t test_short;

}test_struct;

#ifdef    __cplusplus
}
#endif

#endif