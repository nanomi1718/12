#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int ID; //학번
    char name[20];
    float grade;
};

int main (void) 
{
	struct student s1 = {2513020, "Namhee", 4.3};

	s1.ID =  123456;
	strcpy(s1.name, "Namhee2"); //문자열은 = 대신 strcpy() 함수를 사용해야 한다.
	s1.grade = 4.2;
	
	printf("ID: %i, name: %s, grade: %f\n", s1.ID, s1.name, s1.grade);
	
	return 0;
}
