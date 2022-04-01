# CALCULATOR
## Introduction:
Mathematical operations play a major role in our daily lives. In our daily life, we will be involving with different types of calculations. Ordinary calculator is used to solve basic mathematical operations. For physics, chemistry, advanced mathematics, etc such calculators are sometimes insufficient. Advanced problems can be solved with functions such as logarithm, exponential, trigonometric, hyperbolic, etc. Calculator operations such as addition, subtraction, multiplication, division, modulus, factorial, square, cube, square root, cube root, inverse, natural log, log, exponential, power, trigonometric, inverse trigonometric, hyperbolic, inverse hyperbolic are implemented using C language in this project.
## Objective:
The main objective of this project is to solve basic and advanced mathematical problems. The operations to be performed are addition, subtraction, multiplication, division, modulus, factorial, square, cube, square root, cube root, inverse, natural log, log, exponential, power, trigonometric, inverse trigonometric, hyperbolic, inverse hyperbolic.
## Defining the System
![defining the system](https://user-images.githubusercontent.com/101622270/161197939-99a4c222-8ae9-494a-9f6e-b7d76b1d5160.jpg)
## Features:
•	Addition: The addition add() function takes two operands as input and it results in a+b.

•	Subtraction: The subtraction sub() function takes two operands as input and it results in a-b.

•	Multiplication: The multiplication multi() function takes two operands as input and it results in a*b.

•	Division: The division division() function takes two operand as input and it results in a/b.

•	Modulus: The modulus modulus() function takes two operands as input and it results in a%b.

•	Factorial: The factorial factorial() function takes one operand as input and it results in a!.

•	Square: The square square() function takes one operand as input and it results in a^2.

•	Cube: The cube cube() function takes one operand as input and it results in a^3.

•	Square root: The square root squareroot() function takes one operand as input and it results in √a. 

•	Cube root: The cube root cuberoot() function takes one operand as input and it results in ∛a.

•	Inverse: The inverse inverse() function takes one operand as input and it results in a-1.

•	Natural log: The natural log naturallog() function takes one operand as input and results in ln(a).

•	Log value: The log value logvalue() function takes one operand as input and it results in log10(a).

•	Exponential: The exponential exponential() function takes one operand as input and it results in exp(a).

•	Power: The power power() function takes two operands as input and it results in a^b.

•	Trigonometric: The trigonometric trigonometric() function takes one operand as input for each function and results in corresponding sin, cos, tan values.

•	Inverse trigonometric: The inverse trigonometric inversetrigonometric() function takes one operand as input for each function and results in corresponding sin-1, cos-1, tan-1 values.

•	Hyperbolic: The hyperbolic hyperbolic() function takes one operand as input for each function and results in corresponding sinh, cosh, tanh values.

•	Inverse hyperbolic: The inverse hyperbolic inversehyperbolic() function takes one operand as input for each function and results in corresponding sinh-1, cosh-1, tanh-1 values.

## 4W’s and 1’H:
## Who:
This project is used by everyone in day-to-day life. All students and employee will use this project to find solutions for difficult problems. Software engineers, researchers, mathematician etc will use this project to make calculations easy.
## What:
Difficult problems can be solved easily using this project that contains functions such as addition, subtraction, multiplication, division, modulus, factorial, square, cube, square root, cube root, inverse, natural log, log, exponential, power, trigonometric, inverse trigonometric, hyperbolic, inverse hyperbolic are implemented using C language. User can use the program and get the required solutions.
## When:
This project can be used whenever difficult calculations are required to perform and also the results will be obtained quickly. Researchers can use this project to get quick calculation output. For doing calculations with large numbers, this project is more helpful.
## Where:
This project can be used in all the domains. Students, employee, researchers etc all over the world.
## How:
This project is implemented in C language. This program can be executed in system which has Linux or Windows operating system.
## SWOT ANALYSIS:
## STRENGTH
Able to solve difficult problems
## WEAKNESS
Limited number of operations are defined
## OPPORTUNITIES
Solve problems contain large numbers
## THREATS
Security issues
## High Level Requirements
| ID  | Description | Status |
| --- | --- | --- |
| HLR-1 | Able to do basic mathematical operations | Implemented |
| HLR-2 | Able to do all type of values | Implemented |
## Low Level Requirements
| ID  | Description | Status |
| --- | --- | --- |
| LLR-1 | User able to read output data | Implemented |
| LLR-2 | Displays output data without any errors | Implemented |
# Design
- Behavioural Diagram
- Structural Diagram
![Flowchart_1](https://user-images.githubusercontent.com/101622270/160973420-155e590d-4d46-4ccc-ad94-fb2ff17f8f65.jpg)
![Flowchart_2](https://user-images.githubusercontent.com/101622270/160973444-7bb0b17b-3341-4707-abb5-9fac07473797.jpg)
![behavior Diagram](https://user-images.githubusercontent.com/101622270/160973115-9f625d6d-671f-4891-86aa-a89ceec3671e.jpg)
![structural Diagram](https://user-images.githubusercontent.com/101622270/160973223-bdeecc4a-1c04-4eb4-8093-9f270905d59a.jpg)
## Implementation
## Folder Structure
Folder        | description
--------------| ----------------------------------------------
`inc`         | All header files
`src`         | Main source code for Number Conversion
`test`        | All source code and data for testing purposes
`unity`       | Unity files
## Test Plan
## Table no 1: High level test plan
Test ID | Description | Expected I/P | Expected O/P | Actual Output | Type of test  
--------|-------------|---------|---------|---------------|---------------
H_01  | Performing operation ‘+’ | 10,20 | 30.000000 | 30.000000 | Requirement based
H_02  |Performing operation ‘-’  | 0,3 | -3.000000 | -3.000000 | Requirement based
H_03  | Performing operation ‘*’| 2,5 | 10.000000  | 10.000000  | Requirement based
H_04  | Performing operation ‘/’ | 4,2  | 2.000000  | 2.000000  | Requirement based
H_05  | Performing operation ‘%’ | 17,2  | 1.000000 | 1.000000 | Requirement based
H_06  | Performing operation ‘!’| 5  | 120.000000  | 120.000000  | Requirement based
H_07  | Performing operation ‘^2’ | 4 | 16.000000 | 16.000000 | Requirement based
H_08  |Performing operation ‘^3’  | 2 | 8.000000 | 8.000000 | Requirement based
H_09  | Performing operation ‘sqrt’| 4 | 2.000000  | 2.000000  | Requirement based
H_10  | Performing operation ‘cbrt’ | 8  | 2.000000  | 2.000000 | Requirement based
H_11  | Performing operation ‘^-1’ | 2  | 0.500000 | 0.500000  | Requirement based
H_12  | Performing operation ‘log’| 2  | 0.693147  | 0.693147  | Requirement based
H_13  | Performing operation ‘log10’ | 10 | 1.000000 | 1.000000 | Requirement based
H_14  |Performing operation ‘exp’  | 1 | 2.718282 | 2.718282 | Requirement based
H_15  | Performing operation ‘pow’| 4,2 | 16.000000  | 16.000000 | Requirement based
H_16  | Performing operation ‘sin,cos,tan’ | 0,0,0  | 0.000000, 0.000000, 0.000000  | 0.000000, 0.000000, 0.000000  | Requirement based
H_17  | Performing operation ‘sin-1,cos-1,tan-1’ | 0,0,0  |  0.000000, 90.000000, 0.000000 | 0.000000, 90.000076, 0.000000 | Requirement based
H_18  | Performing operation ‘sinh,cosh,tanh’| 0,1,1 | 0.000000, 1.543081, 0.761594  | 0.000000, 1.543081, 0.761594  | Requirement based
H_19  | Performing operation ‘sinh-1,cosh-1,tanh-1’| 0,1,0  | 0.000000, 0.000000, 0.000000 | -0.000000, 0.000000, 0.000000  | Requirement based
## Table no 2: Low level test plan
| Test ID | HLT ID |Description                                              | Expected I/P | Expected O/P | Actual Output |Type Of Test  |    
|-------------|------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | H_06, H_07, H_08,H_09,H_10,H_11,H_12,H_13,H_14|Tested on functions which accept single value as input|  a, n |SUCCESS|SUCCESS |Technical |
|  L_02       | H_01, H_02, H_03,H_04,H_05,H_15|Tested on functions which accept two values as input|  a, b |SUCCESS|SUCCESS |Technical |
|  L_03       | H_16, H_17,H_18,H_19 |Tested on function which accept three value as input|  s,c,t  |SUCCESS|SUCCESS|Technical |
## Output
![output_1](https://user-images.githubusercontent.com/101622270/160973511-7c54301d-a839-4c49-b830-4c6aff35e71e.jpg)
![output_2](https://user-images.githubusercontent.com/101622270/160973582-b12f3303-3ad2-427e-8440-75825eeda052.jpg)
![output_3](https://user-images.githubusercontent.com/101622270/160973595-f2bee99a-9e75-4e9d-88d7-86a0f4266b76.jpg)
![output_4](https://user-images.githubusercontent.com/101622270/160973613-695f7ec3-aaf1-44c9-b702-f01d86161e68.jpg)


