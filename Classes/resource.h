//TAG定义
#define	tag_bg_top 1000
#define	tag_bg_bottom 1001
#define	tag_start_game 1002
#define	tag_score_label 1003
#define	tag_score_bg 1004
#define	tag_yuanyuan 1005
#define	tag_fangfang 1006
#define tag_fangfangAction 1007
#define tag_yuanyuanAction 1008

//颜色
#define color_default Color4B(205, 225, 235, 255)
#define color_default_b Color4B(63, 88, 100, 255)
#define color_default_cc3 Color3B(205, 225, 235)

#define color_level_1 Color3B(209, 196, 236)
#define color_level_1_b Color3B(83, 69, 113)
#define color_level_1_cc3 Color3B(209, 196, 236)

#define color_level_2 Color3B(239, 211, 192)
#define color_level_2_b Color3B(113, 81, 59)
#define color_level_2_cc3 Color3B(239, 211, 192)

//音效
//按钮点击
#define music_button_touch "sfx_button.wav"
//跳跃
#define music_player_jump "sfx_player_jump.wav"
//得分
#define music_score "sfx_score.wav"
//碰撞
#define music_player_die "sfx_player_die.wav"

//游戏状态
enum GAME_STATE
{
	GAME_STATE_START, //游戏开始
	GAME_STATE_PLAYING, //游戏进行中
	GAME_STATE_OVER, //游戏结束
	GAME_STATE_RESET //游戏重置
};