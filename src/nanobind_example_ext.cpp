#include <Eigen/Core>

#include <nanobind/nanobind.h>
#include <nanobind/eigen/dense.h>

namespace nb = nanobind;

using namespace nb::literals;

Eigen::Matrix<double,1,1> add(Eigen::Matrix<double,1,1> a, Eigen::Matrix<double,1,1> b=Eigen::Matrix<double,1,1>::Zero(3)){
    return a + b;
}

NB_MODULE(nanobind_example_ext, m) {
    m.def("add", &add, "a"_a, "b"_a=Eigen::Matrix<double,1,1>::Zero());
}
