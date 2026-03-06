#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
	vector<int> answer;
	int x, y;
	int total = brown + yellow;
	for (y = 3; y <= total / 2; y++)
	{
		if (total % y == 0)
		{
			x = total / y;
		}
		if ((x - 2) * (y - 2) == yellow)
		{
			answer.push_back(x);
			answer.push_back(y);
			break;
		}
	}
	return answer;
}