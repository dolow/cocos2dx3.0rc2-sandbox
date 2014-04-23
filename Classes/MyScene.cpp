#include "MyScene.h"

MyScene::MyScene()  {}
MyScene::~MyScene() {}

MyScene* MyScene::create()
{
    MyScene* ret = new MyScene();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool MyScene::init()
{
    if (!Scene::init()) return false;
    
    return true;
}

std::string MyScene::say()
{
    return std::string("unko");
}
MyScene* MyScene::getScene()
{
    return this;
}