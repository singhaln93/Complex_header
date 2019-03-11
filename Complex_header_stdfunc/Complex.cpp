/**
 * @file Complex.cpp
 * @author Neeraj Singhal
 * @brief 01262019_spfp_dft_matrix_512s
 * @version 1.0
 * @date 2019-01-26
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include "Complex.h"
//typedef struct Complex Complex;

/**
 * @brief initializing complex number
 * @param float real, imag
 * @return complex number
 */
Complex init(float real, float imag) {
    struct Complex result;
    result.real = real;
    result.imag = imag;
    return result;
}

/**
 * @brief complex number Addition
 * @param complex number a, b
 * @return complex number
 */
Complex add(Complex a, Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

/**
 * @brief complex number Subtraction
 * @param complex number a, b
 * @return complex number
 */
Complex sub(Complex a, Complex b) {
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
Complex mul(Complex a, Complex b) {
    Complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}

/**
 * @brief complex number: r*exp(iq)=a+ib
 * @param float amplitude, angle
 * @return complex number
 */
Complex polar2rectform(float r, float angle) {
    Complex result;
    float radians = angle * PI / 180;
    result.real = r * cos(radians);
    result.imag = r * sin(radians);
    return result;
}

/**
 * @brief complex number: a+ib=r*exp(iq)
 * @param complex number a
 */
/*void rect2polarform(Complex a){
  short mod, angle;
  mod = sqrt(a.real*a.real + a.imag*a.imag);
  angle = atan(a.imag/a.real)*180/PI;
}*/

/**
 * @brief complex Exponential Func: r*exp(a+ib)=p+iq
 * @param float real,imag
 * @return complex number
 */
Complex cexp(float real, float imag) {
    Complex result;
    float er = exp(real);
    result.real = er * cos(imag);
    result.imag = er * sin(imag);
    return result;
}

/**
 * @brief complex Exponential Func1: r*exp(a-ib)=p-iq
 * @param float real,imag
 * @return complex number
 */
Complex cexp1 (float real, float imag) {
    Complex result;
    float er = exp(real);
    result.real = er * cos(imag);
    result.imag = -er * sin(imag);
    return result;
}
