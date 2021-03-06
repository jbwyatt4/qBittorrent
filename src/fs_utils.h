/*
 * Bittorrent Client using Qt4 and libtorrent.
 * Copyright (C) 2012  Christophe Dumez
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * In addition, as a special exception, the copyright holders give permission to
 * link this program with the OpenSSL project's "OpenSSL" library (or with
 * modified versions of it that use the same license as the "OpenSSL" library),
 * and distribute the linked executables. You must obey the GNU General Public
 * License in all respects for all of the code used other than "OpenSSL".  If you
 * modify file(s), you may extend this exception to your version of the file(s),
 * but you are not obligated to do so. If you do not wish to do so, delete this
 * exception statement from your version.
 *
 * Contact : chris@qbittorrent.org
 */

#ifndef FS_UTILS_H
#define FS_UTILS_H

#include <QString>
#include <QCoreApplication>

/**
 * Utility functions related to file system.
 */
class fsutils
{
  Q_DECLARE_TR_FUNCTIONS(fsutils)

public:
static QString toDisplayPath(const QString& path);
static QString fileExtension(const QString& filename);
static QString fileName(const QString& file_path);
static qint64 computePathSize(const QString& path);
static bool sameFiles(const QString& path1, const QString& path2);
static QString updateLabelInSavePath(QString defaultSavePath, QString save_path, const QString& old_label, const QString& new_label);
static QString toValidFileSystemName(QString filename);
static bool isValidFileSystemName(const QString& filename);
static long long freeDiskSpaceOnPath(QString path);
static QString branchPath(const QString& file_path, QString* removed = 0);
static bool sameFileNames(const QString& first, const QString& second);
static QString expandPath(const QString& path);
static bool isValidTorrentFile(const QString& path);
static bool smartRemoveEmptyFolderTree(const QString& dir_path);
static bool forceRemove(const QString& file_path);

/* Ported from Qt4 to drop dependency on QtGui */
static QString QDesktopServicesDataLocation();
static QString QDesktopServicesCacheLocation();
static QString QDesktopServicesDownloadLocation();
/* End of Qt4 code */
static QString searchEngineLocation();
static QString BTBackupLocation();
static QString cacheLocation();

};

#endif // FS_UTILS_H

