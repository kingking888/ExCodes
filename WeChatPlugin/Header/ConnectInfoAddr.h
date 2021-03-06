//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ConnectInfoAddr : PBGeneratedMessage
{
    unsigned int hasIp:1;
    unsigned int hasPortCount:1;
    unsigned int portCount;
    NSString *ip;
    NSMutableArray *mutablePortList;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetPortCount:) unsigned int portCount; // @synthesize portCount;
@property(readonly, nonatomic) BOOL hasPortCount; // @synthesize hasPortCount;
@property(retain, nonatomic) NSMutableArray *mutablePortList; // @synthesize mutablePortList;
@property(retain, nonatomic, setter=SetIp:) NSString *ip; // @synthesize ip;
@property(readonly, nonatomic) BOOL hasIp; // @synthesize hasIp;
- (void).cxx_destruct;
- (void)addPortFromArray:(id)arg1;
- (void)addPort:(unsigned int)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *port; // @dynamic port;
- (id)portList;
- (id)init;

@end

