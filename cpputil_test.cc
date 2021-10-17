// Copyright 2021 dynamonda

#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "cpputil.hpp"

unsigned int Factorial(unsigned int number) {
    return number > 1 ? Factorial(number-1)*number : 1;
}

TEST_CASE("Factorials are computed", "[factorial]") {
    REQUIRE(Factorial(0) == 1);
    REQUIRE(Factorial(1) == 1);
    REQUIRE(Factorial(2) == 2);
    REQUIRE(Factorial(3) == 6);
    REQUIRE(Factorial(10) == 3628800);
}

TEST_CASE("IsPrime method") {
    REQUIRE(util::IsPrime(1) == false);
    REQUIRE(util::IsPrime(2) == true);
    REQUIRE(util::IsPrime(3) == true);
    REQUIRE(util::IsPrime(4) == false);
    REQUIRE(util::IsPrime(5) == true);
    REQUIRE(util::IsPrime(6) == false);
}

TEST_CASE("Replace method") {
    REQUIRE(util::Replace("12345", "234", "a")      == "1a5");
    REQUIRE(util::Replace("1357", "24", "z")        == "1357");
    REQUIRE(util::Replace("12342345", "234", "b")   == "1bb5");
    REQUIRE(util::Replace("", "1234", "ab")         == "");
}
