#include "unity.h"
#include <calculator_operations.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_sub(void);
void test_multi(void);
void test_division(void);
void test_modulus(void);
void test_factorial(void);
void test_square(void);
void test_cube(void);
void test_squareroot(void);
void test_cuberoot(void);
void test_inverse(void);
void test_naturallog(void);
void test_logvalue(void);
void test_exponential(void);
void test_power(void);
void test_trigonometric(void);
void test_inversetrigonometric(void);
void test_hyperbolic(void);
void test_inversehyperbolic(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_sub);
  RUN_TEST(test_multi);
  RUN_TEST(test_division);
  RUN_TEST(test_modulus);
  RUN_TEST(test_factorial);
  RUN_TEST(test_square);
  RUN_TEST(test_cube);
  RUN_TEST(test_squareroot);
  RUN_TEST(test_cuberoot);
  RUN_TEST(test_inverse);
  RUN_TEST(test_naturallog);
  RUN_TEST(test_logvalue);
  RUN_TEST(test_exponential);
  RUN_TEST(test_power);
  RUN_TEST(test_trigonometric);
  RUN_TEST(test_inversetrigonometric);
  RUN_TEST(test_hyperbolic);
  RUN_TEST(test_inversehyperbolic);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30.000000, add(10, 20));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15000.000000, add(7500, 7500));
}

void test_sub(void) {
  TEST_ASSERT_EQUAL(-3.000000, sub(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100.000000, sub(1000, 900));
}

void test_multi(void) {
  TEST_ASSERT_EQUAL(0.000000, multi(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10.000000, multi(2, 5));
}

void test_division(void) {
  TEST_ASSERT_EQUAL(2.000000, division(4, 2));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1.000000, divide(2, 2));
}

void test_modulus(void) {
  TEST_ASSERT_EQUAL(1.000000, modulus(17, 2));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1.000000, modulus(16, 5));
}

void test_factorial(void) {
  TEST_ASSERT_EQUAL(24.000000, factorial(4));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(120.000000, factorial(5));
}

void test_square(void) {
  TEST_ASSERT_EQUAL(16.000000, square(4));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(25.000000, square(5));
}

void test_cube(void) {
  TEST_ASSERT_EQUAL(8.000000, cube(2));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(125.000000, factorial(5));
}

void test_squareroot(void) {
  TEST_ASSERT_EQUAL(2.000000, squareroot(4));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(4.000000, squareroot(16));
}

void test_cuberoot(void) {
  TEST_ASSERT_EQUAL(2.000000, factorial(8));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(5.000000, factorial(125));
}

void test_inverse(void) {
  TEST_ASSERT_EQUAL(0.500000, factorial(2));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1.000000, factorial(1));
}

void test_naturallog(void) {
  TEST_ASSERT_EQUAL(0.693147, naturallog(2));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1.609438, naturallog(5));
}

void test_logvalue(void) {
  TEST_ASSERT_EQUAL(1.000000, logvalue(10));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(0.000000, logvalue(1));
}

void test_exponential(void) {
  TEST_ASSERT_EQUAL(2.718282, exponential(1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(7.389056, exponential(2));
}

void test_power(void) {
  TEST_ASSERT_EQUAL(16.000000, power(4,2));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(125.000000, power(5,3));
}

void test_trigonometric(void) {
  TEST_ASSERT_EQUAL(0.000000,1.000000,0.000000, trigonometric(0,0,0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(0.000002,0.000001,-0.000002, trigonometric(180,-90,180));
}
                    
void test_inversemetric(void) {
  TEST_ASSERT_EQUAL(0.000000,90.000076,0.000000, inversetrigonometric(0,0,0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(-1.#IND00,-1.#IND00,63.435001, inversetrigonometric(2,2,2));
}
                    
void test_hyperbolic(void){
  TEST_ASSERT_EQUAL(0.000000,1.543081,0.761594, hyperbolic(0,1,1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1.175201,1.000000,0.964028, hyperbolic(1,0,2));
} 

void test_inversehyperbolic(void){
  TEST_ASSERT_EQUAL(-0.000000,0.000000,0.000000,inversehyperbolic(0,1,0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(0.881374,1.#QNAN0,1.#QNAN0, inversehyperbolic(1,0,2));
}
