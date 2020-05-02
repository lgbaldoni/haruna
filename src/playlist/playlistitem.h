/*
 * SPDX-FileCopyrightText: 2020 George Florea Bănuș <georgefb899@gmail.com>
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef PLAYLISTITEM_H
#define PLAYLISTITEM_H

#include <QObject>

class PlayListItem
{
public:
    explicit PlayListItem() = default;
    ~PlayListItem() = default;

    QString filePath() const;
    void setFilePath(const QString &filePath);

    QString fileName() const;
    void setFileName(const QString &fileName);

    QString folderPath() const;
    void setFolderPath(const QString &folderPath);

    QString duration() const;
    void setDuration(const QString &duration);

    bool isHovered() const;
    void setIsHovered(bool isHovered);

    bool isPlaying() const;
    void setIsPlaying(bool isPlaying);

    int index() const;
    void setIndex(int index);

private:
    QString m_filePath;
    QString m_fileName;
    QString m_folderPath;
    QString m_duration;
    bool m_isHovered {};
    bool m_isPlaying {};
    int m_index {};
};

#endif // PLAYLISTITEM_H
