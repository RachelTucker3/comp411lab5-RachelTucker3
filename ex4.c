#include <stdio.h>


int A[10];
int N;
int index;


int main() {

	scanf("%d", &N);
	for(int i = 0; i < N; i++) {

		a[i] = 0;

	}
	index = 0;

	recursive(A[], N, index);

}

int recursive(int A[], int N, int index) {

	if(N == 0) {

		A[N] = 1;
		printf(

	} else {

		A[N] = 0;
		recursive(A[], N-1, index);
		index = 1;
		recursive(A[], N-1, index);
	}

	return 0;


}
