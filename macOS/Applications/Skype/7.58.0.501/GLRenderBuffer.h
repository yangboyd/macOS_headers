//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GLRenderBuffer : NSObject
{
    void *_conversionBuffer;
    BOOL _doConversion;
    _Bool _doDebug;
    unsigned int _textureId;
    unsigned int _imageWidth;
    unsigned int _imageHeight;
    int _imageOrientation;
    unsigned int _imageStartTimestamp;
    unsigned int _imagePresentationTimestamp;
    unsigned int _imageFourcc;
    unsigned int _imageBitsPerPixel;
    unsigned int _imageStep;
    unsigned int _conversionBufferSize;
    unsigned int _conversionBufferStep;
    unsigned int _conversionFourcc;
    unsigned int _conversionBitsPerPixel;
    int _textureWidth;
    int _textureHeight;
    int _textureUnpackRowLength;
    int _textureUnpackAlignment;
    int _textureInternalFormat;
    unsigned int _textureFormat;
    unsigned int _textureType;
    struct RectSize _displaySize;
    struct RoiF _stabilizationRoi;
}

@property(nonatomic) _Bool doDebug; // @synthesize doDebug=_doDebug;
@property(nonatomic) unsigned int textureType; // @synthesize textureType=_textureType;
@property(nonatomic) unsigned int textureFormat; // @synthesize textureFormat=_textureFormat;
@property(nonatomic) int textureInternalFormat; // @synthesize textureInternalFormat=_textureInternalFormat;
@property(nonatomic) int textureUnpackAlignment; // @synthesize textureUnpackAlignment=_textureUnpackAlignment;
@property(nonatomic) int textureUnpackRowLength; // @synthesize textureUnpackRowLength=_textureUnpackRowLength;
@property(nonatomic) int textureHeight; // @synthesize textureHeight=_textureHeight;
@property(nonatomic) int textureWidth; // @synthesize textureWidth=_textureWidth;
@property(nonatomic) unsigned int conversionBitsPerPixel; // @synthesize conversionBitsPerPixel=_conversionBitsPerPixel;
@property(nonatomic) unsigned int conversionFourcc; // @synthesize conversionFourcc=_conversionFourcc;
@property(nonatomic) unsigned int conversionBufferStep; // @synthesize conversionBufferStep=_conversionBufferStep;
@property(nonatomic) unsigned int conversionBufferSize; // @synthesize conversionBufferSize=_conversionBufferSize;
@property(nonatomic) BOOL doConversion; // @synthesize doConversion=_doConversion;
@property(nonatomic) unsigned int imageStep; // @synthesize imageStep=_imageStep;
@property(nonatomic) unsigned int imageBitsPerPixel; // @synthesize imageBitsPerPixel=_imageBitsPerPixel;
@property(nonatomic) unsigned int imageFourcc; // @synthesize imageFourcc=_imageFourcc;
@property(nonatomic) unsigned int imagePresentationTimestamp; // @synthesize imagePresentationTimestamp=_imagePresentationTimestamp;
@property(nonatomic) unsigned int imageStartTimestamp; // @synthesize imageStartTimestamp=_imageStartTimestamp;
@property(nonatomic) struct RectSize displaySize; // @synthesize displaySize=_displaySize;
@property(nonatomic) struct RoiF stabilizationRoi; // @synthesize stabilizationRoi=_stabilizationRoi;
@property(nonatomic) int imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(nonatomic) unsigned int imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) unsigned int imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) unsigned int textureId; // @synthesize textureId=_textureId;
- (void)destroyGLResources;
- (void)createGLResources;
- (BOOL)bind;
- (BOOL)transferVideoFrame:(const struct IVideoFrame *)arg1 absoluteTime:(unsigned int)arg2;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)dealloc;
- (id)init;

@end

