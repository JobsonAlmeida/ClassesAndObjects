#pragma once

#include <string>
#include <vector>
#include "Movie.h"

class Movies
{
	std::vector<Movie*> moviesList;

public:
	void addMovie(std::string name, std::string rating, int watched);
	void incrementWatched(std::string name);
	void displayAll();
};