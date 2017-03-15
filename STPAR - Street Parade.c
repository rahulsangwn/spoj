#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

void operation (int, int ip[]);
int rear = -1;
int queue_array[SIZE];

enterq (int item)
{
	
	rear = rear + 1;
	queue_array[rear] = item;	
}

struct stack 
{
	int s[SIZE];
	int top;
} st;

void push (int item)
{
	st.top++;
	st.s[st.top] = item;
}
int pop ()
{
	int item;
	item = st.s[st.top];
	st.top--;
	return (item);
}
initialize()
{
	rear = -1;
	st.top = -1;
}
int main ()
{
	int num, i, ip[SIZE];
	scanf ("%d", &num);
	while (num != 0)
	{
		for (i=0; i<num; i++)
			scanf ("%d", &ip[i]);
	
		operation (num, ip);
		initialize();
		scanf ("%d", &num);
		
	}	
}

void operation (int num, int a[])
{
	int yes = 1, j;
	int i = 0;
	st.top = -1;
	
	while (i <= num-2)
	{
		if (a[i] > st.s[st.top] && st.top != -1)
			enterq (pop ());
		else if (a[i] > a[i+1])
		{
			push (a[i]);
			i++;
		}
		else if (a[i] < a[i+1])
		{
			if (a[i] <= st.s[st.top] || st.top == -1 )
			{
				enterq (a[i]);
				i++;
			}
			else
				enterq (pop ());	
		}
	}
	if (a[i] < st.s[st.top] && st.top != -1)
	{
		enterq  (a[i]);
		while (st.top != -1)
			enterq (pop ());
	}
	else
	{
		while (a[i] > st.s[st.top] && st.top != -1)
			enterq (pop ());
		enterq (a[i]);
		while (st.top != -1)
			enterq (pop ());	
	}
		
	for (i=0; i<=rear; i++)
	{
		for (j=0; j<=i; j++)
		{
			if (queue_array[i] < queue_array[j])
			{
				yes = 0;
				break;
			}
		}
	}
	if (yes == 1)
		printf ("yes\n");
	else
		printf ("no\n");		
}

