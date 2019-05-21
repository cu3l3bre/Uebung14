

#include <iostream>
#include <string>
#include <vector>
#include <fstream>


using namespace std;

int main()
{
	cout << "Programm zu Uebung14" << endl << endl;

	setlocale(LC_ALL, "");

	string pathToInputFile = "baum.txt";
	string tempLine = "";
	ifstream inhaltDatei;
	vector<string> lines;
	int zeileNichtLeer = 0;


	inhaltDatei.open(pathToInputFile);


	while(inhaltDatei.good())
	{
		getline(inhaltDatei, tempLine);
		lines.push_back(tempLine);
	}

	inhaltDatei.close();


	cout << "Der Inhalt der Datei ist:" << endl << endl;

	for (int i = 0; i < lines.size(); i++)
	{
		if (lines[i].length() != 0)
		{
			zeileNichtLeer++;
		}

		cout << lines[i] << endl;
	}

	cout << endl;
	cout << "Insgesamt hat die Datei " << lines.size() << " Zeilen." << endl << endl;



	
	cout << "Folgend der Text in umgekehrter Reihenfolge" << endl << endl;

	for (int i = lines.size()-1; i >= 0; i--)
	{
		reverse(lines[i].begin(), lines[i].end());
		cout << lines[i] << endl;
		reverse(lines[i].begin(), lines[i].end());
	}

	cout << endl;
	cout << "Die Anzahl der Zeilen, die einen Inhalt haben: " << zeileNichtLeer << endl << endl;


	cout << "Der Inhalt der Datei ohne die leeren Zeilen ist:" << endl << endl;

	for (int i = 0; i < lines.size(); i++)
	{
		if (lines[i].length() != 0)
		{
			cout << lines[i] << endl;
		}
	}

	cout << endl;

	system("pause");
	return 0;
}