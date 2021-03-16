#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>
#include <cctype>

class Pony
{
    public:
        Pony(int si, std::string color, int ag, int weigh);
        ~Pony();
        void Display_my_poney();
        void feed_my_poney();
        void aging_my_poney();
    private:
        int             size;
        std::string     color;
        int             age;
        int             weight;
};

#endif