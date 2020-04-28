#include <stdio.h>
#include <math.h>
#include <limits.h>

int get_digits(unsigned long n);
int sqrt_digits(int digit);
unsigned long mysqrt(unsigned long n, int digit);

int main(void){
    // Your code here!
    unsigned long n, root;
    int digits;

    //scanf("%lu", &n);
    n = 0;

    digits = get_digits(n);
    digits = sqrt_digits(digits);

    root = mysqrt(n, digits);
    printf("%lu\n", root);
    return 0;
}


unsigned long mysqrt(unsigned long n, int digits){
    unsigned long int i, top_digit;

    top_digit = (unsigned long int)(pow(10, digits - 1));
    i = 1;

    for (;;i++){
        if (i*top_digit * i*top_digit > n) break;
    }
    i--;
    i = i * top_digit;
    for (;;i++){
        if (i*i > n) break;
    }
    return i - 1;
}



int get_digits(unsigned long n){
    int i = 0;
    for (;n != 0;){
        n /= 10;
        i++;
    }
    return i;
}


int sqrt_digits(int digits){
    int r;
    r = digits % 2;
    if ( r == 0 ){
        digits /= 2;
    }
    else {
        digits = (digits / 2) + 1;
    }
    return digits;
}

//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
