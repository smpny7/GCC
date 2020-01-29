#include <stdio.h>
#include <string.h>

void cal(int eng, char *rank){
    if(eng>=100) {
        strcpy(rank, "S+");
    }
}

int main(void) {

	int eng = 100;
	char rank[10] = {0};

    cal(eng, &rank);
	
	printf("engRank=%s\n", rank);
	
	return 0;
}
