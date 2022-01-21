
#include <iostream>
using namespace std;
int main()
{
	// 1 задание
	setlocale(LC_ALL, "rus");
	int clin;
	int chelZAK;
	int chelZAK1;
	int zak1 = 12, zak2 = 8, zak3 = 9, zak4 = 6;
	int zaka1 = 2, zaka2 = 3, zaka3 = 4;
	int total1 = 0, total2 = 0, total3 = 0;
	int YesNo;

	cout << "На сколько человек заказ : ";
	cin >> clin;
	cout << endl;

	for (int i = 1; i <= clin; i++)
	{
		cout << "_______________________________" << endl;
		cout << "|_____________МЕНЮ____________|" << endl;
		cout << "| 1. Пицца - 12$              |" << endl;
		cout << "| 2. Пирожок с капустой - 8$  |" << endl;
		cout << "| 3. Пирожок с мясом 9- $     |" << endl;
		cout << "| 4. Пирожок с картошкой - 6$ |" << endl;
		cout << "|_____________________________|" << endl;
		cout << "Ввести номер заказа :";
		cin >> chelZAK;
		cout << endl;
		cout << "_______________________________" << endl;
		cout << "|_____________МЕНЮ____________|" << endl;
		cout << "| 1. Яблочный сок - 2$        |" << endl;
		cout << "| 2. Вишневый сок - 3$        |" << endl;
		cout << "| 3. Буратино - 4$            |" << endl;
		cout << "|_____________________________|" << endl;
		cout << "Ввести номер заказа :";
		cin >> chelZAK1;
		// 1 меню
		switch (chelZAK)
		{
		case 1:
			total1 += zak1;
			break;
		case 2:
			total1 += zak2;
			break;
		case 3:
			total1 += zak3;
			break;
		case 4:
			total1 += zak4;
			break;
		}
		// 2 меню
		switch (chelZAK1)
		{
		case 1:
			total2 += zaka1;
			break;
		case 2:
			total2 += zaka2;
			break;
		case 3:
			total2 += zaka3;
			break;
		}
		
	}
	total3 = total2 + total1;
	cout << "Общай сумма : " << total3 << endl;
	// добавить в заказ
	cwhile (true)
	{
		cout << "Заказать еще?\n да - 1 /нет - 2" << endl;
		cin >> YesNo; cout << endl;
		if (YesNo == 1 || YesNo == 2)
			break;
		cout << "неверный ввод" << endl;
	}
	switch (YesNo)
	{
	case 1:
		cout << "_______________________________" << endl;
		cout << "|_____________МЕНЮ____________|" << endl;
		cout << "| 1. Пицца - 12$              |" << endl;
		cout << "| 2. Пирожок с капустой - 8$  |" << endl;
		cout << "| 3. Пирожок с мясом 9- $     |" << endl;
		cout << "| 4. Пирожок с картошкой - 6$ |" << endl;
		cout << "|_____________________________|" << endl;
		cout << "Ввести номер заказа :";
		cin >> chelZAK;
		cout << endl;
		cout << "_______________________________" << endl;
		cout << "|_____________МЕНЮ____________|" << endl;
		cout << "| 1. Яблочный сок - 2$        |" << endl;
		cout << "| 2. Вишневый сок - 3$        |" << endl;
		cout << "| 3. Буратино - 4$            |" << endl;
		cout << "|_____________________________|" << endl;
		cout << "Ввести номер заказа :";
		cin >> chelZAK1;
		// 1 меню
		switch (chelZAK)
		{
		case 1:
			total1 += zak1;
			break;
		case 2:
			total1 += zak2;
			break;
		case 3:
			total1 += zak3;
			break;
		case 4:
			total1 += zak4;
			break;
		}
		// 2 меню
		switch (chelZAK1)
		{
		case 1:
			total2 += zaka1;
			break;
		case 2:
			total2 += zaka2;
			break;
		case 3:
			total2 += zaka3;
			break;
		}
		break;
	case 2: 
		return 1;
	}

	total3 = total2 + total1;
	cout << "Общай сумма : " << total3 << endl;
}
