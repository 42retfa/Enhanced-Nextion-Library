/**
 * @file NexHotspot.h
 *
 * The definition of class NexHotspot. 
 *
 * @author Wu Pengfei (email:<pengfei.wu@itead.cc>)
 * @date 2015/8/13
 * @author Jyrki Berg 2/17/2019 (https://github.com/jyberg)
 *
 * @copyright 
 * Copyright (C) 2014-2015 ITEAD Intelligent Systems Co., Ltd. \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */

#ifndef __NEXHOTSPOT_H__
#define __NEXHOTSPOT_H__

#include "NexTouch.h"
#include "NexHardware.h"
/**
 * @addtogroup Component 
 * @{ 
 */

/**
 * NexHotspot component. 
 */
class NexHotspot: public NexTouch
{
public: /* methods */
    /**
     * @copydoc NexObject::NexObject(uint8_t pid, uint8_t cid, const char *name, const NexObject* page=nullptr);
     */
    NexHotspot(uint8_t pid, uint8_t cid, const char *name, const NexObject* page=nullptr);
};
/**
 * @}
 */


#endif /* #ifndef __NEXHOTSPOT_H__ */
