#ifndef __WATCHOUT_SCENE_H__
#define __WATCHOUT_SCENE_H__

#include "cocos2d.h"
#include "resource.h"

class WatchOut : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();  
    
    CREATE_FUNC(WatchOut);
	//初始化视图
	void setupView();
	//开始游戏
	void startGame(cocos2d::Ref* pSender);
	//scheduleUpdate每帧调用方法
	void update(float dt);
	//触摸事件
	bool onTouchBegan(cocos2d::Touch* touch, cocos2d::Event  *event);
	//动作执行完成回调
	void callbackRunAction(cocos2d::Sprite* pTarget);
	
private:
	//游戏状态
	GAME_STATE _gameState;
	//跳跃高度
	float _jumpHeight;
	//移动速度
	float _runSpeed;
	//分数
	int _score;
	//当前小的TAG
	int _currentTag;

	//预加载音效文件
	void preloadMusic();
	//重置yuanyuan/fangfang(随机产生身体小的)
	void resetRunner();
};

#endif // __WATCHOUT_SCENE_H__
