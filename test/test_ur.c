#include "ur.h"
#include "ctest.h"

CTEST(quad_suite, test_quad_equation) 
{
	const double a = 4, b = 16, c = 12;

        double D, x1, x2;

 	quad (a, b, c, D, &x1, &x2);
 
	const double expected_D  = 36;
	const double expected_x1 = -3;
	const double expected_x2 = -1;

	ASSERT_DBL_NEAR(expected_D, D);
	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
}


