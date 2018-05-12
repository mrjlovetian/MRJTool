//
//  ScreenMacro.h
//  LoveQi
//
//  Created by tops on 2018/1/25.
//  Copyright © 2018年 李琦. All rights reserved.
//

#ifndef ScreenMacro_h
#define ScreenMacro_h

#define ScreenSzie [[UIScreen mainScreen] bounds].size
#define SreenWidth (ScreenSzie.width)
#define SreenBottomHeight (iPhoneX ? 34 : 0)
#define SreenHeight (iPhoneX?(ScreenSzie.height):ScreenSzie.height)
#define NavBarHeight (iPhoneX ? 88 : 64)//bar的高度
#define StatusBarHeight [[UIApplication sharedApplication] statusBarFrame].size.height
#define VScaleRate (iPhone6Plus ? 1 : 2.0/3.0)
#define VScaleRateWidth ScreenSzie / 320.0 //算宽度比率
#define VScaleRateNewWidth SreenWidth / 375.0
#define VScaleRateHeight SreenHeight / 736.0 //算高度比率
#define VScaleRateNewHeight SreenHeight / 667 //算高度比率
#define VGetX(x) x*VScaleRateHeight;
#define Edge 15 //边距15
#define RowHeight 50 //行高，1行选择的高度
#define CellHeight 55 //输入内容的行高
#define TabBarHeight (50 + SreenBottomHeight) //主页tab的高度
#define ButtonHeight 48 //按钮高度

#endif /* ScreenMacro_h */
