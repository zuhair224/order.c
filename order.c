#include<stdio.h>
main ()
{
	//1. display the menu
	printf("pick what number you want to order : \n1 .PIZZA,Price RS239\n2. Burger,Price RS129\n3.PASTA,Price RS179\n4 .French Fries,Price RS99\n5 .Sandwich,Price RS149 ");
	//2. read the choice
int choice=0;
scanf("%d",&choice);
    //3.display based on the choice
    
    switch(choice)
{
    case 1:
       printf("you order PIZZA.Price RS239");
       break;
    case 2:
       printf("you order Burger.Price RS129");
       break;
    case 3:
       printf("you order Pasta.Price RS179");
       break;
    case 4:
        printf("you order French Fries.Price RS179");
        break;
    case 5:
        printf("you order Sandwich.Price RS149");
        break;
	 default : printf("Invalid choice");
	
	
     }
}
