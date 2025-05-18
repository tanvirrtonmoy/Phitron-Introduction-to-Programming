#include <stdio.h>

void sum(int num1, int num2)//return na korle void dibo
{

    int answer = num1 + num2;

    //retrun; ---- return type dite parbo nah coz void use korci
    //so aikhan a return use kore direct main function a jeta parbo

    printf("%d\n", answer);//return something na use korle function ar namer age void 
    //and function ar modde print kore dibo

    // return answer;
}

void sub(int num1, int num2)
{

    int answer = num1 - num2;
    printf("%d\n", answer);

    // return answer;
}

int main() // jody main function age likte chai tahole int sub(int num1, int num2); ai line ta int main ar upore likbo and ses a ; dibo

{

    // sum(5,10);

    // user input-----
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    sub(a, b);

    //printf("hello");//direct ai line excute hobe

    // int value = sum(5, 10);
    // int value2 = sum(30, 76);
    // int value3 = sum(69, 69);

    // int value4=sub(69,14);
    // printf("%d\n", value);
    // printf("%d\n", value2);
    // printf("%d\n", value3);
    // printf("sub = %d\n",value4);

    return 0;
}