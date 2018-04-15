//
//  StringMacro.h
//  LoveQi
//
//  Created by tops on 2018/1/25.
//  Copyright © 2018年 李琦. All rights reserved.
//

#ifndef StringMacro_h
#define StringMacro_h

/// 字符串处理
#define MRJTrim(x) [x stringByTrimmingCharactersInSet: [NSCharacterSet whitespaceCharacterSet]]
#define MRJSWF(FORMAT, ...) [NSString stringWithFormat:FORMAT, __VA_ARGS__]
#define MRJObjString(obj) [NSString stringWithFormat:@"%@", obj]
#define MRJIntString(obj) [NSString stringWithFormat:@"%ld", obj]
#define MRJReplace(raw,f,r) [raw stringByReplacingOccurrencesOfString:f withString:r]
#define MRJIsStringNull(string) ((string == nil || string.length == 0 || [string isEqualToString:@"(null)"]) ? YES : NO)

#endif /* StringMacro_h */
