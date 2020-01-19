#pragma once

typedef unsigned int uint32_t;

//with extra memory allocation (minors)
//it's actually useless function
double _det(double** matrix, const uint32_t size);

//without extra memory allocation
double det(double** matrix, const uint32_t size);
