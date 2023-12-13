#include "movies.h"

Movie::Movie()
{
	title = "";
	genre = "";
	duration = 0;
}

Movie::Movie(string m_title, string m_genre, int m_duration)
{
	m_title = title;
	m_genre = genre;
	m_duration = duration;

}

string Movie::getTitle()
{
	return title;
}

string Movie::getGenre()
{
	return genre;
}

int Movie::getDuration()
{
	return duration;
}

void Movie::setTitle(string title)
{
	this->title = title;
}

void Movie::setGenre(string genre)
{
	this->genre = genre;
}

void Movie::setDuration(int duration)
{
	this->duration = duration;
}

void Movie::displayMovie()
{
	cout << "Movie title " << title << endl;
	cout << "Movie genre " << genre << endl;
	cout << "Movie duration " << duration << endl;
	
}

ostream& operator<<(ostream& os, const Movie& movie)
{
	os << "Movie title " << movie.title << endl;
	os << "Movie genre " << movie.genre << endl;
	os << "Movie duration " << movie.duration << endl;
	return os;
}

istream& operator>>(istream& is, Movie& movie)
{
	is >> movie.title;
	is >> movie.genre;
	is >> movie.duration;
	return is;
}
