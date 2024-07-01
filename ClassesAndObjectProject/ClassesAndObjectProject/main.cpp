#include "Classes.h"

int main()
{
	setlocale(LC_ALL, "");
	Movies Movies;

	Movies.addMovie("O resurgimento", "G", 0);
	Movies.addMovie("A Barca Envantada", "PG", 3);
	Movies.addMovie("O resurgimento", "PG", 1);
	Movies.incrementWatched("O resurgimento");
	Movies.incrementWatched("O resurgimento");

	Movies.displayAll();

	return 0;

}