#include "HelloWorldScene.h"

USING_NS_CC;

MyScene* HelloWorld::createScene()
{
    auto scene = MyScene::create();
    auto layer = HelloWorld::create();
    scene->addChild(layer);

    return scene;
}

bool HelloWorld::init()
{
    if (!Layer::init()) return false;
    
    this->getScene();
    
    return true;
}


MyScene* HelloWorld::getScene()
{
    MyScene* scene =  dynamic_cast<MyScene*>(this->getParent());
    CCLOG("getScene : %s", scene->say().c_str());
    return scene;
    
}