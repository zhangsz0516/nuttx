/****************************************************************************
 * include/nuttx/segger/rtt.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __INCLUDE_NUTTX_SEGGER_RTT_H
#define __INCLUDE_NUTTX_SEGGER_RTT_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include <nuttx/streams.h>

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/****************************************************************************
 * Type Declarations
 ****************************************************************************/

struct lib_rttoutstream_s
{
  struct lib_outstream_s public;
  char name[32];
  FAR char *buffer;
  int channel;
};

struct lib_rttinstream_s
{
  struct lib_instream_s public;
  char name[32];
  FAR char *buffer;
  int channel;
};

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

#ifdef __cplusplus
extern "C"
{
#endif

/****************************************************************************
* Name: lib_rttoutstream_open
*****************************************************************************/

void lib_rttoutstream_open(FAR struct lib_rttoutstream_s *stream,
                           int channel, size_t bufsize);

/****************************************************************************
 * Name: lib_rttoutstream_close
 ****************************************************************************/

void lib_rttoutstream_close(FAR struct lib_rttoutstream_s *stream);

/****************************************************************************
* Name: lib_rttinstream_open
*****************************************************************************/

void lib_rttinstream_open(FAR struct lib_rttinstream_s *stream,
                          int channel, size_t size);

/****************************************************************************
 * Name: lib_rttinstream_close
 ****************************************************************************/

void lib_rttinstream_close(FAR struct lib_rttinstream_s *stream);

#ifdef __cplusplus
}
#endif

#endif
