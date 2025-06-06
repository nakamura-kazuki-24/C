/* struct03.c */

#include <stdio.h>

struct Data {
	char name[32];
	int age;
	double bl;
	double bw;
	double bmi;
};

int struct_input(struct Data *);

int main()
{
	struct Data MyData;
	char format[] = "%s����(%d��)�̃v���t�B�[��\n"
		"�g�� = %5.1fcm, �̏d = %5.1fkg, BMI = %4.1f\n";
	char buffer[256];

	struct_input(&MyData);
	sprintf(buffer, format,
		MyData.name, MyData.age, MyData.bl, MyData.bw, MyData.bmi);
	printf(buffer);
	printf("%s", MyData.name);
	return 0;
}

int struct_input(struct Data *p)
{
	printf("����---");
	gets(p->name);
	printf("�N��---");
	scanf("%d", &p->age);
	printf("�g��(cm)---");
	scanf("%lf", &p->bl);
	printf("�̏d(kg)---");
	scanf("%lf", &p->bw);
	p->bmi = p->bw * 10000.0 / (p->bl * p->bl);	

	return 0;
}



	
