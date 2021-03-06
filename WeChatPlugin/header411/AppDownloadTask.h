//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICdnComMgrExt.h"
#import "MMCGIDelegate.h"

@class CdnTaskInfo, FavoritesItemDataField, MessageData, NSString;

@interface AppDownloadTask : NSObject <ICdnComMgrExt, MMCGIDelegate>
{
    MessageData *m_msgData;
    unsigned long long m_taskId;
    NSString *m_nsChatName;
    CdnTaskInfo *_curTaskInfo;
    id <AppDownloadTaskDelegate> m_delegate;
    unsigned int m_uiStartPos;
    unsigned int m_uTotalLen;
    unsigned int m_cgiSessionId;
    int _type;
    FavoritesItemDataField *_recordMsgData;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) FavoritesItemDataField *recordMsgData; // @synthesize recordMsgData=_recordMsgData;
@property(nonatomic) id <AppDownloadTaskDelegate> delegate; // @synthesize delegate=m_delegate;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=m_nsChatName;
@property(nonatomic) unsigned long long taskId; // @synthesize taskId=m_taskId;
@property(retain, nonatomic) MessageData *msgData; // @synthesize msgData=m_msgData;
- (void).cxx_destruct;
- (void)OnCdnDownloadFinished:(id)arg1;
- (id)getDownloadFilePathWithMessageData:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)cancelDownload;
- (void)downloadOk:(id)arg1;
- (void)downloadFail:(unsigned int)arg1;
- (BOOL)isAppFileDataExist;
- (void)downloadFailByCDN:(int)arg1;
- (void)downloadOkByCDN;
- (BOOL)sendAppDownloadReq;
- (void)downloadAppContent;
- (void)downloadAppContentByCDN;
- (void)downloadRecordMediaByCDN;
- (void)startDownloading;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

