/*
  Crates ‐ extensible 3D puzzle game.
  Copyright (C) 2008‐2010  Octaspire (www.octaspire.com)

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef OMISSIONMANAGER_H
#define OMISSIONMANAGER_H

#include "omission.h"
#include "ostring.h"
#include "otypes.h"
#include "ostring.h"
#include <stdint.h>

typedef struct {
  OPtrVector *missions;
  OMission   *current;
} OMissionManager;

OMissionManager *omissionmanager_new                (void);
void             omissionmanager_release            (OMissionManager *missionmanager);
ouint32          omissionmanager_getnummissions     (const OMissionManager *missionmanager);
const ochar     *omissionmanager_getmissionnameat   (const OMissionManager *missionmanager, const ouint32 index);
const ochar     *omissionmanager_getmissionpathat   (const OMissionManager *missionmanager, const ouint32 index);
OMission        *omissionmanager_getmissionptrat    (const OMissionManager *missionmanager, const ouint32 index);
OMission        *omissionmanager_getmissionptrnamed (const OMissionManager *missionmanager, const ochar *name);

#endif
