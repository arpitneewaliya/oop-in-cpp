#include <iostream>
#include <list>
using namespace std;

class Cinema
{
private:
    string Name;
    string Director;
    list<string> Cast;
    int Seasons;
    float Rating;

public:
    Cinema(string name, string director, int seasons, float rating, list<string> cast)
    {
        Name = name;
        Director = director;
        Seasons = seasons;
        Rating = rating;
        Cast = cast;
    }

    void display()
    {
        cout << "Name: " << Name << endl;
        cout << "Director: " << Director << endl;
        cout << "Seasons: " << Seasons << endl;
        cout << "Rating: " << Rating << endl;
        cout << "Cast: " << endl;
        for (string c : Cast)
            cout << c << endl;
        cout << endl;
    }
};

class Anime : public Cinema
{
public:
    Anime(string name, string director, int seasons, float rating, list<string> cast) : Cinema(name, director, seasons, rating, cast)
    {

    }
};

int main()
{
    Cinema got("Game Of Thrones", "David Benioff", 8, 9.8, {"Emilia Clarke", "Kit Harrington", "Sophie Turner", "Maisie Williams"});
    Cinema godfather("The Godfather", "Mario Puzo", 3, 9.9, {"Marlon Brando", "Al Pacino"});

    Anime berserk("Berserk", "Kentaro Miura", 1, 9, {"Guts", "Griffith", "Casca"});

    got.display();
    godfather.display();

    berserk.display();
    return 0;
}
