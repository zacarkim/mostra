#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;
// kkkk

int bin_to_dec(string bin)
{
	int soma = 0;
	int potenc = 1;

	for (int x = bin.length() - 1; x >= 0; x--)
	{
		char pos = bin[x];
		if (pos == '1')
		{
			soma += potenc;
		}
		potenc = potenc * 2;
	}
	return soma;
}

string dec_to_bin(int bin, int range)
{
	char binario[2];
	string w, z;
	do
	{
		int a = bin % 2;
	    sprintf(binario, "%d", a);
	    w.push_back(binario[0]);
	    bin = bin / 2;
	}
	while(bin >= 1);

	int tamW = w.length();

	for (int v = 0; v < range - tamW; v++)
	{
		 w.push_back('0');
	}

	for (int v = w.length() - 1; v >= 0; v--)
	{
		z.push_back(w[v]);
	}

	return z;
}

int main() {
	string pai1 = "abcdefghijklmnopqrstuvwxyz";
	string pai2 = "12345678959874653215487648";

	string subPai1 = pai1.substr(5, pai1.length() - 5);
	string subPai2 = pai2.substr(5, pai2.length() - 5);
	pai1.replace(5, pai1.length() - 5, subPai2);
	pai2.replace(5, pai2.length() - 5, subPai1);

	cout << "pai1 = " << pai1 << endl;
	cout << "pai2 = " << pai2 << endl;

	string f = "abcdef1ghijkl1mn1pqrst1";
	cout << "substring = " << f.substr(0, 7) << endl;
	cout << "substring2 = " << f.substr(7, 7) << endl;
	cout << "substring2 = " << f.substr(14, 3) << endl;
	cout << "substring2 = " << f.substr(17, 6) << endl;

	cout << "resultado = " << bin_to_dec("00000101011") << endl;
	cout << "resultado 2 = " << dec_to_bin(5, 7) << endl;

	return 0;
}
