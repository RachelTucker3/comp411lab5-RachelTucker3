#include <stdio.h>
#include <string.h>

char A[1] = {'\0'};
int N;
char recursive(char a[], int n);

int main() {

	scanf("%d", &N);

	recursive(A, N);

}

char recursive(char a[], int n) {

	if(n == 0) {

		printf("%s\n", a);

	} else {

		int cur = strlen(a);
		a[cur] = '0';
		a[cur + 1] = '\0';
		recursive(a, n-1);
		a[cur] = '1';
		a[cur + 1] = '\0';
		recursive(a, n-1);

	}


}
