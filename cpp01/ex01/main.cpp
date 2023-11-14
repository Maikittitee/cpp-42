#include "Zombie.hpp"

int main(void)
{
    Zombie* idk = zombieHorde(3, "Maiza");

    for (int i = 0; i < 3; i++)
    {
        idk[i].announce();
    }
    delete [] idk;
}