#define _SILENCE_CXX23_DENORM_DEPRECATION_WARNING
#define _USE_MATH_DEFINES
#include <Eigen/Core>
import std;

int main()
{
	Eigen::Vector3f p(2, 1, 1);
	Eigen::Matrix3f r;
	Eigen::Matrix3f t;

	auto angle = M_PI / 4;
	r << cos(angle), -sin(angle), 0,
		sin(angle), cos(angle), 0,
		0, 0, 1;
	t << 1, 0, 1,
		0, 1, 2,
		0, 0, 1;

	p = t * r * p;
	std::println("{}", p);
	return 0;
}