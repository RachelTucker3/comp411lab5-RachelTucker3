#include <stdio.h>
#include <string.h>

char A[1] = {'\0'};
int N;
char recursive(char a[], int N);

int main() {

	scanf("%d", &N);

	recursive(A, N);

}

char recursive(char a[], int N) {

	if(N == 0) {

		printf("%s\n", a);

	} else {

		int cur = strlen(a);
		a[cur] = '0';
		a[cur + 1] = '\0';
		recursive(a, N-1);
		if(a[cur-1] != '1') {
			a[cur] = '1';
	                A[cur + 1] = '\0';
			recursive(a, N-1);
		}
	}


}
