/***********************************************************************
*
* Copyright (c) 2012-2016 Barbara Geller
* Copyright (c) 2012-2016 Ansel Sermersheim
* Copyright (c) 2012-2014 Digia Plc and/or its subsidiary(-ies).
* Copyright (c) 2008-2012 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
*
* This file is part of CopperSpice.
*
* CopperSpice is free software: you can redistribute it and/or 
* modify it under the terms of the GNU Lesser General Public License
* version 2.1 as published by the Free Software Foundation.
*
* CopperSpice is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public
* License along with CopperSpice.  If not, see 
* <http://www.gnu.org/licenses/>.
*
***********************************************************************/

#ifndef QPNGHANDLER_P_H
#define QPNGHANDLER_P_H

#include <QtGui/qimageiohandler.h>

#ifndef QT_NO_IMAGEFORMAT_PNG

QT_BEGIN_NAMESPACE

class QPngHandlerPrivate;

class QPngHandler : public QImageIOHandler
{
 public:
   QPngHandler();
   ~QPngHandler();

   bool canRead() const override;
   bool read(QImage *image) override;
   bool write(const QImage &image) override;

   QByteArray name() const override;

   QVariant option(ImageOption option) const override;
   void setOption(ImageOption option, const QVariant &value) override;
   bool supportsOption(ImageOption option) const override;

   static bool canRead(QIODevice *device);

 private:
   QPngHandlerPrivate *d;
};

QT_END_NAMESPACE

#endif // QT_NO_IMAGEFORMAT_PNG
#endif // QPNGHANDLER_P_H
