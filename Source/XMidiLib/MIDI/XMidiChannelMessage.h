//
//  Created by Lugia on 15/3/13.
//  Copyright (c) 2015年 Freedom. All rights reserved.
//

#import "XAudioPlayer.h"
#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@interface XMidiChannelMessage : NSObject
struct MidiInstrument {
    int type;
    int hbank, lbank, patch;
    int split;
    const char* name;
    int firstType;
};

extern struct MidiInstrument minstr[];
@property (nonatomic) UInt8 channel;
@property (nonatomic) UInt8 status;
@property (nonatomic) UInt8 data1;
@property (nonatomic) UInt8 data2;
@property (nonatomic) UInt8 reserved;
@property (nonatomic) NSString* instrumentName;
@property (nonatomic) int instrumentFirstType;
@property (nonatomic) int instrumentSecondType;

-(id)init:(MIDIChannelMessage*)channelMessage;
@end
