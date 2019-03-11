#include <stdio.h>
#include <string.h>

char animals[20][15];
char lyrics[20][60];
int  number;

void nurseryrhyme(int current) {

	if(current == 0) {

		printf("There was an old lady who swallowed a ");
		printf("%s;", animals[current]);
		nurseryrhyme(current + 1);

	} else {

		printf("%*s", current, "");
		printf("She swallowed the %s to catch the %s", animals[current-1], animals[current]);

		if(current < number-1) {
		nurseryrhyme(current+1);
		}

	}

	printf("%*s", current, "");
	printf("I don't know why she swallowed a %s - %s", animals[current], lyrics[current]);
}


int main() {
	int i=0;

	while (i < 20) {

	fgets(animals[i], 15, stdin);
	int q = strlen(animals[i]);
                                                // read the next animal name
	if (strcmp(animals[i], "END\n") == 0)       // if it is "END\n", we are done reading
	break;
	animals[i][q-1] = '\0';
	fgets(lyrics[i], 60, stdin);
                                                // determine the length of the string read
                                                // strip the newline at the end
                                                // read the lyric corresponding to the animal
	i++;
	}

	number = i;

 	nurseryrhyme(0);
}
