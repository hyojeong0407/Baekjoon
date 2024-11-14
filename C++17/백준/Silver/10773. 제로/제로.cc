#include <iostream>
#include <stack>

using namespace std;

int main() {
	int k;
	scanf("%d", &k);

	stack <int> st;

	for (int i = 0; i < k; i++) {
		int num;
		scanf("%d", &num);

		if (num == 0) {
			st.pop();
		}
		else {
			st.push(num);
		}
	}

	int sum = 0;
	while (!st.empty()) {
		sum += st.top();
		st.pop();
	}

	printf("%d", sum);

	return 0;
}