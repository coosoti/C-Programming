#include <stdio.h>

struct Student
{
	char *name;
	char *email;
	float scores;
};

int main()
{
	struct Student student1;
	struct Student *ptr;
	ptr = &student1;
	//dereferencing the pointer before accessing the data with '.' symbol
	
	(*ptr).name = "John Doe";

	//We can also use '->' to do the same
	ptr->email = "j.doe@gmail.com";
	ptr->scores = 124.467;

	printf("\t\nName        : %s",student1.name);
	printf("\t\nEmail       : %s",student1.email);
	printf("\t\nScores      : %f",student1.scores);

    	return 0;
}	
