//
//  Doctor.m
//  DoctorPatient
//
//  Created by Elle Ti on 2017-06-01.
//  Copyright © 2017 Elle Ti. All rights reserved.
//

#import "Doctor.h"

@implementation Doctor

- (instancetype)initWithName:(NSString *)docName spec:(NSString *)docSpec
{
    if (self = [super init])
    {
        _doctorName = docName;
        _doctorSpecialization = docSpec;
    }
    return self;
}

@end
