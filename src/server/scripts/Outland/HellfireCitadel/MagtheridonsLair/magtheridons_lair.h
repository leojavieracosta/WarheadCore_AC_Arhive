/*
 * This file is part of the WarheadCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DEF_MAGTHERIDONS_LAIR_H
#define DEF_MAGTHERIDONS_LAIR_H

#include "SpellScript.h"

enum DataTypes
{
    TYPE_MAGTHERIDON                = 0,
    MAX_ENCOUNTER                   = 1,

    DATA_CHANNELER_COMBAT           = 10,
    DATA_ACTIVATE_CUBES             = 11,
    DATA_COLLAPSE                   = 12
};

enum NpcIds
{
    NPC_MAGTHERIDON                 = 17257,
    NPC_HELLFIRE_CHANNELER          = 17256,
    NPC_HELLFIRE_WARDER             = 18829
};

enum GoIds
{
    GO_MAGTHERIDON_DOORS            = 183847,
    GO_MANTICRON_CUBE               = 181713,

    GO_MAGTHERIDON_HALL             = 184653,
    GO_MAGTHERIDON_COLUMN0          = 184634,
    GO_MAGTHERIDON_COLUMN1          = 184635,
    GO_MAGTHERIDON_COLUMN2          = 184636,
    GO_MAGTHERIDON_COLUMN3          = 184637,
    GO_MAGTHERIDON_COLUMN4          = 184638,
    GO_MAGTHERIDON_COLUMN5          = 184639
};

#endif
