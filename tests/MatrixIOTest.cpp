#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "matrixIO.hpp"

BOOST_AUTO_TEST_SUITE(MatrixIOTests)

BOOST_AUTO_TEST_CASE(TI)
{
  const Eigen::MatrixXd result = matrixIO::openData("../data/m3.csv", 3);
  std::cout << result;
  BOOST_TEST(result(0) == 0.680375);
  BOOST_TEST(result(1) == -0.211234);
  BOOST_TEST(result(2) == 0.566198);

  BOOST_TEST(result(3) == 0.59688);
  BOOST_TEST(result(4) == 0.823295);
  BOOST_TEST(result(5) == -0.604897);

  BOOST_TEST(result(6) == -0.329554);
  BOOST_TEST(result(7) == 0.536459);
  BOOST_TEST(result(8) == -0.444451);
}

BOOST_AUTO_TEST_SUITE_END()
