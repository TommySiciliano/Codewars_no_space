#include <iostream>
using namespace std;

/*
 * Task no_space
 */

char *no_space(char *strin) {

	int arrayLength=0;
	int noSpaceArrayLength=0;
	int j=0;
	char *ptrStrin = strin;
	char result[100] = "";

	while( *ptrStrin++ != '\0') {
		arrayLength++;
	}
	// points to 'strin' array beginning
	ptrStrin = strin;
	noSpaceArrayLength = arrayLength;

	for(int i=0; i<arrayLength; i++) {

		if( ptrStrin[i] != ' ' ) {
			result[j++] = strin[i];
			noSpaceArrayLength--;
		}
	}
	strin = result;
	//printf("%s ",strin);
	return strin;
}



int main() {


}
