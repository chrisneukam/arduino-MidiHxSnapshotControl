/**
 * @file ISerialReader.h
 * @author Christian Neukam
 * @brief Definition of the midihxsnapshotcontrol::ISerialReader interface.
 * @version 1.0
 * @date 2024-07-14
 *
 * @copyright Copyright 2024 Christian Neukam. All rights reserved.
 * @note Code copied from
 * https://github.com/chrisneukam/MidiDmxBridge/blob/main/src/ISerialReader.h .
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
#ifndef __MIDIHXSNAPSHOTCONTROL_I_SERIAL_READER_H__
#define __MIDIHXSNAPSHOTCONTROL_I_SERIAL_READER_H__

#include "ISleep.h"

namespace midihxsnapshotcontrol {

/**
 * @brief Interface of an object reading data from a serial hardware interface.
 *
 */
class ISerialReader : public ISleep {
 public:
  /**
   * @brief Destroy the ISerialReader object.
   *
   */
  virtual ~ISerialReader() = default;

  /**
   * @brief Initialize the instance of the ISerialReader object.
   *
   */
  virtual void begin() = 0;

  /**
   * @brief Return the number of available bytes in the serial input buffer.
   *
   * @return int - the number of bytes available in the input buffer
   */
  virtual int available() = 0;

  /**
   * @brief Get the next byte from the serial input stack.
   *
   * @return int - the value of the data
   */
  virtual int read() = 0;
};
}  // namespace midihxsnapshotcontrol
#endif
