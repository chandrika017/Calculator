#include <iostream>
using namespace std;
main()
{
	char op;
	float num1, num2;

	cout<<"Which mathematical operation you want to perform?"<<endl;
	cout<<"please Enter the Operator :";
	cin >> op;

    cout<<endl;
	cout<<"please enter the numbers:";
	cin >> num1 >> num2;

	switch (op) {


		case '+':
			cout << num1 + num2;
			break;


		case '-':
			cout << num1 - num2;
			break;


		case '*':
			cout << num1 * num2;
			break;


		case '/':
			cout << num1 / num2;
			break;


		default:
			cout << "Error! operator is not correct";
			break;
	}

	return 0;
}
