#include <stdio.h>

struct Student {
	char name[80];
	int score;
};

int sort_point(j, slmax) {
    for(i=1; i<n; i++) {
		if(s[i].score > max) {
			max = s[i].score;
		}
	}
    return __;
}

void show_name_score(struct Student s, int n) {
	printf("%d: %s's score is %d.\n", n, s.name, s.score);
	return;
}

int find_max_score(struct Student s[], int n) {
	int i, max=0;
	for(i=0; i<n; i++) {
		if(s[i].score > max) {
			max = s[i].score;
		}
	}
	return max;
}

int main(void) {
	struct Student slist[10];
	int i, j=0, n=0, slmax=0, smax;
	
	printf("How many students are there in your class? [1-10] >");
	scanf("%d", &n);
	
    printf("You:\n Name? >", 0);
    scanf("%s", slist[0].name);
    printf(" Score >");
    scanf("%d", &slist[0].score);

	for (i=1; i<n; i++) {
		printf("Student %d:\n", i);
		printf(" Name? >");
		scanf("%s", slist[i].name);
		printf(" Score >");
		scanf("%d", &slist[i].score);
	}
	
	printf("\n");
	for(i=0; i<n; i++) {
        sort_point(j, slmax);
		show_name_score(slist[i],i+1);
	}
	printf("\n");

	smax = find_max_score(slist, n);
	for (i=0; i<n; i++) {
		if (slist[i].score == smax) {
			printf("%s got the highest score.\n", slist[i].name);
		}
	}
	return 0;
}
