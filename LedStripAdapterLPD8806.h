/******************************************************************************
 * Copyright (c) LedStripController 2016. All rights reserved.                *
 *                                                                            *
 * @author Tim Visee                                                          *
 * @website http://timvisee.com/                                              *
 *                                                                            *
 * Open Source != No Copyright                                                *
 *                                                                            *
 * Permission is hereby granted, free of charge, to any person obtaining a    *
 * copy of this software and associated documentation files (the "Software"), *
 * to deal in the Software without restriction, including without limitation  *
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,   *
 * and/or sell copies of the Software, and to permit persons to whom the      *
 * Software is furnished to do so, subject to the following conditions:       *
 *                                                                            *
 * The above copyright notice and this permission notice shall be included    *
 * in all copies or substantial portions of the Software.                     *
 *                                                                            *
 * You should have received a copy of The MIT License (MIT) along with this   *
 * program. If not, see <http://opensource.org/licenses/MIT/>.                *
 ******************************************************************************/

#ifndef LEDSTRIPCONTROLLER_LEDSTRIPADAPTERLPD8806_H
#define LEDSTRIPCONTROLLER_LEDSTRIPADAPTERLPD8806_H

#include "LPD8806.h"
#include "BaseLedStripAdapter.h"

class LedStripAdapterLPD8806 : public BaseLedStripAdapter {
private:
    /**
     * LPD8806 strip instance.
     */
    LPD8806 strip;

public:
    /**
     * Constructor.
     *
     * @param ledCount Number of LEDs.
     * @param pinData Data pin.
     * @param pinClock Clock pin.
     */
    LedStripAdapterLPD8806(uint8_t ledCount, uint8_t pinData, uint8_t pinClock);
};

#endif // LEDSTRIPCONTROLLER_LEDSTRIPADAPTERLPD8806_H
