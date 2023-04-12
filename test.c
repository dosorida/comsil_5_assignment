#include <stdio.h>

int* i, j;

int arr[10][10][10];

struct student {
	char name[20];
	int age;
	char grade;
}std;

struct prof {
	char name[20];
	int age;
	char tel[20];
}prof;

union person {
	struct student a;
	struct prof b;
}per;

struct student class[10];

enum season {Spring, Summer, Fall, Winter} s;

void main(void) {
	j = 24;
	arr[3][0][5] = j;
	std.age = j;
	i = &std.age;

	struct student Tom = { "Tom", 24, 178.8, 'A' };
	per.a = Tom;

	printf("Hello.\n My name is Dosol.\n");

	s = Spring;
}