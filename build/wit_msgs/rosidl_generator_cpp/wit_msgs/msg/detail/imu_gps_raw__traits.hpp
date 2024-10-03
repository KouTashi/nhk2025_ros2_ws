// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wit_msgs:msg/ImuGpsRaw.idl
// generated code does not contain a copyright notice

#ifndef WIT_MSGS__MSG__DETAIL__IMU_GPS_RAW__TRAITS_HPP_
#define WIT_MSGS__MSG__DETAIL__IMU_GPS_RAW__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wit_msgs/msg/detail/imu_gps_raw__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace wit_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImuGpsRaw & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: acc
  {
    if (msg.acc.size() == 0) {
      out << "acc: []";
    } else {
      out << "acc: [";
      size_t pending_items = msg.acc.size();
      for (auto item : msg.acc) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro
  {
    if (msg.gyro.size() == 0) {
      out << "gyro: []";
    } else {
      out << "gyro: [";
      size_t pending_items = msg.gyro.size();
      for (auto item : msg.gyro) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rpy
  {
    if (msg.rpy.size() == 0) {
      out << "rpy: []";
    } else {
      out << "rpy: [";
      size_t pending_items = msg.rpy.size();
      for (auto item : msg.rpy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mag
  {
    if (msg.mag.size() == 0) {
      out << "mag: []";
    } else {
      out << "mag: [";
      size_t pending_items = msg.mag.size();
      for (auto item : msg.mag) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ps
  {
    if (msg.ps.size() == 0) {
      out << "ps: []";
    } else {
      out << "ps: [";
      size_t pending_items = msg.ps.size();
      for (auto item : msg.ps) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << ", ";
  }

  // member: ap
  {
    out << "ap: ";
    rosidl_generator_traits::value_to_yaml(msg.ap, out);
    out << ", ";
  }

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longtitude
  {
    out << "longtitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longtitude, out);
    out << ", ";
  }

  // member: gpsh
  {
    out << "gpsh: ";
    rosidl_generator_traits::value_to_yaml(msg.gpsh, out);
    out << ", ";
  }

  // member: gpsy
  {
    out << "gpsy: ";
    rosidl_generator_traits::value_to_yaml(msg.gpsy, out);
    out << ", ";
  }

  // member: gpsv
  {
    out << "gpsv: ";
    rosidl_generator_traits::value_to_yaml(msg.gpsv, out);
    out << ", ";
  }

  // member: quarternion
  {
    if (msg.quarternion.size() == 0) {
      out << "quarternion: []";
    } else {
      out << "quarternion: [";
      size_t pending_items = msg.quarternion.size();
      for (auto item : msg.quarternion) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sn
  {
    out << "sn: ";
    rosidl_generator_traits::value_to_yaml(msg.sn, out);
    out << ", ";
  }

  // member: dop
  {
    if (msg.dop.size() == 0) {
      out << "dop: []";
    } else {
      out << "dop: [";
      size_t pending_items = msg.dop.size();
      for (auto item : msg.dop) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImuGpsRaw & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acc.size() == 0) {
      out << "acc: []\n";
    } else {
      out << "acc:\n";
      for (auto item : msg.acc) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro.size() == 0) {
      out << "gyro: []\n";
    } else {
      out << "gyro:\n";
      for (auto item : msg.gyro) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rpy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rpy.size() == 0) {
      out << "rpy: []\n";
    } else {
      out << "rpy:\n";
      for (auto item : msg.rpy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mag.size() == 0) {
      out << "mag: []\n";
    } else {
      out << "mag:\n";
      for (auto item : msg.mag) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ps.size() == 0) {
      out << "ps: []\n";
    } else {
      out << "ps:\n";
      for (auto item : msg.ps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << "\n";
  }

  // member: ap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ap: ";
    rosidl_generator_traits::value_to_yaml(msg.ap, out);
    out << "\n";
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longtitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longtitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longtitude, out);
    out << "\n";
  }

  // member: gpsh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gpsh: ";
    rosidl_generator_traits::value_to_yaml(msg.gpsh, out);
    out << "\n";
  }

  // member: gpsy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gpsy: ";
    rosidl_generator_traits::value_to_yaml(msg.gpsy, out);
    out << "\n";
  }

  // member: gpsv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gpsv: ";
    rosidl_generator_traits::value_to_yaml(msg.gpsv, out);
    out << "\n";
  }

  // member: quarternion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.quarternion.size() == 0) {
      out << "quarternion: []\n";
    } else {
      out << "quarternion:\n";
      for (auto item : msg.quarternion) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sn: ";
    rosidl_generator_traits::value_to_yaml(msg.sn, out);
    out << "\n";
  }

  // member: dop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dop.size() == 0) {
      out << "dop: []\n";
    } else {
      out << "dop:\n";
      for (auto item : msg.dop) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImuGpsRaw & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace wit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use wit_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wit_msgs::msg::ImuGpsRaw & msg,
  std::ostream & out, size_t indentation = 0)
{
  wit_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wit_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wit_msgs::msg::ImuGpsRaw & msg)
{
  return wit_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wit_msgs::msg::ImuGpsRaw>()
{
  return "wit_msgs::msg::ImuGpsRaw";
}

template<>
inline const char * name<wit_msgs::msg::ImuGpsRaw>()
{
  return "wit_msgs/msg/ImuGpsRaw";
}

template<>
struct has_fixed_size<wit_msgs::msg::ImuGpsRaw>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wit_msgs::msg::ImuGpsRaw>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wit_msgs::msg::ImuGpsRaw>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WIT_MSGS__MSG__DETAIL__IMU_GPS_RAW__TRAITS_HPP_
