/* 
Copyright 2011 Hardcoded Software (http://www.hardcoded.net)

This software is licensed under the "BSD" License as described in the "LICENSE" file, 
which should be included with this package. The terms are also available at 
http://www.hardcoded.net/licenses/bsd_license
*/

#import <Cocoa/Cocoa.h>
#import <Python.h>
#import "HSGUIController2.h"
#import "PyColumns2.h"
#import "HSColumns.h" // for HSColumnDef

@interface HSColumns2 : HSGUIController2 {}
- (id)initWithPyRef:(PyObject *)aPyRef tableView:(NSTableView *)aTableView;
- (PyColumns2 *)model;
- (NSTableView *)view;
- (void)connectNotifications;
- (void)disconnectNotifications;
- (void)initializeColumns:(HSColumnDef *)columns;
- (void)restoreColumns;
- (void)setColumn:(NSString *)colname visible:(BOOL)visible;
@end