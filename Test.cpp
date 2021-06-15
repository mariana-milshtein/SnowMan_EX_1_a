#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;
#include <string>
#include <algorithm>
using namespace std;


TEST_CASE("Good snowman code") {
    CHECK(snowman(11114411) == " _===_ \n (.,.) \n ( : ) \n ( : ) ");
    CHECK(snowman(23232124) == "  ___  \n ..... \n\(o_O) \n (] [)>\n (   ) ");
    CHECK(snowman(43232124) == "  ___  \n (_*_) \n\(o_O) \n (] [)>\n (   ) ");
    CHECK(snowman(43232124) == "  ___  \n (_*_) \n\(o_O) \n (] [)>\n (   ) ");
    CHECK(snowman(43232124) == "  ___  \n (_*_) \n\(o_O) \n (] [)>\n (   ) ");
    CHECK(snowman(43232124) == "  ___  \n (_*_) \n\(o_O) \n (] [)>\n (   ) ");
    CHECK(snowman(43232124) == "  ___  \n (_*_) \n\(o_O) \n (] [)>\n (   ) ");
    CHECK(snowman(43232124) == "  ___  \n (_*_) \n\(o_O) \n (] [)>\n (   ) ");
    CHECK(snowman(43232124) == "  ___  \n (_*_) \n\(o_O) \n (] [)>\n (   ) ");
    CHECK(snowman(43232124) == "  ___  \n (_*_) \n\(o_O) \n (] [)>\n (   ) ");
    CHECK(snowman(43232124) == "  ___  \n (_*_) \n\(o_O) \n (] [)>\n (   ) ");
    CHECK(snowman(43232124) == "  ___  \n (_*_) \n\(o_O) \n (] [)>\n (   ) ");
    CHECK(snowman(43232124) == "  ___  \n (_*_) \n\(o_O) \n (] [)>\n (   ) ");
    CHECK(snowman(43232124) == "  ___  \n (_*_) \n\(o_O) \n (] [)>\n (   ) ");
    CHECK(snowman(43232124) == "  ___  \n (_*_) \n\(o_O) \n (] [)>\n (   ) ");
    CHECK(snowman(43232124) == "  ___  \n (_*_) \n\(o_O) \n (] [)>\n (   ) ");
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(0));
    CHECK_THROWS(snowman(332321243));
    CHECK_THROWS(snowman(11115411));
    CHECK_THROWS(snowman(4444444));
    CHECK_THROWS(snowman(1));
}