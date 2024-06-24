#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(vector<int> a, vector<int> b) { 
    cout << "a[1] : " << a[1] << ", b[1] : " << b[1] << endl;
    return a[1] < b[1]; 
}

int solution(vector<vector<int>> routes) {
    int answer = 0;
    int limit = -30001;
    sort(routes.begin(), routes.end(), cmp);

    for (vector<int> route : routes) {
		cout << route[0] << " " << route[1] << endl;
	}

    for (int i = 0; i < routes.size(); i++) {
        cout << "limit : " << limit << " " << endl;
        if (limit < routes[i][0]) {
            answer++;
            limit = routes[i][1];
        }
    }
    return answer;
}

int main() {
	vector<vector<int>> routes = { {-20, -15}, {-14, -5}, {-18, -13}, {-5, -3} };
	cout << solution(routes) << endl;
	return 0;
}