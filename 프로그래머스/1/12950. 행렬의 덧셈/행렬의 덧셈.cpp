#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    for(int i=0; i<arr1.size();i++)
    {
         vector<int> row;
        for(int a=0; a<arr1[i].size();a++)
        {
            row.push_back(arr1[i][a] + arr2[i][a]);
        }
        answer.push_back(row);
        
    }
    return answer;
}