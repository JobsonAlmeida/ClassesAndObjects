#include "Classes.h"

std::string Rating_G = "G";
std::string Rating_PG = "PG";
std::string Rating_PG13 = "PG13";
std::string Rating_R = "R";

void Movies::addMovie(std::string name, std::string rating, int watched)
{
	Movie* movie = new Movie(name, rating, watched);

	movies.push_back(movie);	
}

//Movie Movies::incrementWatched(std::string name)
//{
//	return Movie();
//}

void Movies::displayAll()
{
	for (int i = 0; i <= movies.size(); i++)
	{
		std::cout << "Movie " << i << ":\n";
		std::cout << "name: " << movies.at(i)->name << "rating: " << movies.at(i)->rating << "watched: " << movies.at(i)->watched << "\n";
	}
}
