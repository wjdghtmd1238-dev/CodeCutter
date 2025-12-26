#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    
    for(int i =0; i<=n; i++)
    {
        if(i!=0){
        answer.push_back(x *i);
        }
    }
    
    return answer;
}