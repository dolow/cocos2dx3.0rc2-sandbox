#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "MyScene.h"

class HelloWorld : public cocos2d::Layer
{
public:
    static MyScene* createScene();

    virtual bool init();
    
    MyScene* getScene();
    
    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
