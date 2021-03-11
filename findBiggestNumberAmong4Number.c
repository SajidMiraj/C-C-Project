#include<stdio.h>
 
int main(){
    int num1, num2, num3, num4, store, elon;

    printf("Input 4 number for checking difference: \n");

    printf("NUM1 ");
    scanf("%d", &num1);

    printf("NUM2 ");
    scanf("%d", &num2);

    printf("NUM3 ");
    scanf("%d", &num3);

    printf("NUM4 ");
    scanf("%d", &num4);

    if (num1<num2){
       store = num2; 
    }
    
    else if(num1>num2){
        store = num1; 
    }

    if(num3<num4){
        elon = num4; 
    }

    else if(num3>num4){
        elon = num3; 
    }    

    if (store>elon){
        printf("Big Number = %d", store);
    }
    else{
        printf("Big Number = %d", elon);
    }
    
    return 0;
}