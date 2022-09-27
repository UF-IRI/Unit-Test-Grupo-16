#include "gmock/gmock.h"

#include "example.h"

using namespace testing;

namespace foobar::tests
{
	TEST(sumatoria1, suma1) {
		ASSERT_THAT(sumar(5, 8), Eq(13)); //pasa
	}
	TEST(sumatoria2, suma2) {
		ASSERT_THAT(sumar(1, 2), Eq(12)); //no pasa
	}

	TEST(numeromayor1, mayor1) {
		ASSERT_THAT(mayor(20, 5), Eq(20));  //pasa
	}
	TEST(numeromayor2, mayor2) {
		ASSERT_THAT(mayor(10, 40), Eq(10)); //no pasa
	}

}