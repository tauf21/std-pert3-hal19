#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

struct movies_t{
	char title [50];
	int year;
}mine, yours;

void printmovie(movies_t movie);

int main(){
	char buffer[50];

	strcpy(mine.title, "finding Nemo");
	mine.year = 2003;

	cout<<"Masukan judul film favorit: ";
	cin.getline(yours.title,50):
	cout<<"Masukan tahun: ";
	cin.getline(buffer,50);
	yours.year=atoi(buffer);

	cout<<"Judul film favorite yang ada:\n ";
	printmovie(mine);
	cout<<"Judul film favorite kamu adalah:\n ";
	printmovie(yours);
	return 0;
}

void printmovie(movies_t movie)
{
	cout<<movie.title;
	cout<<" ("<<movie.year<<")\n"
}

}