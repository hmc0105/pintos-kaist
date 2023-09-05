#ifndef THREADS_FLOAT_H
#define THREADS_FLOAT_H

#define F (1<<14)
int fp_int2fp(int n);
int fp_fp2int(int x);
int fp_fp2int_near(int x);
int fp_add_fp_fp(int x, int y);
int fp_sub_fp_fp(int x, int y);
int fp_add_fp_int(int x, int n);
int fp_sub_fp_int(int x, int n);
int fp_mul_fp_fp(int x, int y);
int fp_mul_fp_int(int x, int n);
int fp_div_fp_fp(int x, int y);
int fp_div_fp_int(int x, int n);

#endif
