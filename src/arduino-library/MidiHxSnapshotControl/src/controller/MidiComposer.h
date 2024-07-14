/**
 * @file MidiComposer.h
 * @author Christian Neukam
 * @brief Definition of the midihxsnapshotcontrol::controller::MidiComposer.
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
#ifndef __MIDIHXSNAPSHOTCONTROL_MIDI_COMPOSER_H__
#define __MIDIHXSNAPSHOTCONTROL_MIDI_COMPOSER_H__

#include "ISignalComposer.h"

namespace midihxsnapshotcontrol::controller {

class MidiComposer : public ISignalComposer {};
}  // namespace midihxsnapshotcontrol::controller
#endif
