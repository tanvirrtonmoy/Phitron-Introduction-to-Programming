#include <stdio.h>

int sum()
{

    // printf("%d %d",num1,num2);
    int a, b;
    scanf("%d %d", &a, &b);

    int answer = a + b;

    return answer;
}

int sub()
{

    int a, b;
    scanf("%d %d", &a, &b);

    // printf("%d %d",num1,num2);

    int answer = a - b;

    return answer;
}

int main() // jody main function age likte chai tahole int sub(int num1, int num2); ai line ta int main ar upore likbo and ses a ; dibo

{

    // sum(5,10);

    // user inpu-----

    int value = sum();
    int value2 = sub();

    // int value = sum(5, 10);
    // int value2 = sum(30, 76);
    // int value3 = sum(69, 69);

    // int value4=sub(69,14);
    printf("%d\n", value);
    printf("%d\n", value2);
    // printf("%d\n", value3);
    // printf("sub = %d\n",value4);

    return 0;
}