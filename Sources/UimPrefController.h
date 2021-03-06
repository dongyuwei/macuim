/* -*- mode:objc; coding:utf-8; tab-width:8; c-basic-offset:2; indent-tabs-mode:nil -*- */
/*
  Copyright (c) 2003-2005 MacUIM contributors, All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions
  are met:

  1. Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
  2. Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in the
     documentation and/or other materials provided with the distribution.
  3. Neither the name of authors nor the names of its contributors
     may be used to endorse or promote products derived from this software
     without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ``AS IS'' AND
  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE
  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
  OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
  HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
  OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
  SUCH DAMAGE.
*/

#import <Cocoa/Cocoa.h>

#import <uim.h>
#import <uim-custom.h>

#import "UimCustom.h"
#import "CustomViewController.h"

@interface UimPrefController : NSObject <CustomViewControllerDataSourceProtocol, UimCustomModifiedProtocol>
{
  IBOutlet NSOutlineView *outlineView;
  IBOutlet NSButton *applyButton;
  IBOutlet NSButton *defaultButton;
  IBOutlet NSTableColumn *labelColumn;
  IBOutlet NSTableColumn *valueColumn;

  CustomViewController *customViewController;
  
  NSMutableArray *customGroups;
}

+ (UimPrefController *)sharedController;

- (CustomViewController *)customViewController;

- (IBAction)applyAction:(id)sender;
- (IBAction)defaultAction:(id)sender;

- (void)dialogDidEnd:(NSOpenPanel *)sheet
          returnCode:(int)returnCode
         contextInfo:(void *)contextInfo;
@end
