#include "stdafx.h"
#include "arabic_to_roman_convertor.h"

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;


int main()
{
	int n;
	while (true) 
	{
		cout << "Arabic Number: "; cin >> n;
		ArabicToRoman ob(n);
		cout << "Roman Number: " << ob.getRome() << endl;
		system("pause");
		system("cls");
	}
    return 0;
}

