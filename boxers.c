#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "boxers.h"


typedef struct boxers boxer;

boxer* Constructor(char* sex, int age, int weight, int height, int boxing_skills) // пользователь записывает всю информацию о бойце.
{
	boxer* person = malloc(sizeof(boxer));
	if (!person)
		return NULL;
	if(age)
		person->age;
	if (weight)
		person->weight;
	if (height)
		person->height;
	if (boxing_skills)
		person->boxing_skills;


	return person;

}

void Height_of_boxer(boxer person)
{
	
	float height_of_boxer = 0;
	scanf_s("Enter your height: %f", &height_of_boxer);


	if (height_of_boxer < 160) {
		printf("Short height");
		
	}

	if (height_of_boxer > 160 && height_of_boxer <= 175) {
		printf("Average height");
		
	}
	if (height_of_boxer > 175 && height_of_boxer <= 220) {
		printf("Tall height");
		
	}
	
	printf("\n");

}


void Weight_of_boxer(boxer person)
{
	char sex;
	float weight_of_boxer = 0;
	scanf_s("Enter your weight: %f", &weight_of_boxer);
	scanf_s("Enter your sex: %c", &sex);

	if (weight_of_boxer > 56 && weight_of_boxer <= 60) {
		printf("lightweight category");

	}

	if (weight_of_boxer > 60 && weight_of_boxer <= 64) {
		printf("light welterweight category");

	}
	if (weight_of_boxer > 64 && weight_of_boxer <= 69) {
		printf("Welterweight category");

	}
	if (weight_of_boxer > 69 && weight_of_boxer <= 75) {
		printf("Middleweight category");

	}
	if (weight_of_boxer > 75 && weight_of_boxer <= 81) {
		printf("Light heavyweight category");

	}
	if (weight_of_boxer > 81 && weight_of_boxer <= 91) {
		printf("Heavyweight category");

	}
	if (weight_of_boxer > 91) {
		printf("Super heavyweight category");

	}

	printf("\n");

}


void rank(boxer person)
{

	int wins = 0;
	scanf_s("Enter your wins:%d", &wins);


	if (wins < 5) {
		printf("No rank");
	}
	if (wins > 5 && wins < 10) {
		printf("3 rank");
	}
	if (wins > 10 && wins < 20) {
		printf("2 rank");
	}
	if (wins > 20) {
		printf("1 rank");
	}
	printf("\n");
}




void UFC(boxer person, int boxing_skills, int wins, int age) {
	if (wins > 15 && boxing_skills > 6 && (age > 18 && age <= 38)) {
		printf("You have a chance to get into the UFC");
	}
	else {
		printf("You don't have any chance to get into the UFC");
	}
	printf("\n");
}

void skill_of_boxer(boxer person,int boxing_skills) {

	if (boxing_skills == 0) {

		printf("Human not a boxer\n");
		

	}
	if (boxing_skills > 1 && boxing_skills <= 3) {

		printf("noobie boxer\n");
		
	}
	if (boxing_skills > 3 && boxing_skills <= 5) {

		printf("normal boxer\n");
		
	}
	if (boxing_skills > 5 && boxing_skills <= 7) {

		printf("professional boxer\n");

	}
	if (boxing_skills > 7 && boxing_skills <= 10) {

		printf("legendary boxer\n");

	}


}



boxer* Destructor(boxer* person)
{
	free(person->sex);
	free(person->age);
	free(person->weight);
	free(person->height);
	free(person->boxing_skills);
	free(person);
	return NULL;
}
