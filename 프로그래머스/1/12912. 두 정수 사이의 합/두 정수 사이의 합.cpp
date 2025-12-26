#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long start;
    long long end;
    
    if(a>b)
    {
        start =b;
        end = a;
          for(long long i=b; i<=a; i++)
        {
        answer +=i;
        }
        return answer;
    }
    else if(a==b)
    {
        answer = a;
        return answer;
    }
    else if (a<b)
    {
        start = a;
        end =b;
          for(long long i=a; i<=b; i++)
        {
        answer +=i;
        }
        return answer;
    }
    
    
    return 0;
}