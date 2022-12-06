// Program to find the average of n (n<10) numbers using arrays

//1 Declare an array of size(n)
//2 Input the values from user
//3 Average = (sum of all values)/n
//4 Display the Average Values

#include<stdio.h>
int main(void){
    int n, i, marks[4], sum=0, average;
    printf("Enter the n: ");
    scanf("%d", &n);
    
    for(i=0;i<n;++i){
        printf("Enter the marks of an each subject, one by one %d: ", i+1);
        scanf("%d", &marks[i]);
        sum +=marks[i];
    }
    average=sum/n;
    printf("Average of values inside of an array is %d ", average);
    
    
    return 0;
    
    
}