/**
 * @file Complex.cpp
 * @author Neeraj Singhal
 * @brief 01282019_spfp_DIT_rad2_FFT_512s   
 * @version 1.0
 * @date 2019-01-28
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include "Complex.h"

//typedef struct Complex Complex;

/*Storing values of Complex Obj
void Complex::operator=(const Complex &a) {
    real = a.real;
    imag = a.imag;
}*/

/**
 * @brief complex number Addition
 * @param complex number a, b
 * @return complex number
 */
#pragma CODE_SECTION(".myfunc")
Complex operator+(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

/**
 * @brief complex number Subtraction
 * @param complex number a, b
 * @return complex number
 */
#pragma CODE_SECTION(".myfunc")
Complex operator-(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

/**
 * @brief complex number Multiplication
 * @param complex number a, b
 * @return complex number
 */
#pragma CODE_SECTION(".myfunc")
Complex operator*(Complex a, Complex b) {
    Complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}

/**
 * @brief complex Exponential Func1: r*exp(a-ib)=p-iq
 * @param float real,imag
 * @return complex number
 */
#pragma CODE_SECTION(".myfunc")
Complex cexp1 (float real, float imag) {
    Complex result;
    float er = expf(real);
    result.real = er * cosf(imag);
    result.imag = -er * sinf(imag);
    return result;
}
