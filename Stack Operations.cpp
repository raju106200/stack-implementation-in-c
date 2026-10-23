#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

int isEmpty()
	{
    	return top == -1;
	}

int isFull()
	{
    	return top == MAX - 1;
	}

void push(int value)
	{
    	if (isFull())
        	printf("\nStack Overflow");
    	else
    	{
      	  top++;
      	  stack[top] = value;
       	 printf("\n%d is pushed into the stack", value);
    	}
	}

void pop()
	{
    	if (isEmpty())
     	   printf("\nStack Underflow");
   		else
   	 		{
        		printf("\n%d is popped from the stack", stack[top]);
        		top--;
    		}
	}

void peek()
	{
   		if (isEmpty())
        	printf("\nStack is Empty. No element to peek.");
    	else
        	printf("\nPeek of Stack = %d", stack[top]);
	}

void display()
	{
   		int i;

    	if (isEmpty())
        	printf("\nStack is Empty");
    	else
	    {
	        printf("\nStack elements (top to bottom):");
    	    for (i = top; i >= 0; i--)
        	    printf("\n%d", stack[i]);
    	}
	}	

int main()
	{
    	int choice, value;

    	while (1)
    	{
        	printf("\n\n---- Stack Menu ----");
        	printf("\n1. Push");
        	printf("\n2. Pop");
        	printf("\n3. Peek");
        	printf("\n4. isEmpty");
        	printf("\n5. isFull");
        	printf("\n6. Display");
        	printf("\n7. Exit");
        	printf("\nEnter Choice: ");

        	if (scanf("%d", &choice) != 1)
        	{
        	    printf("\nInvalid input");
            	return 1;
        	}

        switch (choice)
        	{
            	case 1:
                	printf("Enter Value: ");
                	if (scanf("%d", &value) != 1)
                    	return 1;
                	push(value);
                	break;
            	case 2:
                	pop();
                	break;
            	case 3:
                	peek();
                	break;
            	case 4:
                	if (isEmpty())
                    	printf("\nStack is Empty");
                	else
                    	printf("\nStack is Not Empty");
                	break;
            	case 5:
            	    if (isFull())
                	    printf("\nStack is Full");
                	else
                    	printf("\nStack is Not Full");
                	break;
            	case 6:
                	display();
                	break;
            	case 7:
            		printf("\nExiting Program....."); 
                	return 0;
            	default:
               		printf("\nInvalid Choice");
        	}
   		}
	}

