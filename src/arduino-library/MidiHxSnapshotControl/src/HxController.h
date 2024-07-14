/**
 * @file HxController.h
 * @author Christian Neukam
 * @brief Definition of the midihxsnapshotcontrol::controller::HxController.
 * @version 1.0
 * @date 2024-07-14
 *
 * @copyright Copyright 2024 Christian Neukam. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __MIDIHXSNAPSHOTCONTROL_HX_CONTROLLER_H__
#define __MIDIHXSNAPSHOTCONTROL_HX_CONTROLLER_H__

#include <stdint.h>

namespace midihxsnapshotcontrol {
class ISerialReader;
class ISerialWriter;
}  // namespace midihxsnapshotcontrol

namespace midihxsnapshotcontrol::controller {
using midihxsnapshotcontrol::ISerialReader;
using midihxsnapshotcontrol::ISerialWriter;

class HxController {
 public:
  HxController(const uint8_t channel, ISerialReader& reader, ISerialWriter& writer);

  virtual ~HxController() = default;

  void listen();

 private:
};
}  // namespace midihxsnapshotcontrol::controller
#endif
