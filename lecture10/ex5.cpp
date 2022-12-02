#include <iostream>
using namespace std;

struct movies_t {
  string title;
  int year;
};

struct friends_t {
  string name;
  string email;
  movies_t favorite_movie;
} charlie, maria;

friends_t * pfriends = &charlie;

int main ()
{
    
    charlie.name = "Charlie";
    maria.favorite_movie.title = "Hello kitty";
    charlie.favorite_movie.year = 1999;
    charlie.favorite_movie.title = "Lord of The Rings";
    cout << pfriends->favorite_movie.title;

    return 0;
}