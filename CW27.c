#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdint.h>
#include<stdbool.h>
#include<string.h>
#include<conio.h>

enum firm_t {
		Bosh,
		LG
	};


enum colour_t {
	white,
	black,
	silver
};

enum steam_t {
	YES,
	NO
};

enum screen_t {
	Touchscreen,
	RP
};

enum memory_t {
	one_Mb,
	two_Mb
};

enum processor_t {
	AMD_1200_MHz,
	AMD_1000_Mhz
};

struct wash_machines_t {
	enum firm_t firm;
	enum colour_t colour;
	int width;
	int leght;
	int height;
	int power;
	int spin_speed;
	int heating_temperature;
};

struct irons_t {
	enum firm_t firm;
	int model;
	enum colour_t colour;
	int min_temp;
	int max_temp;
	enum steam_t steam;
	int power;
};

struct phones_t {
	enum firm_t firm;
	enum colour_t colour;
	enum screen_t screen;
	enum memory_t memory;
	enum processor_t processor;
};

struct animals_t {
	char mammals[100];
	char name[100];
};

void function_animals(struct animals_t *p)
{
	gets(p->mammals);
	gets((*p).name);
}

int main()
{
	
	struct wash_machines_t machine1 = {Bosh, white, 90, 60, 90, 150, 1200, 90};
	struct irons_t iron1 = {Bosh, 123, black, 45, 300, YES, 1200};
	struct animals_t person;
	function_animals(&person);
	printf("mammals=%s name=%s", person.mammals, person.name);
	return 0;
}