#include<stdio.h>
#//include<conio.h>
#include<stdlib.h>
#include <time.h>
int main()
{
char opt;  
int n1, n2,i,d,d1,m1,y1,d2,m2,y2,r1,r2,r3,numerator1=1, denominator1, numerator2=1, denominator2, x, y, c, gcd_no;   
float res; 
	    label1:
	//system("color 1b");
		printf("\n\n\n SIMPLE CALCULATOR / APPITUDE CALCULATOR FOR (TIME AND WORK / Age calculator)");
		printf("\n---------------------------------------------------------------------------");
		printf("\n press 1: If you press 1 you can able to perform normal calculations \n");
		printf("\n Press 2: If you press 2 you can able to perform Time and work calculations \n");
		printf("\n press 3: If you press 3 you can able to perform Age calculations:\n");
		scanf("%d",&i);
	 if(i==1)
	 { 
	    printf (" Choose an operator(+, -, *, /) to perform the operation in C Calculator \n");
		  
	    scanf ("%s", &opt);
		 
	    if (opt == '/' )  
	    {  
         printf (" You have selected: Division");  
	    }  
	    else if (opt == '*')  
	    {  
	        printf (" You have selected: Multiplication");  
	     }  
	       
	    else if (opt == '-')  
	    {  
	        printf (" You have selected: Subtraction");  
	     }  
	        else if (opt == '+')  
	    {  
	        printf (" You have selected: Addition");  
	     }     
	    printf (" \n Enter the first number: ");  
	    scanf(" %d", &n1); // take fist number  
	    printf (" Enter the second number: ");  
	    scanf (" %d", &n2); // take second number  
	      
	    switch(opt)  
	    {  
	        case '+':  
	            res = n1 + n2; // add two numbers  
	            printf (" Addition of %d and %d is: %.2f", n1, n2, res);  
	            break;  
	          
	        case '-':  
	            res = n1 - n2; // subtract two numbers  
	            printf (" Subtraction of %d and %d is: %.2f", n1, n2, res);  
	            break;  
	              
	        case '*':  
	            res = n1 * n2; // multiply two numbers  
	            printf (" Multiplication of %d and %d is: %.2f", n1, n2, res);  
	            break;            
	          
	        case '/':  
	            if (n2 == 0)   // if n2 == 0, take another number  
	            {  
	                printf (" \n Divisor cannot be zero. Please enter another value ");  
	                scanf ("%d", &n2);        
	                }  
	            res = n1 / n2; // divide two numbers  
	            printf (" Division of %d and %d is: %.2f", n1, n2, res);  
	            break;  
	         default:  /* use default to print default message if any condition is not satisfied */  
	            printf (" Something is wrong!! Please check the options "); 
				              
	    }  
	printf("\n press 1: For Home \n press 2: To perform Time and work calculations \n press 3: To perform the age calculations\nPress any key to stop the execution\n");
	 scanf("%d",&d);
			if(d==1)
			{
				system("cls");
				goto
				label1;
		}
		else if(d==2)
			{
				goto
				lable2;
			}
			else if(d==3)
			{
				goto
				lable3;
			}
			else
			exit(0);
		}
			
			else if(i==2)
		{
			lable2:
	//			system("color 2b");
				
	   printf("Enter the denominator for 1st number : ");
	    scanf("%d",&denominator1);
	  
	    printf("Enter the denominator for 2nd number : ");
	    scanf("%d",&denominator2);
	    x=(numerator1*denominator2)+(denominator1*numerator2); 
	    y=denominator1*denominator2; 
	    for(c=1; c <= x && c <= y; ++c)
	    {
	       if(x%c==0 && y%c==0)
	          gcd_no = c;
	    }
	    printf("(%d / %d) + (%d / %d) = (%d / %d)\n", numerator1, denominator1, numerator2, denominator2, x/gcd_no, y/gcd_no);
		   
	     	printf("\n press 1: For Home \n Press any key to stop the execution\n");
	       scanf("%d",&d);
			if(d==1)
			{
				system("cls");
				goto
				label1;
		}
		else
		exit(0);
 		
		}

			if (d==3)
			{
				goto 
				lable3;
					}		
				else if(i==3)
		{
			lable3:
			//	system("color 3b");	
	printf("Enter your birth day\n");
	scanf("%d",&d1);
	printf("Enter your birth month\n");
	scanf("%d",&m1);
	printf("Enter your birth year\n");
	scanf("%d",&y1);
	printf("Enter your current day\n");
	scanf("%d",&d2);
	printf("Enter your current month\n ");
	scanf("%d",&m2);
	printf("Enter your current year\n");
	scanf("%d",&y2);
	if((d1>31 || d1<1) && (d2>31 || d2<1) && (m1<1 || m1>12) &&(m2<1 || m2>12) && (y1<0 && y2<0))
	{
		printf("you enter wrong somthing try again");
	}
	else 
	{
		r3=y2-y1;
		if(d2>=d1)
		{
			r1=d2-d1;
		}
		else
		{
			m2=m2-1;
			d2=d2+30;
			r1=d2-d1;
		}
		if(m2>=m1)
		{
			r2=m2-m1;
		}
		else
		{
			y2=y2-1;
			m2=m2+12;
			r2=m2-m1;
		}
		
	}
	printf("your age is %d year %d month %d day",r3,r2,r1);
}
 printf("\n press 1: For Home \n Press any key to stop executing \n");
	 scanf("%d",&d);
			if(d==1)
			{
				system("cls");
				goto
				label1;
		}
		else
		exit(0);
			
}
