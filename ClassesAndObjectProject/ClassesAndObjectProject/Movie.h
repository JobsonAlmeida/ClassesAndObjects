#pragma once

#include <string>

class Movie
{
	friend class Movies;

	std::string name;
	std::string rating;
	int watched;

	Movie(std::string name, std::string rating, int watched) : name{ name }, rating{ rating }, watched{ watched } {}
};