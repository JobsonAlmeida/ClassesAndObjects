#pragma once

#include <iostream>
#include <string>
#include <vector>

class Movie
{
	friend class Movies;

	std::string name;
	std::string rating;
	int watched;

	Movie(std::string name, std::string rating, int watched) : name{ name }, rating{ rating }, watched{ watched } {}
};

class Movies
{
	std::vector<Movie*> moviesList;

public:
	void addMovie(std::string name, std::string rating, int watched);
	void incrementWatched(std::string name);
	void displayAll();
};
