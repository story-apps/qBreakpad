/*
 *  Copyright (C) 2009 Aleksey Palazhchenko
 *  Copyright (C) 2014 Sergey Shambir
 *  Copyright (C) 2016 Alexander Makarov
 *  Copyright (C) 2022 Dimka Novikov
 *
 * This file is a part of Breakpad-qt library.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 */

#pragma once

#include "singletone/singleton.h"

class QString;


/**
 * @brief Обработчик исключений приложения
 */
class QBreakpadHandler
{
public:
    /**
     * @brief Инициилизировать обработчик, указывая папку, куда сохранять краши и путь к файлу лога
     */
    void init(const QString& _dumpPath, const QString& _logFilePath);
};
#define QBreakpadInstance Singleton<QBreakpadHandler>::instance()
