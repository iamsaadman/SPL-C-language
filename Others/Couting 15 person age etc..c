//C program to read age of 15 person and count total Baby age, School age and Adult age
#include <stdio.h>
int main()
{
	int age;
	int cnt_baby=0,cnt_school=0,cnt_adult=0;
	int count=0;

	while(count<15)
	{
		printf("Enter age of person [%d]: ",count+1);
		scanf("%d",&age);

		if(age>=0 && age<=5)
			cnt_baby++;
		else if(age>=6 && age<=17)
			cnt_school++;
		else
			cnt_adult++;

		//increase counter
		count++;
	}

	printf("Baby age: %d\n",cnt_baby);
	printf("School age: %d\n",cnt_school);
	printf("Adult age: %d\n",cnt_adult);

	return 0;
}
