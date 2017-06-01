//
//  Patient.m
//  DoctorPatient
//
//  Created by Elle Ti on 2017-06-01.
//  Copyright © 2017 Elle Ti. All rights reserved.
//

#import "Patient.h"

@implementation Patient

- (instancetype)initWithPName:(NSString *)pName age:(NSInteger)pAge
{
    if (self = [super init])
    {
        _patientName = pName;
        _patientAge = pAge;
    }
    return self;
}

@end
