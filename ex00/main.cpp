#include "Pony.hpp"

Pony ponyOnTheStack()
{
    Pony ponax = Pony(200, "yellow", 50, 2000);
    return (ponax);
}  

Pony* ponyOnTheHeap()
{
    Pony* poney = new Pony(150, "red", 25, 250);
    return (poney);
}

int main(void)
{
    Pony* poney = ponyOnTheHeap();
    Pony ponax = ponyOnTheStack();
    poney->Display_my_poney();
    ponax.Display_my_poney();
    poney->feed_my_poney();
    ponax.aging_my_poney();
    poney->Display_my_poney();
    ponax.Display_my_poney();
    delete poney;
}