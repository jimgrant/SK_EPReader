//
//  EPubParser.h
//  AePubReader
//
//  Created by Federico Frappi on 05/04/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TouchXML.h"
		

@interface EPub : NSObject

@property (nonatomic, strong) NSString *epubFilePath;
@property (nonatomic, strong) NSArray *spineArray;

- (instancetype)initWithEPubPath:(NSString *)path;

@end