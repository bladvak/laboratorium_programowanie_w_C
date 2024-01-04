#ifndef FIBO_H
#define FIBO_H

float fibo(int n){
    if(n == 0)
        return 0;
    if(n ==1)
        return 1;
    return fibo(n-1) + fibo(n-2);
}


#endif