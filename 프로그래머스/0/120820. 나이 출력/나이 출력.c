#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int age) {
    int answer = 2023;
    if(age >0 && age<=120)
    {
        answer -= age;
    }
    return answer;
}