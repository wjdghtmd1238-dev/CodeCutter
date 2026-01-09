#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int result = 0;
    vector<int> three;
    
    while(n>0)
    {
        answer = n%3;
        n /=3;
        three.push_back(answer);
    }
    for(int i =0; i<three.size(); i++)
    {
        result = result *3 + three[i]; 
    }
    
    return result;
}