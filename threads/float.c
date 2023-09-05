#include "threads/float.h"
#include <stdint.h>

int fp_int2fp(int n){
    return n*F;
}
int fp_fp2int(int x){
    return x / F;
}
int fp_fp2int_near(int x){
    if(x>=0){
        return (x+F/2)/F;
    }
    else{
        return (x-F/2)/F;
    }
}
int fp_add_fp_fp(int x, int y){
    return x+y;
}
int fp_sub_fp_fp(int x, int y){
    return x-y;
}
int fp_add_fp_int(int x, int n){
    return x+n*F;
}
int fp_sub_fp_int(int x, int n){
    return x-n*F;
}
int fp_mul_fp_fp(int x, int y){
    return ((int64_t) x)*y/F;
}
int fp_mul_fp_int(int x, int n){
    return x*n;
}
int fp_div_fp_fp(int x, int y){
    return ((int64_t) x)*F/y;
}

int fp_div_fp_int(int x, int n){
    return x/n;
}