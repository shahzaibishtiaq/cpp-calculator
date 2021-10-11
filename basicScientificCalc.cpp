#include<iostream>
#include<math.h>
using namespace std;
//                 *========================*        
//                 *     Basic Calculator   *
//                 *========================*
int main()
{
system("cls");
	int option,num1,num2,add,subtract,multiply,divide,remainder,square,squareRoot;
	cout<<"\t\t\t===========================";
	cout<<"\n\t\t\t\tCALCULATOR";
	cout<<"\n\t\t\t===========================";
	cout<<"\n\t01. Addition ";
	cout<<"\n\n\t02. Subtraction";
	cout<<"\n\n\t03. Multiplication";
	cout<<"\n\n\t04. Division";
	cout<<"\n\n\t05. Remainder";
	cout<<"\n\n\t06. Square";
	cout<<"\n\n\t07. SquareRoot";
	cout<<"\n\n\t08. Sin";
	cout<<"\n\n\t09. Cos";
	cout<<"\n\n\t10. Tan";
	cout<<"\n\n\tSelect Your Choice ";
	cin>>option;
	switch(option)
	{
		case 1:
			system("cls");
			cout<<"\n\tEnter First number ";
			cin>>num1;
			cout<<"\n\tEnter Second number ";
			cin>>num2;
			add=num1+num2;
			cout<<"\n\t"<<num1<<" + "<<num2<<" = "<<add<<"\n\n";
			break;
		case 2:
			system("cls");
			cout<<"\n\tEnter First number ";
			cin>>num1;
			cout<<"\n\tEnter Second number ";
			cin>>num2;
			subtract=num1-num2;
			cout<<"\n\t"<<num1<<" - "<<num2<<" = "<<subtract<<"\n\n";
			break;
		case 3:
			system("cls");
			cout<<"\n\tEnter First number ";
			cin>>num1;
			cout<<"\n\tEnter Second number ";
			cin>>num2;
			multiply=num1*num2;
			cout<<"\n\t"<<num1<<" x "<<num2<<" = "<<multiply<<"\n\n";
			break;
		case 4:
			system("cls");
			cout<<"\n\tEnter First number ";
			cin>>num1;
			cout<<"\n\tEnter Second number ";
			cin>>num2;
			divide=num1/num2;
			cout<<"\n\t"<<num1<<" / "<<num2<<" = "<<divide<<"\n\n";
			break;
		case 5:
			system("cls");
			cout<<"\n\tEnter First number ";
			cin>>num1;
			cout<<"\n\tEnter Second number ";
			cin>>num2;
			remainder=num1%num2;
			cout<<"\n\tRemainder of "<<num1<<" / "<<num2<<" = "<<remainder<<"\n\n";
			break;
		case 6:
			system("cls");
			cout<<"\n\tEnter Value to find Square ";
			cin>>num1;
			square=pow(num1,2);
			cout<<"\n\tSquare of "<<num1<<" = "<<square<<"\n\n";
			break;
		case 7:
			system("cls");
			cout<<"\n\tEnter Value to find Square Root ";
			cin>>num1;
			squareRoot=sqrt(num1);
			cout<<"\n\tSquare Root of "<<num1<<" = "<<squareRoot<<"\n\n";
			break;
		case 8:
			system("cls");
			cout<<"\n\tEnter Angle of Sin ";
			cin>>num1;
			cout<<"\n\tSin "<<num1<<" = "<<sin(num1)<<"\n\n";
			break;
		case 9:
			system("cls");
			cout<<"\n\tEnter Angle of Cos ";
			cin>>num1;
			cout<<"\n\tCos "<<num1<<" = "<<cos(num1)<<"\n\n";
			break;
		case 10:
			system("cls");
			cout<<"\n\tEnter Angle of Tan ";
			cin>>num1;
			cout<<"\n\tTan "<<num1<<" = "<<tan(num1)<<"\n\n";
			break;
		default:
			cout<<"\n\tWrong choice! try again...\n\n";
	}
}
