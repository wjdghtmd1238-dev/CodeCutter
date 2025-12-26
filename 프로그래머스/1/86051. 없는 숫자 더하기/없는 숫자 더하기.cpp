#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<int> check_numbers ={0,1,2,3,4,5,6,7,8,9};
    
    sort(numbers.begin(),numbers.end());
    for(int x : check_numbers)
    {
        if(find(numbers.begin(),numbers.end(),x) == numbers.end()){  answer+=x;}
            
    }
    
    
    return answer;
}