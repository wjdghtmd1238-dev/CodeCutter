#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    if(arr.size() >= 1 && arr.size() <100)
    {
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] >=-10000 && arr[i] <=10000)
            {
                answer+= arr[i];
               
            }
        }
         return answer/arr.size();
    }
    return 0;
}