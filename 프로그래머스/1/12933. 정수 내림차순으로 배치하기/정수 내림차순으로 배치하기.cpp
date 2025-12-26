#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    vector<long long> answer;
   
    long long j;
    while (n > 0)
    {
		answer.push_back(n % 10);

       

        n /= 10;
    }
    sort(answer.rbegin(), answer.rend());
    long long ans = 0;
    for (int x : answer)
        ans = ans * 10 + x;
    return ans;
}