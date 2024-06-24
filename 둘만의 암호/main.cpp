#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

char addIndex(char c, string skip, int index) {
	char addNum = c;

	int start = 0;
	while (start < index) {
		if (++addNum > 122) addNum = 97;

		if (skip.find(addNum) == string::npos) {
			start++;
		}
	}
	return addNum;
}

string solution(string s, string skip, int index) {
    string answer = "";

    for (char c : s) {
		answer += addIndex(c, skip, index);
    }

    return answer;
}

int main() {
	string s = "aukks";
	string skip = "wbqd";

	cout << solution(s, skip, 5) << endl;

	return 0;
}