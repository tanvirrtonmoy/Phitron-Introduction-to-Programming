#include<stdio.h>


int char_to_ascii(char a)

{
    int answer = (int)a;
    return answer;

}

int main()
{
    char x;
    scanf("%c",&x);
    int value =  char_to_ascii(x);
    printf("%d",value);




    return 0;
}