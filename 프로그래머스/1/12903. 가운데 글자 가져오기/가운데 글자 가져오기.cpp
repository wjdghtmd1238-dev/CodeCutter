#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int i=0;
    if(s.size()%2 ==0)
    {
        i=s.size()/2 -1;
        answer += s[i];
        answer += s[i+1];
        return answer;
    }
    else
    {
        i=s.size()/2;
        answer += s[i];
        return answer;
    }
        
    return 0;
}