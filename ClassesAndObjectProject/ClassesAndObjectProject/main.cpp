#include "Classes.h"



int main()
{

	Movies Movies;

	Movies.addMovie("O resurgimento", "G", 0);
	Movies.addMovie("A Barca Envantada", "PG", 3);
	Movies.incrementWatched("O resurgimento");

	Movies.displayAll();

	return 0;

}