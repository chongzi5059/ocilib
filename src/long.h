/*
 * OCILIB - C Driver for Oracle (C Wrapper for Oracle OCI)
 *
 * Website: http://www.ocilib.net
 *
 * Copyright (c) 2007-2020 Vincent ROGIER <vince.rogier@ocilib.net>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef OCILIB_LONG_H_INCLUDED
#define OCILIB_LONG_H_INCLUDED

#include "types.h"

OCI_Long * LongInitialize
(
    OCI_Statement *stmt,
    OCI_Long      *lg,
    OCI_Define    *def,
    unsigned int   type
);

OCI_Long * LongCreate
(
    OCI_Statement *stmt,
    unsigned int   type
);

boolean LongFree
(
    OCI_Long *lg
);

unsigned int LongGetType
(
    OCI_Long *lg
);

unsigned int LongRead
(
    OCI_Long    *lg,
    void        *buffer,
    unsigned int len
);

unsigned int LongWrite
(
    OCI_Long    *lg,
    void        *buffer,
    unsigned int len
);

unsigned int LongGetSize
(
    OCI_Long *lg
);

void * LongGetBuffer
(
    OCI_Long *lg
);

#endif /* OCILIB_LONG_H_INCLUDED */
