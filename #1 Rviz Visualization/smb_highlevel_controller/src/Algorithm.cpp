#include "smb_highlevel_controller/Algorithm.hpp"

#include <utility>
#include <vector>

#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics/min.hpp>
#include <boost/accumulators/statistics/count.hpp>

namespace smb_highlevel_controller{

using namespace boost::accumulators;

struct Algorithm::Data {
  accumulator_set<double, features<tag::min>> acc;
};

Algorithm::Algorithm() {
  data_ = std::make_unique<Data>();
}

Algorithm::~Algorithm() = default;

void Algorithm::addData(const double data)
{
  data_->acc(data);
}

void Algorithm::addData(const std::vector<float> data)
{
  for(std::size_t i = 0; i < data.size(); ++i)
    addData(data[i]);
}

double Algorithm::getMin()
{
  return min(data_->acc);
}

} /* namespace */
