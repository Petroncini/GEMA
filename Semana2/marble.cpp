#include <iostream>
#include <map>
#include <set>

using namespace std;

bool over(void);

multimap <int, int> marbles_a; // each marble map is keyed by the number of marbles and the value is the color number
multimap <int, int>::iterator iter_marbles_a = --marbles_a.end();
set <int> colors_a; // the set contains all colors the player possesess
set <int>::iterator iter_colors_a = colors_a.begin();

multimap <int, int> marbles_b;
multimap <int, int>::iterator iter_marbles_b = --marbles_b.end();
set <int> colors_b; 
set <int>::iterator iter_colors_b = colors_b.begin();

int main (void) {
    int n;
    
    // optimally, each player will "attack" the opponents largest color
    // so each move the player must find that largest color, verify they themselves have at least one of it and then play
    // in each round it must also be verified that moves are possible

    cin >> n;
    int in;

    for(int i = 0; i < n; i++) {
        cin >> in;
        marbles_a.insert({in, i});
        colors_a.insert(i);
    }
    for(int i = 0; i < n; i++) {
        cin >> in;
        marbles_b.insert({in, i});
        colors_b.insert(i);
    }

    bool a_turn = true;

    while(!over()) {
       

        if (a_turn) {
            a_attack();
            a_turn = false;
        }
    }
}

bool over(void) {
    // optimization: choose smaller set
    iter_colors_a = colors_a.begin();
    int color;

    for (int i = 0; i < colors_a.size(); i++) {
        color = *iter_colors_a;
        if(colors_b.find(color) != colors_b.end()) {
            iter_colors_a = colors_a.begin();
            return true;
        }
        advance(iter_colors_a, 1);
    }

    iter_colors_a = colors_a.begin();
    return false;
}

void a_attack(void) {
    int attacking_color;
    iter_marbles_b = --marbles_b.end();

    do {
        attacking_color = iter_marbles_b -> second;
        advance(iter_marbles_b, -1);
    }
    while(colors_a.find(attacking_color) == colors_a.end());


    colors_b.erase(iter_marbles_b -> second); // remove marble from colors
    marbles_b.erase(iter_marbles_b); // remove marble from marbles

    // theres no fucking way to alter marble numbers :/ 
    // idiot
    // unless we include the index in the colors_a, so we need to change it back to a map
    // ugh
    // but we dont KNOW the index, it changes everytime you insert a color, FUCK
    // i need both an easy way to know the marble with the highest count
    // a way to know if the color exists for a player
    // and a way to alter the marble count for individual colors
    // maybe if we alter the colors set

    attacking_color_a_num = 

    // drop marble in a by 1
    marbles_a.insert()

    // if new marble number is zero, remove marble from colors and marbles

} 