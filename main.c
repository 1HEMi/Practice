#include "boxers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
	boxer* person = Constructor("Man",30,90,200,5);
	boxer* Constructor(char* sex, int age, int weight, int height, int boxing_skills);
	
	rank(*person);

	Weight_of_boxer(*person);

	Height_of_boxer(*person);

	UFC(*person);
	
	skill_of_boxer(*person);
	
	Destructor(*person);
}
