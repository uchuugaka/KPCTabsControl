//
//  KPCTabsControlDataSource.h
//  KPCTabsControl
//
//  Created by Cédric Foellmi on 28/10/14.
//  Copyright (c) 2014 Cédric Foellmi. All rights reserved.
//

#import <Foundation/Foundation.h>

@class KPCTabsControl;
@class KPCTabButton;

@protocol KPCTabsControlDataSource <NSObject>

- (NSUInteger)tabsControlNumberOfTabs:(KPCTabsControl *)tabControl;
- (id)tabsControl:(KPCTabsControl *)tabControl itemAtIndex:(NSUInteger)index;
- (NSString *)tabsControl:(KPCTabsControl *)tabControl titleForItem:(id)item;

@optional
- (NSMenu *)tabsControl:(KPCTabsControl *)tabControl menuForItem:(id)item;

- (BOOL)tabsControl:(KPCTabsControl *)tabControl canSelectItem:(id)item;
- (void)tabsControlDidChangeSelection:(NSNotification *)notification;

- (BOOL)tabsControl:(KPCTabsControl *)tabControl canReorderItem:(id)item;
- (void)tabsControl:(KPCTabsControl *)tabControl didReorderItems:(NSArray *)itemArray;

- (BOOL)tabsControl:(KPCTabsControl *)tabControl canEditItem:(id)item;
- (void)tabsControl:(KPCTabsControl *)tabControl setTitle:(NSString *)title forItem:(id)item;

- (void)tabsControl:(KPCTabsControl *)tabControl willDisplayButton:(KPCTabButton *)button forItem:(id)item;

@end


@protocol KPCTabsControlDelegate <NSControlTextEditingDelegate>
@end
