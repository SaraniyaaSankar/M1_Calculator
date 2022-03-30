/**
 * @file calculator_operations.h
 * @author Saraniyaa.S ()
 * @brief Calculator application with 19 mathematical operations
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
*  adds  a and b and returns the result
* @param[in] a 
* @param[in] b 
* @return Result of r
*/
void add(float a, float b);

/**
*  subtracts a, b and returns the result
* @param[in] a
* @param[in] b 
* @return Result of r
*/
void sub(float a, float b);

/**
*  multiply a, b and returns the result
* @param[in] a 
* @param[in] b
* @return Result of r
*/
void multi(float a, float b);

/**
* divides a by b and returns the result 
* @param[in] a 
* @param[in] b
* @return Result of r
*/
void division(float a, float b);

/**
* modulus of a by b and returns the result 
* @param[in] a 
* @param[in] b
* @return Result of r
*/
void modulus(int a, int b);

/**
*  factorial of n and returns the result
* @param[in] a
* @return Result of r
*/
void factorial(int a);

/**
*  square of  a and returns the result
* @param[in] a 
* @return Result of r
*/
void square(float a);

/**
*  cube of  a and returns the result
* @param[in] a 
* @return Result of r
*/
void cube(float a);

/**
*  square root of  a and returns the result
* @param[in] a 
* @return Result of r
*/
void squareroot(float a);

/**
*  cube root of  a and returns the result
* @param[in] a 
* @return Result of r
*/
void cuberoot(float a);

/**
* inverse of  a and returns the result
* @param[in] a 
* @return Result of r
*/
void inverse(float a);

/**
* natural log of  a and returns the result
* @param[in] a 
* @return Result of r
*/
void naturallog(float a);

/**
* log10 of  a and returns the result
* @param[in] a 
* @return Result of r
*/
void logvalue(float a);

/**
* exponential of  a and returns the result
* @param[in] a 
* @return Result of r
*/
void exponential(float a);

/**
* a power b and returns the result 
* @param[in] a 
* @param[in] b
* @return Result of r
*/
void power(float a, float b);

/**
* perform trigonometric functions and returns the result 
* @param[in] s 
* @param[in] c
* @param[in] t
* @return Result of sine, cosine, tangent
*/
void trigonometric(float s, float c, float t);

/**
* perform inverse trigonometric functions and returns the result 
* @param[in] s 
* @param[in] c
* @param[in] t
* @return Result of sineinv, cosineinv, tangentinv
*/
void trigonometric(float s, float c, float t);

/**
* perform hyperbolic functions and returns the result 
* @param[in] s 
* @param[in] c
* @param[in] t
* @return Result of sineh, cosineh, tangenth
*/
void hyperbolic(float s, float c, float t);

/**
* perform inverse hyperbolic functions and returns the result 
* @param[in] s 
* @param[in] c
* @param[in] t
* @return Result of sinehinv, cosinehinv, tangenthinv
*/
void trigonometric(float s, float c, float t);

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */
