#include<stdio.h>
int main(void){
    
    // Declaring the length/size of an array 
    int n;
    printf("\n Enter the length of an Array: ");
    scanf("%d", &n);
    
    int i;
    //Declaring the Array with a variable abc
    int abc[n];
    
    printf("\n Enter the values for an n sized Array: ");
    for (i=0;i<n;++i){
        scanf("%d", &abc[i]); // Storing the values in an array abc
    }
    printf("\n The Array Values are: ");
    for(i=0;i<n;++i){
        printf("%d ", abc[i]);
    }
    return 0;
}
