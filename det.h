#pragma once

typedef unsigned int uint32_t;

//with extra memory allocation (minors) function
//the slowest one
//it's actually useless
double det_1(double** matrix, const uint32_t size);

//without extra memory allocation & recursive function
double det_2(double** matrix, const uint32_t size);

//without extra memory allocation & non-recursive function
//the fastest one
double det_3(double** matrix, const uint32_t size);
