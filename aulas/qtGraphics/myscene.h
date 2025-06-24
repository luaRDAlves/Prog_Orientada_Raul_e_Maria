#ifndef MYSCENE_H
#define MYSCENE_H

#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QKeyEvent>
#include <QTimer>
#include "ball.h"

class MyScene : public QGraphicsScene
{
    QGraphicsRectItem * _rect;
    Ball * _ball;
    QTimer * _timer;

public:
    explicit MyScene(QObject *parent = nullptr);

    // QGraphicsScene interface
protected:
    void keyPressEvent(QKeyEvent *event) override;

    // QGraphicsScene interface
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
};

#endif // MYSCENE_H
