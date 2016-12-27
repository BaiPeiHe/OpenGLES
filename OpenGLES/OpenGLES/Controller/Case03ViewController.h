//
//  Case02ViewController.h
//  OpenGLES
//
//  Created by 白鹤 on 2016/12/26.
//  Copyright © 2016年 白鹤. All rights reserved.
//

#import <GLKit/GLKit.h>

#import "GLKVertexAttribArrayBuffer.h"
#import "AGLKContext.h"

@interface Case03ViewController : GLKViewController
{
    GLuint vertexBufferID;
}

@property (strong, nonatomic) GLKBaseEffect *baseEffect;
@property (strong, nonatomic) GLKVertexAttribArrayBuffer *vertextBuffer;
@property (strong, nonatomic) GLKTextureInfo *textureInfo0;
@property (strong, nonatomic) GLKTextureInfo *textureInfo1;
@end
