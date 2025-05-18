#include <stdio.h>

int sum(int num1, int num2)
{

    // printf("%d %d",num1,num2);

    int answer = num1 + num2;

    return answer;
}

int sub(int num1, int num2)
{

    // printf("%d %d",num1,num2);

    int answer = num1 - num2;

    return answer;
}

int main() // jody main function age likte chai tahole int sub(int num1, int num2); ai line ta int main ar upore likbo and ses a ; dibo

{

    // sum(5,10);

    // user inpu-----
    int a, b;
    scanf("%d %d", &a, &b);
    int value = sum(a, b);

    // int value = sum(5, 10);
    // int value2 = sum(30, 76);
    // int value3 = sum(69, 69);

    // int value4=sub(69,14);
    printf("%d\n", value);
    // printf("%d\n", value2);
    // printf("%d\n", value3);
    // printf("sub = %d\n",value4);

    return 0;
}