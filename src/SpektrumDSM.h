/*
   SpektrumDSM.h : header for interrupt-based Spektrum DSM receiver for Arduino

   Copyright (C) Simon D. Levy 2017

   This file is part of SpektrumDSM.

   SpektrumDSM is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   SpektrumDSM is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License
   along with SpektrumDSM.  If not, see <http://www.gnu.org/licenses/>.
 */

// Change these as needed for your hardware
#define DSM_SERIAL_EVENT serialEvent1
#define DSM_SERIAL       Serial1

class SpektrumDSM {

    protected:

        SpektrumDSM(uint8_t rc, uint8_t cs, uint8_t cm, uint8_t vs);

    public:

        void begin(void);

        bool gotNewFrame(void);

        /**
          * Returns channel values in [1000,2000] interval
          */
        void    getChannelValues(uint16_t values[], uint8_t count=8);

        /**
          * Returns channel values in [-1,+1] interval
          */
        void    getChannelValuesNormalized(float values[], uint8_t count=8);

        uint8_t getFadeCount(void);

        bool    timedOut(uint32_t maxMicros=40000);
};

class SpektrumDSM1024 : public SpektrumDSM {

    public:

        SpektrumDSM1024(void);

};

class SpektrumDSM2048 : public SpektrumDSM {

    public:

        SpektrumDSM2048(void);
};

