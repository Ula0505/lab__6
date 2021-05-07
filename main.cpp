#include <stdio.h>
using namespace std;
//Это учебная программа
int main() {
	int firstNum, secondNum, Sum, Min;
	cout << "Enter the first number: ";
	cin >> firstNum;
	cout << "Enter the second number: ";
	cin >> secondNum;
	Sum = firstNum + secondNum;
	cout << "The sum of the two numbers entered is: " << Sum;
	Min = firstNum - secondNum;
	cout << "The difference between the two entered numbers is: " << Min;
	return 0;
}