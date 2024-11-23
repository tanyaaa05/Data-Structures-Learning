#include<iostream>
#include"bird.h"
using namespace std;

// Function that takes a Bird pointer (polymorphic behavior)
void birdDoesSomething(Bird *bird) {
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
}

int main() {
    // Create a Sparrow object and use it with a Bird pointer
    Bird *bird = new Sparrow();
    birdDoesSomething(bird);

    // Abstract class can't be re-instantiated
    // Bird *bird = new Bird();

    return 0;
}
