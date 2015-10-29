//
//  SerializeModel.h
//  FCModelTest

#import "FCModel.h"

@interface SerializeModel : FCModel

@property (nonatomic) int64_t id;
@property (nonatomic, copy) NSDictionary *testDictionary;
@property (nonatomic, copy) NSArray *testArray;

@end
