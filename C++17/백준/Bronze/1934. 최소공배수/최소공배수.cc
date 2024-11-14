#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int lcm = 0;
        if (a >= b) {
            lcm = a;
        }
        else {
            lcm = b;
        }
        for (int i = lcm; i > 0; i--) {
            if (a % i == 0 && b % i == 0) {
                cout << a * (b / i) << "\n";
                break;
            }
        }
    }
    return 0;
}