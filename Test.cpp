#include "doctest.h"
#include "sources/Fraction.hpp"
#include <stdexcept>

using namespace ariel;
using namespace std;

TEST_CASE("Arithmetic") 
{
    Fraction x(1, 3), y(3, 4);
    Fraction ans1(7, 12), ans2(1, 12), ans3(3, 4), ans4(6851, 15000), ans5(7, 3), ans6(0,2);
    CHECK((x + y) == ans1);
    CHECK((x - y) == ans2);
    CHECK((x * y) == ans2);
    CHECK((y / x) == ans3);
    CHECK((x + 0.1234) == ans4);
    CHECK((x + 2) == ans5);
    CHECK((0/x)==ans6);
}

TEST_CASE("Boolean")
{
    Fraction x(1, 5), y(1, 7);
    CHECK((x > y) == true);
    CHECK((x < y) == false);
    CHECK((x >= y) == true);
    CHECK((x <= y) == false);
    CHECK_FALSE(x == y);
    CHECK((x > 0.1) == true);
    CHECK(x==0.2);
}

TEST_CASE("increase and decrease by 1")
{
    Fraction x(1, 3), y(6, 5), ans1(4, 3), ans2(1, 5);
    CHECK(x++ == ans1);
    CHECK(++x == ans1);
    CHECK(--y == ans2);
    CHECK(y-- == ans2);
}

TEST_CASE("throwing exeptions"){
    Fraction x(3,0),y(1,2);
    CHECK_THROWS(x+y);
    CHECK_THROWS(x-y);
    CHECK_THROWS(x*y);
    CHECK_THROWS(x/y);
    CHECK_THROWS(x+1);
    CHECK_THROWS(x*1);
    CHECK_THROWS(x-1);
    CHECK_THROWS(x/1);
    CHECK_THROWS(1+x);
    CHECK_THROWS(1*x);
    CHECK_THROWS(1-x);
    CHECK_THROWS(1/x);
    CHECK_THROWS(y/0);
}
