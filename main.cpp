#include <stdio.h>
using namespace std;
int main() {
	int firstNum, secondNum, Sum, Min, Comp, Priv;
	cout << "Enter the first number: ";
	cin >> firstNum;
	cout << "Enter the second number: ";
	cin >> secondNum;
	Sum = firstNum + secondNum;
	cout << "The sum of the two numbers entered is: " << Sum;
	Min = firstNum - secondNum;
	cout << "The difference between the two entered numbers is: " << Min;
	Comp = firstNum * secondNum;
	cout << "The product of the two entered numbers is equal to: " << Comp;
	Priv = firstNum / secondNum;
	cout << "The quotient of the two entered numbers is: " << Priv; 
	return 0;
}