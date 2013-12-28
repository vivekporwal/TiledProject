/*
 * HudLayer.cpp
 *
 *  Created on: 27-Dec-2013
 *      Author: vivek
 */

#include "HudLayer.h"
using namespace cocos2d;

bool HudLayer::init()
{
    if (CCLayer::init()) {
        CCSize winSize = CCDirector::sharedDirector()->getWinSize();

        _label = CCLabelTTF::create("0", "Verdana-Bold", 18);
        _label->setColor(ccBLACK);

        int margin = 10;
        _label->setPosition(ccp(winSize.width - (_label->getContentSize().width/2) - margin, _label->getContentSize().height/2 + margin));
        this->addChild(_label);
    }

    return true;
}

void HudLayer::numCollectedChanged(int numCollected)
{
    CCString *labelCollected = new CCString();
    labelCollected->initWithFormat("%d",numCollected);
    _label->setString(labelCollected->getCString());
}



