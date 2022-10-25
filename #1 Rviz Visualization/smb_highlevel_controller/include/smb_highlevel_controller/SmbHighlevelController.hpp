#pragma once

#include "smb_highlevel_controller/Algorithm.hpp"

#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>
#include <algorithm>

namespace smb_highlevel_controller {

/*!
 * Class containing the Husky Highlevel Controller
 */
class SmbHighlevelController {
public:
	/*!
	 * Constructor.
	 */
	SmbHighlevelController(ros::NodeHandle& nodeHandle);

	/*!
	 * Destructor.
	 */
	virtual ~SmbHighlevelController();

private:
	ros::NodeHandle nodeHandle_;

	bool readParameters();

	void topicCallback(const sensor_msgs::LaserScan& message);

	//! ROS topic name to subscribe to.
  	std::string subscriber_topic;

	//! ROS topic name to subscribe to.
  	int queue_size;

	Algorithm algorithm_;
	ros::Subscriber subscriber_;
};

} /* namespace */
