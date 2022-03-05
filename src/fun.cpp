// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    int rez = 1;
    while (n > 0) {
        rez = rez * x;
        n--;
        }
    return rez;
}
