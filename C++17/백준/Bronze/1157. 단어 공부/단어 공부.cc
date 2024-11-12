#include <stdio.h>
#include <string.h>

char word[1000001] = { 0 };
int arr[26] = { 0 };

int main() {
	char ans;
	int max = 0;
	
	scanf("%s", word);
	int size = strlen(word);

	for (int i = 0; i < size; i++) {
		if (word[i] >= 'a') {
			arr[word[i] - 'a']++;
		}
		else {
			arr[word[i] - 'A']++;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (arr[i] == max) {
			ans = '?';
		}
		else if (arr[i] > max) {
			max = arr[i];
			ans = 'A' + i;
		}
	}

	printf("%c", ans);

    return 0;
}