#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Movie {
private:
	string title;
	string genre;
	int duration;

public:
	Movie();
	Movie(string title, string genre, int duration);

	string getTitle();
	string getGenre();
	int getDuration();

	void setTitle(string title);
	void setGenre(string genre);
	void setDuration(int duration);

	void displayMovie();

	friend ostream& operator<<(ostream& os, const Movie& movie);
	friend istream& operator>>(istream& is, Movie& movie);

	

};