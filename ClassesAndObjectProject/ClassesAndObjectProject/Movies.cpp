#include <iostream>
#include "Movies.h"

void Movies::addMovie(std::string name, std::string rating, int watched)
{
	//Verifying if the movies name already exists in the sistem:
	if (moviesList.size() > 0)
	{
		for (int i = 0; i <= moviesList.size() - 1; i++)
		{
			if (moviesList.at(i)->name == name)
			{
				std::cout << "Movie \"" << name << "\" already exists in the list!\n";
				return;
			}
		}

	}

	Movie* movie = new Movie(name, rating, watched);
	moviesList.push_back(movie);
}

void Movies::incrementWatched(std::string name)
{
	for (int i = 0; i <= moviesList.size() - 1; i++)
	{
		if (moviesList.at(i)->name == name)
		{
			moviesList.at(i)->watched += 1;
			return;
		}
	}

	std::cout << "Movie \"" << name << "\" not found!" << "\n";
}

void Movies::displayAll()
{
	if (moviesList.size() > 0)
	{
		for (int i = 0; i <= (moviesList.size() - 1); i++)
		{
			std::cout << i << ": " << "name: " << moviesList.at(i)->name << ", rating: " << moviesList.at(i)->rating << ", watched: " << moviesList.at(i)->watched << "\n";
		}
	}
	else
	{
		std::cout << "There are no movies to be shown! \n";
	}
	
}

