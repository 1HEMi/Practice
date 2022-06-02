#pragma once
typedef struct boxers
{
	char* sex;
	int age;
	int weight;
	int height;
	int boxing_skills;
	
} boxer;

boxer* Constructor(char* sex, int age, int weight, int height, int boxing_skills);

void rank(boxer person);

void Weight_of_boxer(boxer person);

void Height_of_boxer(boxer person);

void UFC(boxer person);

void skill_of_boxer(boxer person);

boxer* Destructor(boxer person);

