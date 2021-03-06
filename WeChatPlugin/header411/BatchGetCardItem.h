//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class CardDataInfo, NSString;

@interface BatchGetCardItem : PBGeneratedMessage
{
    unsigned int hasCardId:1;
    unsigned int hasCardDataInfo:1;
    NSString *cardId;
    CardDataInfo *cardDataInfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetCardDataInfo:) CardDataInfo *cardDataInfo; // @synthesize cardDataInfo;
@property(readonly, nonatomic) BOOL hasCardDataInfo; // @synthesize hasCardDataInfo;
@property(retain, nonatomic, setter=SetCardId:) NSString *cardId; // @synthesize cardId;
@property(readonly, nonatomic) BOOL hasCardId; // @synthesize hasCardId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

