#pragma once

#include <iostream>

enum class Rating
{
	Rating_G,
	Rating_PG,
	Rating_PG13,
	Rating_R
};

#include <vector>

class Movie
{
	std::string name;
	Rating rating;
	int watched;
};

class Movies
{
	friend class Movie;

	std::vector<Movie> movies;

public:
	Movie addMovie(std::string name, Rating rating, int watched);
	Movie incrementWatched(std::string name);
	void displayAll();
};
