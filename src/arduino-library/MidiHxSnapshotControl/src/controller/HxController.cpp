/**
 * @file HxController.h
 * @author Christian Neukam
 * @brief Implementation of the midihxsnapshotcontrol::controller::HxController.
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
#include "HxController.h"

#include "ISerialReader.h"
#include "ISerialWriter.h"

namespace midihxsnapshotcontrol::controller {
HxController::HxController([[maybe_unused]] const uint8_t channel,
                           [[maybe_unused]] ISerialReader& reader,
                           [[maybe_unused]] ISerialWriter& writer) {}

void HxController::listen() {}
}  // namespace midihxsnapshotcontrol::controller