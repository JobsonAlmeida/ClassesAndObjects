#pragma once

#include <iostream>
#include <string>

class Rating
{
	static std::string Rating_G;
	static std::string Rating_PG;
	static std::string Rating_PG13; 
	static std::string Rating_R;
};

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
	std::vector<Movie*> movies;

public:
	void addMovie(std::string name, std::string rating, int watched);
	//Movie incrementWatched(std::string name);
	void displayAll();
};
