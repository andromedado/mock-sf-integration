/*
 * Copyright 2016 salesforce.com, inc.
 * All rights reserved.
 *
 * Use of this software is subject to the salesforce.com Developerforce Terms of
 * Use and other applicable terms that salesforce.com may make available, as may be
 * amended from time to time. You may not decompile, reverse engineer, disassemble,
 * attempt to derive the source code of, decrypt, modify, or create derivative
 * works of this software, updates thereto, or any part thereof. You may not use
 * the software to engage in any development activity that infringes the rights of
 * a third party, including that which interferes with, damages, or accesses in an
 * unauthorized manner the servers, networks, or other properties or services of
 * salesforce.com or any third party.
 *
 * WITHOUT LIMITING THE GENERALITY OF THE FOREGOING, THE SOFTWARE IS PROVIDED
 * "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED. IN NO EVENT SHALL
 * SALESFORCE.COM HAVE ANY LIABILITY FOR ANY DAMAGES, INCLUDING BUT NOT LIMITED TO,
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, PUNITIVE, OR CONSEQUENTIAL DAMAGES, OR
 * DAMAGES BASED ON LOST PROFITS, DATA OR USE, IN CONNECTION WITH THE SOFTWARE,
 * HOWEVER CAUSED AND, WHETHER IN CONTRACT, TORT OR UNDER ANY OTHER THEORY OF
 * LIABILITY, WHETHER OR NOT YOU HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGES.
 */

#import <UIKit/UIKit.h>

@class SCServiceCloud;

/**
 The `SCCaseInterface` class is the main interface to the Case Management SDK.
 Use this class to configure and customize the Case Management interface.
 
 To get an instance of this class, use the `SCServiceCloud.cases` property
 on `+[SCServiceCloud sharedInstance]`.

 */
@interface SCCaseInterface : NSObject

/**
 The Salesforce unique name of the case list to be displayed.
 */
@property (nonatomic, copy) NSString *caseListName;
/**
 The name of the action used to create a case.
 */
@property (nonatomic, copy) NSString *caseCreateActionName;

/**
 Indicates whether or not the Cases portion of the Service Cloud SDK is enabled.
 */
@property (nonatomic, assign, getter=isEnabled) BOOL enabled __deprecated_msg("This property is no longer required and will be removed in a future release");

/**
 The duration (specified in seconds) after which the case metadata is deleted. The default value is 24 hours.
 */
@property (nonatomic, assign) NSTimeInterval caseMetadataCacheRetentionTimeInterval;

/**
 *  Determines whether session logs are sent for collection.
 *  Logs sent remotely do not collect personal information. Unique IDs are created for tying logs to sessions,
 *  and those IDs cannot be correlated back to specific users.
 *
 *  Default: `YES`
 */
@property (nonatomic) BOOL remoteLoggingEnabled;

@end
