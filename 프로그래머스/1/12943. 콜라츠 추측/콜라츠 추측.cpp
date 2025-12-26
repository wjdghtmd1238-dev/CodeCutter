#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long answer = num;
    int returnvalue =0;
    
    while(returnvalue <500)
    {
        if (num == 1)
        { return 0;}
            
        else if(answer %2 == 0)
        {
            answer =answer/2;
        }
        else
        {
           answer=answer*3+1;
        }
         returnvalue++;
          if(answer == 1)
        {
            return returnvalue;
        }
       
       
    }
    return -1;
}