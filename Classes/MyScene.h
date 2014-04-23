#ifndef __H3Sandbox__MyScene__
#define __H3Sandbox__MyScene__

#include "cocos2d.h"

class MyScene : public cocos2d::Scene
{
public:
    MyScene();
    ~MyScene();
    
    static MyScene* create();
    
    virtual bool init();
    
    std::string say();
    MyScene* getScene();
};

#endif /* defined(__H3Sandbox__MyScene__) */
