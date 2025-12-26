#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    if (arr.size() == 1)
    {
        answer.push_back(-1);
         return answer;
    }
    
    
    int minValue = *min_element(arr.begin(), arr.end());
    arr.erase(find(arr.begin(),arr.end(),minValue));
   
    
   
    return arr;
    
}