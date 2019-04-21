#pragma once

typedef unsigned int UI;

class ArabicToRoman {
public:
	ArabicToRoman(UI number)
	{
		this->number = number;
	}
	string getRome()
	{
		int countNumber = countElement();
		string str;
		while (number!=0)
		{
			int unit = number / pow(10, --countNumber);
			int tempNumber = unit*pow(10,countNumber);
			while (tempNumber !=0)
			{
				int index = searchIndex(tempNumber);
				str += Roman[index];
				tempNumber -= Arabic[index];
			}
			number %= (int)pow(10, countNumber);
		}
		return str;
	}
private:
	int searchIndex(int element)
	{
		int index = 0;
		for (int i = 0; i < 13; i++)
		{
			if (Arabic[i] == element)
			{
				index = i;
				return index;
			}
			else
			{
				if (Arabic[i] < element)
				{
					index = i;
				}
			}
		}
		return index;
	}
	int countElement()
	{
		UI copyNumber = number;
		int count = 0;
		while (copyNumber)
		{
			copyNumber /= 10;
			count++;
		}
		return count;
	}
private:
	UI number;
	string Roman[13] = { "I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M" };
	int Arabic[13]   = { 1,4,5,9,10,40,50,90,100,400,500,900,1000 }; 
};
