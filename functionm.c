#include<stdio.h>
int multiply(int a, int b){
    return a*b;
    }
    int add(int a, int b){
return a+b;
    }
    int sub(int a, int b){
        return a-b;
    }


int main(){
    int result1 = multiply(19, 40);
    printf("%d\n",result1);
    int result2 = multiply(59, 57);
    printf("%d\n", result2);
    int result3 = sub(40, 36);
    printf("%d\n", result3);
    int result4 = add(26, 49);
    printf("%d\n", result4);
    return 0;
}

