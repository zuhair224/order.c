#include<stdio.h>
main ()
{
	//1. display the menu
	printf("Pick What Number You Want To Order : \n1. PIZZA,Price is RS239\n2. Burger,Price is RS129\n3. PASTA,Price is RS179\n4. French Fries,Price is RS99\n5. Sandwich,Price is RS149 ");
	//2. read the choice
    int choice=0;
    scanf("%d",&choice);
    //3.display based on the choice
    
    switch(choice)
{
    case 1:
       printf("Your order is PIZZA. The Price is RS239");
       break;
    case 2:
       printf("Your order is Burger. The Price is RS129");
       break;
    case 3:
       printf("Your order is Pasta. The Price is RS179");
       break;
    case 4:
        printf("Your order is French Fries. The Price is RS179");
        break;
    case 5:
        printf("Your order is Sandwich. The Price is RS149");
        break;
	 default : printf("Invalid choice");
	
	
     }
}
