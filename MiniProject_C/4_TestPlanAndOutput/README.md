# Test Plan
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


