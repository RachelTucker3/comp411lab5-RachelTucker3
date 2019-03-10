#include <stdio.h>

int A[10][10];
int B[10][10];
int C[10][10];
int M;

int main() {
	// code here


	scanf("%d", &M);
	for(int q = 0; q < M; q++) {
		for(int i = 0; i < M; i++) {

			scanf("%d", &A[q][i]);
			scanf("\n");

		}
	}

	for(int r = 0; r < M; r++) {
                for(int s = 0; s < M; s++) {

                        scanf("%d", &B[r][s]);
                        scanf("\n");

                }
        }

	for(int row = 0; row < M; row++) {

		printf("\n");

		for(int col = 0; col <  M; col++) {

			int temp;
			for(int v = 0; v < M; v++) {

				C[row][col] = C[row][col] + (A[row][v] * B[v][col]);

			}
			C[row][col] == temp;
			printf("%6d", C[row][col]);

		}

	}

}
