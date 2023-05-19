#include<stdio.h>
int main() {
    int choice, a, b;
    int sum, div, mul, sub;
    char c = 'y';

    while (c == 'y')
	{
         printf("\nAdd  -> 1\nSub  -> 2\nMulti  -> 3\nDiv  -> 4\n");
         printf("Enter choice:- ");
         scanf("%d", &choice);
         printf("\nEnter two numbers:- ");
         scanf("%d%d", &a, &b);
         switch (choice) 
		 {
              case 1: sum = a + b;
              printf("Sum of a and b is:- %d", sum);
              break;

              case 2: sub = a - b;
              printf("Sub of a and b is:- %d", sub);
              break;

              case 3: mul = a * b;
              printf("Mul of a and b is:- %d", mul);
              break;

              case 4: div = a / b;
              printf("Div of a and ab is:- %d", div);
              break;

              default : printf("WRONG CHOICE");
              break;
        }
        printf("\nDo you want to continue[y/n]");
        c = getch();
    }
    getch();
}

