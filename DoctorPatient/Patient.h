//
//  Patient.h
//  DoctorPatient
//
//  Created by Elle Ti on 2017-06-01.
//  Copyright © 2017 Elle Ti. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PatientDelegate <NSObject>
@end

@interface Patient : NSObject

@property (nonatomic, weak) NSString *patientName;
@property (nonatomic) NSInteger patientAge;

- (instancetype)initWithPName:(NSString *)pName age:(NSInteger)pAge;

@end
