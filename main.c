//
//  main.c
//  primes_v1
//
//  Ad Infinitum et Ultra
//
//  Created by NR
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    long long i = 2, v = 2, p = 0, num;
    
    num = 10000;
    
    while (p <= num) {
        for (v = 2; v <= i; v++) {
            if (i%v == 0 && i != v) {
                v = 2;
                break;
            }
            if (i == v) {
                printf("Prime: %lld\n", i);
                p++;
            }
        }
        i++;
        
        //Delete to limit the number of primes found
        num++;
    }
    
    return 0;
}
