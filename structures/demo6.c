#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
	char *name;
	char *email;
	float scores;
} student_t;

student_t *new_student(char *name, char *email, float scores)
{
	student_t *student;
	student = malloc(sizeof(struct Student));
	if (student == NULL)
		return (NULL);
	student->name = name;
	student->email = email;
	student->scores = scores;
	return student;
}
int main()
{
	student_t *student;
	
	student = new_student("Jane Doe", "janedoe@gmail.com", 22.795);
	if (student == NULL)
		return (-1);
	printf("\t\nName        : %s",student->name);
	printf("\t\nEmail       : %s",student->email);
	printf("\t\nScores      : %f",student->scores);

    	return 0;
}	
