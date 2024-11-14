#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		string s;
		cin >> s;

		stack <char> st;

		for (int j = 0; j < s.length(); j++) {
			if (st.empty()) {
				st.push(s[j]);
			}
			else {
				if (st.top() == '(' && s[j] == ')') {
					st.pop();
				}
				else {
					st.push(s[j]);
				}
			}
		}
		if (st.empty()) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}

	return 0;
}