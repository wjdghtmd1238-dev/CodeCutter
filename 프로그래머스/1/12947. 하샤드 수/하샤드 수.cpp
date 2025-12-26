#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    
    vector<int> a;
    int b = 0;
    int orignal = x;
    bool answer = true;
    while(x >0)
    {
        a.push_back(x%10);
        
        
        x /=10;
    }
    for(int d : a)
    {
        b += d;
    }
    if(orignal % b == 0)
    {
        answer = true;
        return answer;
    }
    else if(orignal % b !=0)
    {
        answer = false;
        return answer;
    }
    
    return answer;
}