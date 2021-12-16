#include <stdio.h> 
#include <string.h>
#include <stdlib.h>


int main(void) {
	int n;
	char s[101];
	int sum = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int cnt[26] = { 0 };
		scanf("%s", &s);
		int j = 0;

		while (s[j] != '\0') {
			if (j == 0) {
				cnt[(int)s[j] - 'a'] += 1;
			}
			else if (s[j] != s[j - 1]) {
				if (cnt[(int)s[j] - 'a'] == 0) {
					cnt[(int)s[j] - 'a'] += 1;
				}
				else {
					cnt[(int)s[j] - 'a'] = -1;
				}
			}
			else if (s[j] == s[j - 1] and cnt[(int)s[j] - 'a'] > 0) {
				cnt[(int)s[j] - 'a'] += 1;
			}
			j++;
		}

		for (int k = 0; k < 26; k++) {
			if (cnt[k] == -1) {
				break;
			}
			if (k == 25 and cnt[k] >= 0) {
				sum += 1;
			}
		}
		
	}

	printf("%d\n", sum);
	return 0;
}
