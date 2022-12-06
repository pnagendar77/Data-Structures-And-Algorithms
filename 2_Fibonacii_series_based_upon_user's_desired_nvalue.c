//Fibonacii code
#include<stdio.h>
int main(void){
    int n, i;
    printf("Enter the range of fibonacii sequence: ");
    scanf("%d", &n);
    
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    
    //fib[0] & fib[1] is declared, to declare from 2:
    for(i=2;i<n;++i)
    
    fib[i]= fib[i-1]+fib[i-2];
    
    //To display fibonacci sequence from 0 to n 
    for(i=0;i<n;++i){
        printf("%d \n", fib[i]);
    }
    
    return 0;
}