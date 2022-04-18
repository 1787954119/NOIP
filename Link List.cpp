#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node * Next;
};

struct Node * Creatlist(int n);
bool Insert(struct Node * pHead,int number,int position);
void Printlist(struct Node * pHead);
int Getsize(struct Node *pHead);


int main()
{
	bool b = true;
	char a = '0';
	int n,number,position;
	struct Node * pHead;
	pHead = Creatlist(5);
	scanf("%d %d",&number,&position);
	b = Insert(pHead,number,position);
	if (b)
	 printf("Insert OK!\n");
	else
	 printf("Insert Error!\n");
	Printlist(pHead);
	/*while (1)
	{
	printf("Please choose your operate:\n");
	printf(" 1: Creat the List\n 2: Insert one Node\n 3: Print the List\n");
	scanf("%c",&a);
	switch (a)
	{
	case '1':
	{
	printf("Please input the number of the Node: ");
	scanf("%d",&n);
	printf("\n");
	pHead = Creatlist(n);
	break;
    }
    case '2':
    {
    printf("Please input the data that you want to insert: ");
    printf("Please input the position that the Node will be insert: ");
    scanf("%d %d",&number,position);
    b = Insert(pHead,number,position);	
    if (b)
     printf("Insert OK! ");
    else
     printf("Insert Error! ");
    break;
	}
	case '3':
	{
	Printlist(pHead);
	break;
    }
    break;
    }
    }*/
	return 0;
}

struct Node * Creatlist(int n)
{
	struct Node * Head, * node, * End;
	Head = (struct Node *)malloc(sizeof(Node));
	End = Head;
	//printf("Please input the data of the Node: \n");
	for (int i = 0; i < n; ++i)
	{
		node = (struct Node *)malloc(sizeof(Node));
		scanf("%d",&node -> data);
		End -> Next = node;
		End = node;
	}
	End -> Next = NULL;
	return Head;
}

void Printlist(struct Node * pHead)
{
	while (pHead -> Next != NULL)
	{
		pHead = pHead -> Next;
		//++pHead;++pHead;
		printf("%d ",pHead -> data);
	}
	printf("\n");
}

bool Insert(struct Node * pHead,int number,int position)
{
	int i = 1;
	struct Node * q , * p;
	q = pHead;
	while (q -> Next != NULL)
	{
		
		if (i == position)
		{
			p = (struct Node *)malloc(sizeof(struct Node));
			p -> Next = q -> Next;
			q -> Next = p;
			p -> data = number;
			return 1;
		}
		++i;
		q = q -> Next;
	}
	return 0;
}
