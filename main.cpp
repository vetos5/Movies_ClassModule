#include "movies.h"

using namespace std;

const int MAX = 100;
void sortByGenre(Movie movies[], int count);
void sortByTitle(Movie movies[], int count);
void sortByDuration(Movie movies[], int count);

int main() {
	string path;
	cin >> path;


	Movie movies[MAX];

	ifstream fin;
	ofstream fout;

	fin.open(path);

	if (!fin.is_open()) {
		cout << "Error opening file" << endl;
		return 1;
	}

	int count = 0;

	while (fin.eof() == false)
	{
		fin >> movies[count];
		cout << movies[count] << endl;
		count++;
	}

	cout << "=========================================" << endl;

	int num, num_while;
	
	
	do {	
		
		cout << "Input num (1 - sort by genre, 2 - sort by title, 3 - sort by duration)" << endl;
		cin >> num;
	switch (num)
	{
	case 1:
		sortByGenre(movies, count);
		break;
	case2:
		sortByTitle(movies, count);
		break;
	case3:
		sortByDuration(movies, count);
		break;
	}

	for (int i = 0; i < count; i++) {
		cout << movies[i] << endl;
	}
	cout << "Input num (1 - continue investigation, 2 - exit)";
	cin >> num_while;
	} while (num_while == 1);

	fin.close();
	
}

void sortByGenre(Movie movies[], int count) 
{
	for (int i = 0; i < count; i++) 
	{
		for (int j = 0; j < count - 1; j++)
		{
			if (movies[j].getGenre() > movies[j + 1].getGenre())
			{
				swap(movies[j], movies[j + 1]);
			}
		}
	}
}

void sortByTitle(Movie movies[], int count) 
{
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count - 1; j++)
		{
			if (movies[j].getTitle() > movies[j + 1].getTitle()) 
			{
				swap(movies[j], movies[j + 1]);
			}
		}
	}
}

void sortByDuration(Movie movies[], int count) 
{
	for (int i = 0; i < count; i++) 
	{
		for (int j = 0; j < count - 1; j++) 
		{
			if (movies[j].getDuration() > movies[j + 1].getDuration()) 
			{
				swap(movies[j], movies[j + 1]);
			}
		}
	}
}