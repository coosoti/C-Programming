#include<stdio.h>

struct Student {
	char *name;
  	char *email;
  	float scores;
};

typedef struct Student student_t;

int main() {
	student_t student1;
    	
	student1.name = "John Doe";
    	student1.email = "j.doe@gmail.com";
    	student1.scores = 123.54646;
    	
	printf("\t\nName        : %s",student1.name);
	printf("\t\nEmail       : %s",student1.email);
	printf("\t\nScores      : %f",student1.scores);
    
    return 0;
}
