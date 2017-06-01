//
//  Doctor.h
//  DoctorPatient
//
//  Created by Elle Ti on 2017-06-01.
//  Copyright © 2017 Elle Ti. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Patient.h"

@interface Doctor : NSObject <PatientDelegate>

@property (nonatomic, strong) NSString *doctorName;
@property (nonatomic, strong) NSString *doctorSpecialization;

@property (nonatomic, strong) Patient *patient;

- (instancetype)initWithName:(NSString *)docName spec:(NSString *)docSpec;

@end
