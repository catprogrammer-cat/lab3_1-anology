#include <iostream>
using namespace std;
int main()
{
	double x, result_s;// x -> varible in the formula
					   // result_s -> result of the formula
	int quantity;
	cout << "Enter the varible x: ";
	cin >> x;
	cout << "\nEnter how many times to output: ";
	cin >> quantity;
	cout << "\n";
	for (int i = 1; i <= quantity; i++) {
		result_s = (pow(-1, i) * (2 * i - 1)) / (pow(x, i));
		cout << "i = " << i << ", result:  " << result_s << ";" << endl;
	}
	system("pause");
}
