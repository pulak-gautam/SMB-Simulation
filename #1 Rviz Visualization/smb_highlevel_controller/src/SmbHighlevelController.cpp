#include <smb_highlevel_controller/SmbHighlevelController.hpp>

namespace smb_highlevel_controller {

SmbHighlevelController::SmbHighlevelController(ros::NodeHandle& nodeHandle) :
  nodeHandle_(nodeHandle)
{
  
  if (!readParameters()) {
    ROS_ERROR("Could not read parameters.");
    ros::requestShutdown();
  }

  subscriber_ = nodeHandle_.subscribe(subscriber_topic, queue_size, &SmbHighlevelController::topicCallback, this);
  
  ROS_INFO("Successfully launched node.");
}


SmbHighlevelController::~SmbHighlevelController()
{
  
}

bool SmbHighlevelController::readParameters()
{
  if (!nodeHandle_.getParam("subscriber_topic", subscriber_topic) || !nodeHandle_.getParam("queue_size", queue_size)) return false;
  return true;
}

void SmbHighlevelController::topicCallback(const sensor_msgs::LaserScan& message)
{
  algorithm_.addData(message.ranges);
  double min_ele = algorithm_.getMin();
  ROS_INFO_STREAM("Closest distance is " << min_ele);
}

} /* namespace */
