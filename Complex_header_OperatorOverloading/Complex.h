/**
 * @file Complex.h
 * @author Neeraj Singhal
 * @brief 01282019_spfp_DIT_rad2_FFT_512s   
 * @version 1.0
 * @date 2019-01-28
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <math.h>
#define PI  3.1415926535897932

typedef struct Complex
{
    float real;
    float imag;

    public:
    //void operator=(const Complex &a);
}Complex;

Complex operator+(Complex a, Complex b);
Complex operator-(Complex a, Complex b);
Complex operator*(Complex a, Complex b);
Complex cexp1(float real, float imag);           //e^(a+ib)
#endif
