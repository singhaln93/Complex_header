/**
 * @file Complex.cpp
 * @author Neeraj Singhal
 * @brief 10292018_spfp_scdft_512s
 * @version 1.0
 * @date 2018-10-29
 *
 * @copyright Copyright (c) 2019
 *
 */
#include "Complex.h"

//typedef struct Complex Complex;

/*Storing values of Complex Obj*/
void Complex::operator=(const Complex &a) {
    real = a.real;
    imag = a.imag;
}

/*initializing complex number
Complex init(float real, float imag) {
    struct Complex result;
    result.real = real;
    result.imag = imag;
    return result;
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

/*#pragma CODE_SECTION(".myfunc")
struct Complex* addComplex(Complex *a, Complex *b)
{
    Complex *result;
    result->real = a->real + b->real;
    result->imag = a->imag + b->imag;
    return (result);
}*/




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

/*#pragma CODE_SECTION(".myfunc")
struct Complex* subComplex(Complex *a, Complex *b)
{
    Complex *result;
    result->real = a->real - b->real;
    result->imag = a->imag - b->imag;
    return (result);
}*/




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


/*#pragma CODE_SECTION(".myfunc")
struct Complex* mulComplex(Complex *a, Complex *b)
{
    Complex *result;
    result->real = (a->real * b->real) - (a->imag * b->imag);
    result->imag = (a->real * b->imag) + (a->imag * b->real);
    return (result);
}*/





/*Complex polar2rectform(float r, float angle) {
    Complex result;
    float radians = angle * PI / 180;
    result.real = r * cos(radians);
    result.imag = r * sin(radians);
    return result;
}*/

/*
void rect2polarform(Complex a){
  short mod, angle;
  mod = sqrt(a.real*a.real + a.imag*a.imag);
  angle = atan(a.imag/a.real)*180/PI;
}
*/

/*Complex cexp(float real, float imag) {
    Complex result;
    float er = exp(real);
    result.real = er * cos(imag);
    result.imag = er * sin(imag);
    return result;
}*/



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
