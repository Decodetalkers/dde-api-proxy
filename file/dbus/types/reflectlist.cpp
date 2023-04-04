// SPDX-FileCopyrightText: 2018 - 2022 UnionTech Software Technology Co., Ltd.
// 
// SPDX-License-Identifier: GPL-3.0-or-later


#include "reflectlist.h"

void registerReflectListMetaType()
{
    qRegisterMetaType<ReflectList>("ReflectList");
    qDBusRegisterMetaType<ReflectList>();
}
