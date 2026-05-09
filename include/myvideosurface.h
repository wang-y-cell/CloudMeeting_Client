#ifndef MYVIDEOSURFACE_H
#define MYVIDEOSURFACE_H

#include <QObject>
#include <QVideoSink>
#include <QVideoFrame>
#include <QImage>

class MyVideoSurface : public QObject
{
    Q_OBJECT
public:
    MyVideoSurface(QObject *parent = nullptr);
    QVideoSink* getVideoSink() const;

private:
    QVideoSink *m_videoSink;

public slots:
    void handleVideoFrame(const QVideoFrame &frame);

signals:
    void frameAvailable(QVideoFrame);
};

#endif // MYVIDEOSURFACE_H
