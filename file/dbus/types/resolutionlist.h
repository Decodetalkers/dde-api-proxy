// SPDX-FileCopyrightText: 2018 - 2022 UnionTech Software Technology Co., Ltd.
// 
// SPDX-License-Identifier: GPL-3.0-or-later


#ifndef RESOLUTIONLIST_H
#define RESOLUTIONLIST_H

#include "resolution.h"

#include <QList>

typedef QList<Resolution> ResolutionList;

void registerResolutionListMetaType();

#endif // RESOLUTIONLIST_H
