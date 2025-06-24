#include "myscene.h"
#include <QDebug>
#include <QGraphicsSceneMouseEvent>
#include <QPointF>

MyScene::MyScene(QObject *parent)
    : QGraphicsScene{parent}
{
    _rect = addRect(QRectF(-50,-50,100,100));
    _rect->setPos(QPointF(50,50));
    _rect->setRotation(45);
    QPen pen(Qt::red);
    pen.setWidth(4);
    _rect->setPen(pen);
    _rect->setBrush(Qt::blue);
    _rect->setFlag(QGraphicsItem::ItemIsFocusable);


    _ball = new Ball(-50,-50,100,100);
    _ball->setPen(pen);
    _ball->setBrush(Qt::gray);
    _ball->setFlag(QGraphicsItem::ItemIsFocusable);
    _ball->setFlag(QGraphicsItem::ItemIsMovable);
    addItem(_ball);


    addLine(-200,0,200,0);
    addLine(0,-200,0,200);

    setBackgroundBrush(Qt::yellow);

    _timer = new QTimer;
    QObject::connect(_timer, SIGNAL(timeout()), this, SLOT(advance()));
    _timer->start(1000/30);
}

void MyScene::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "Key press event in MyScene";

    QGraphicsItem * item = this->focusItem();
    if(item == nullptr){
        qDebug() << "No item in focus!";
    } else {
        if( event->key() == Qt::Key_Left) {
            item->moveBy(-1,0);
        }
        if( event->key() == Qt::Key_Right) {
            item->moveBy(1,0);
        }
        if( event->key() == Qt::Key_Up) {
            item->moveBy(0,-1);
        }
        if( event->key() == Qt::Key_Down) {
            item->moveBy(0,1);
        }
    }
    QGraphicsScene::keyPressEvent(event);
}

void MyScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
        QPointF pos = event->scenePos();
        _ball->setTarget(pos);
        qDebug() << "Clicked in " << pos.x() << "," << pos.y();
}
