#include <iostream>
#include <string>
#include <list>
using namespace std;


class MovieVault
{
private:
list<Movie> Movies;

public:

MovieVault(string filename){


}

void AddMovie(Movie NewMovie) { Movies.push_back(NewMovie); }



};

class Movie {

private:
string _title;
string _genre;
list<string> _whereToWatch;

public:

Movie(string title, string genre, string where): _title{title}, _genre{genre}, _whereToWatch{where} {

}

string Title(){
    return _title;
}

string Genre(){
return _genre;    
}

list<string> Where (){
    return _whereToWatch;
}

};