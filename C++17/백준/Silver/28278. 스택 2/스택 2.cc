#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	stack <int> st;

	for (int i = 0; i < n; i++) {
		int num;
		scanf("%d", &num);

		if (num == 1) {
			int first = 0;
			scanf("%d", &first);
			st.push(first);
		}
		else if (num == 2) {
			if (st.empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", st.top());
				st.pop();
			}
		}
		else if (num == 3) {
			printf("%zd\n", st.size());
		}
		else if (num == 4) {
			printf("%d\n", st.empty() ? 1 : 0);
		}
		else {
			printf("%d\n", st.empty() ? -1 : st.top());
		}
	}
	return 0;
}