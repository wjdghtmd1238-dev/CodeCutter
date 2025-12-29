#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int c;
    if(left >right)
    {
        
        for(int i=right; i<=left; i++)
        {
            c=0;
            for(int b=1; b<=i; b++)
            {
                if(i %b ==0)
                {
                    c++;
                }
                
            }
            if(c%2 ==0)
            {
            answer+= i;
            }
            else
            {
            answer-= i;
            }
          
        }
    }
    else
    {
        for(int i=left; i<=right; i++)
        {
            c=0;
            for(int b=1; b<=i; b++)
            {
                if(i %b ==0)
                {
                    c++;
                }
                
            }
            if(c%2 ==0)
            {
            answer+= i;
            }
            else
            {
            answer-= i;
            }
        }
    }
    return answer;
}