#include <Eigen/Core>

#include <nanobind/nanobind.h>
#include <nanobind/eigen/dense.h>

namespace nb = nanobind;

using namespace nb::literals;
using namespace Eigen;

Matrix<double,1,1> add(Matrix<double,1,1> a=Matrix<double,1,1>::Zero(), Matrix<double,1,1> b=Matrix<double,1,1>::Zero()){
    return a + b;
}

NB_MODULE(nanobind_example_ext, m) {
    m.def("add", &add, "a"_a=Matrix<double,1,1>::Zero(), "b"_a=Matrix<double,1,1>::Zero());
}
