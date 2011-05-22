//
//  Kdb4Parser.h
//  KeePass2
//
//  Created by Qiang Yu on 2/4/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GDataXMLNode.h"
#import "DataSource.h"
#import "RandomStream.h"
#import "Kdb4Node.h"

@interface Kdb4Parser : NSObject {
    id<RandomStream> _randomStream;
}

@property (nonatomic, retain) id<RandomStream> _randomStream;

- (Kdb4Tree*)parse:(id<InputDataSource>)input;

@end
