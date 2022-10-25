#pragma once

#include <memory>

#include <Eigen/Core>
#include <vector>

namespace smb_highlevel_controller {

/*!
 * Class containing the algorithmic part of the package.
 */
class Algorithm
{
 public:
  /*!
   * Constructor.
   */
  Algorithm();

  /*!
   * Destructor.
   */
  virtual ~Algorithm();
  /*!
   * Add new measurement data.
   * @param data the new data.
   */
  void addData(const double data);

  /*!
   * Add multiple measurements as once.
   * @param data new data.
   */
  void addData(const std::vector<float> data);


  double getMin();

 private:
  //! Forward declared structure that will contain the data
  struct Data;

  //! Pointer to data (pimpl)
  std::unique_ptr<Data> data_;
};

} /* namespace */
