#include <calculator_operations.h>
void add()
{
    printf("Enter the two numbers you want to add: ");
    float a, b, r;
    scanf("%f%f", &a, &b);
    r=a+b;
    printf("The sum of %f and %f is %f\n", a, b, r);
}
void sub()
{
    printf("Enter the first and second number you want to subtract: ");
    float a, b, r;
    scanf("%f%f", &a, &b);
    r=a-b;
    printf("The difference between %f and %f is %f\n", a, b, r);
}
void multi()
{
    printf("Enter the two numbers you want to multiply: ");
    float a, b, r;
    scanf("%f%f", &a, &b);
    r=a*b;
    printf("The product of %f and %f is %f\n", a, b, r);
}
void division()
{
    printf("Enter the dividend and divisor to perform division: ");
    float a, b;
	  float r;
    scanf("%f%f", &a, &b);
    if(b==0)
    {
    printf("\nDivisor can't be Zero.\nEnter some other divisor value\n");
    scanf("%f",&b);
    }
    r=(float)a / (float)b;
    printf("%f / %f is %f\n", a, b, r);
}
void modulus()
{
    printf("Enter the dividend and divisor to perform modulus: ");
    int a, b, r;
    scanf("%d%d", &a, &b);
    if(b==0)
    {
    printf("\nDivisor can't be Zero.\nEnter some other divisor value\n");
    scanf("%d",&b);
    }
    r=a % b;
    printf("The modulus of %d and %d is %d\n", a, b,r);
}
void factorial()
{
    int a,i,r=1;
    printf("Enter the number to find factorial: ");
    scanf("%d", &a);
    for(i=1; i<=a; i++)
    {
    	r=r*i;
	}
    printf("\nFactorial of %d is %d", a, r);
}
void square()
{
    float a,r;
    printf("Enter the number to find square: ");
    scanf("%f", &a);
    r = a*a;
    printf("The square of %f is %f", a, r);
}
void cube()
{
    float a,r;
    printf("Enter the number to find cube : ");
    scanf("%f", &a);
    r = a*a*a;
    printf("The cube of %f is %f", a, r);
}
void squareroot()
{
    float a,r;
    printf("Enter the number to find square root: ");
    scanf("%f", &a);
    r = sqrt(a);
    printf("The square root of %f is %f", a, r);
}
void cuberoot()
{
    float a,r;
    printf("Enter the number to find cube root: ");
    scanf("%f", &a);
    r= cbrt(a);
    printf("The cube root of %f is %f", a, r);
}
void inverse()
{
    float a,r;
    printf("Enter the number to find inverse: ");
    scanf("%f", &a);
    r = 1/a;
    printf("The inverse of %f is %f", a, r);
}
void naturallog()
{
    float a,r;
    printf("Enter the number to find naturallog: ");
    scanf("%f", &a);
    r = log(a);
    printf("The natural log of %f is %f", a, r);
}
void logvalue()
{
    float a,r;
    printf("Enter the number to find log values: ");
    scanf("%f", &a);
    r = log10(a);
    printf("The log to the base 10 of %f is %f", a, r);
}
void exponential()
{
    float a,r;
    printf("Enter the number to find exponential value: ");
    scanf("%f", &a);
    r = exp(a);
    printf("The e^ %f is %f", a, r);
}
void power()
{
    float a,b,r;
    printf("Enter the base value: ");
    scanf("%f", &a);
    printf("Enter the exponent value: ");
    scanf("%f", &b);
    r = pow(a,b);
    printf("%f ^ %f is %f", a, b, r);
}
void trigonometric()
{
	float s,c,t,sine,cosine,tangent;
	const float PI = 3.14159;
	printf("Range of sine function is from -90 t0 90\n");		
	printf("Enter angle in degree for sine function: ");  
  scanf("%f", &s); 
  printf("Range of cosine function is from 0 t0 180\n");
	printf("Enter angle in degree for cosine function: ");  
  scanf("%f", &c); 
  printf("Range of tangent function is -90 t0 90\n");
	printf("Enter angle in degree for tangent function: ");  
  scanf("%f", &t);  
	sine= sin(s * (PI / 180));
	cosine=cos(c * (PI / 180));
	tangent=tan(t * (PI / 180));
  printf("sin(%f) = %f\n", s,sine);  
  printf("cos(%f) = %f\n", c,cosine );  
  printf("tan(%f) = %f\n", t,tangent);  
}
void inversetrigonometric()
{
	float s,c,t,sineinv,cosineinv,tangentinv;
	const float PI = 3.14159;
	printf("Range of sine function is from -1 to 1\n");	
	printf("Enter value to find sine inverse: ");  
  scanf("%f", &s);  
  printf("Range of cosine function is from -1 to 1\n");
  printf("Enter value to find cosine inverse: ");  
  scanf("%f", &c); 
  printf("Range of tangent function is all real\n");
  printf("Enter value to find tan inverse: ");  
  scanf("%f", &t); 
	sineinv= asin(s)*(180/PI);
	cosineinv=acos(c)*(180/PI);
	tangentinv=atan(t)*(180/PI);
  printf("sininv(%f) = %f\n", s,sineinv);  
  printf("cosinv(%f) = %f\n", c,cosineinv );  
  printf("taninv(%f) = %f\n", t,tangentinv );  
}
void hyperbolic()
{
	float s,c,t,sineh,cosineh,tangenth;
	printf("Range of hyperbolic sine function is from -inf to inf\n");	
	printf("Enter value to find hyperbolic sine: ");  
  scanf("%f", &s);  
  printf("Range of hyperbolic cosine function is from 1 to inf\n");
  printf("Enter value to find hyperbolic cosine: ");  
  scanf("%f", &c); 
  printf("Range of hyperbolic tangent function is from -1 to 1\n");
  printf("Enter value to find hyperbolic tan: ");  
  scanf("%f", &t); 
	sineh= sinh(s);
	cosineh=cosh(c);
	tangenth=tanh(t);
  printf("sinh(%f) = %f\n", s,sineh);  
  printf("cosh(%f) = %f\n", c,cosineh );  
  printf("tanh(%f) = %f\n", t,tangenth );  
}
void inversehyperbolic()
{
	float s,c,t,sinehinv,cosinehinv,tangenthinv;
	printf("Range of hyperbolic sine  function is from -inf to inf\n");	
	printf("Enter value to find hyperbolic sine inverse: ");  
  scanf("%f", &s);  
  printf("Range of hyperbolic cosine function is from 1 to inf\n");
  printf("Enter value to find hyperbolic cosine inverse: ");  
  scanf("%f", &c); 
  printf("Range of hyperbolic tangent function is from -1 to 1\n");
  printf("Enter value to find hyperbolic tan inverse: ");  
  scanf("%f", &t); 
	sinehinv= asinh(s);
	cosinehinv=acosh(c);
	tangenthinv=atanh(t);
  printf("sinhinv(%f) = %f\n", s,sinehinv);  
  printf("coshinv(%f) = %f\n", c,cosinehinv );  
  printf("tanhinv(%f) = %f\n", t,tangenthinv);  
}
