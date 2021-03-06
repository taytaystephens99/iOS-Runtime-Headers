/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class SFUFileDataRepresentation;

@interface OISFUZipArchiveFileDataRepresentation : OISFUDataRepresentation <SFUZipArchiveDataRepresentation> {
    int mFd;
    SFUFileDataRepresentation *mFileRepresentation;
}

- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (long long)dataLength;
- (void)dealloc;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)inputStream;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (BOOL)isEncrypted;
- (BOOL)isReadable;
- (id)path;

@end
