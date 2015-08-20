#ifndef INCLUDE_EVAROBOT_MINIMU_H_
#define INCLUDE_EVAROBOT_MINIMU_H_

#include "ros/ros.h"

#include "minimu9/vector.h"
#include "minimu9/MinIMU9.h"
#include "minimu9/version.h"

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <sys/time.h>
#include <system_error>
#include <boost/program_options.hpp>

#include "sensor_msgs/Imu.h"

#include <sys/types.h>
#include <sys/ipc.h>
#include <semaphore.h>
#include <sys/stat.h>
#include <fcntl.h>

//#include <string.h>


char SEM_NAME[]= "i2c";

namespace opts = boost::program_options;

// TODO: print warning if accelerometer magnitude is not close to 1 when starting up

// An Euler angle could take 8 chars: -234.678, but usually we only need 6.
float field_width = 6;
#define FLOAT_FORMAT std::fixed << std::setprecision(3) << std::setw(field_width)

#endif