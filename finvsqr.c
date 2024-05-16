// Author: John carmack
float InvSqrt(float x) { 
    float xhalf = 0.5f * x; 
    int i = *(int*)&x; 
    i = 0x5f3759df - (i >> 1); 
    x = *(float*)&i; 
    x = x * (1.5f - xhalf * x * x); 
    return x; 
} 
/*
float Q_rsqrt( float number ) 
{ 
	long i; 
	float x2, y; 
	const float threehalfs = 1.5F; 
	x2 = number * 0.5F; 
	y  = number; 
	i  = * ( long * ) &y;   
	i  = 0x5f3759df - ( i >> 1 );  
	y  = * ( float * ) &i; 
	y  = y * ( threehalfs - ( x2 * y * y ) ); 
	return y; 
} 

intresting bit manipulation method 3–4 times faster, with 1/10th the error.
And also one about 80% the speed with about <0.01% of the error.

A processor that would make this obsolete was released in 1999, when Intel introduced a lot of new commands, meaning that the “hack” was no longer useful because the hardware beat it.
*/
