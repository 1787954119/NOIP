#include <cstdio>
#include <cstdlib>

using namespace std;

struct student
{
	int id;
	int age;
};

struct student * creat(void);
void show(struct student * w);

int main()
{
	struct student * p;
	p = creat();
	show(p);
	return 0;
}

struct student * creat(void)
{
	struct student * x = (struct student *)malloc(sizeof(struct student));
	x->id = 10;
	x->age = 23;
	return x;
}

void show(struct student * w)
{
	printf("%d %d\n",w->id,w->age);
}

