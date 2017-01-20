//
//  GlobalConstants.h
//  empty-project
//
//  Created by Denys Golyshevskyi on 1/20/17.
//  Copyright © 2017 Scaletools UA. All rights reserved.
//

#ifndef GlobalConstants_h
#define GlobalConstants_h

#endif /* GlobalConstants_h */

// Main StoryBoard
#define ACTIVE_STORYBOARD [[NSBundle mainBundle].infoDictionary objectForKey:@"UIMainStoryboardFile"]

// DEVICE
#define IDIOM    UI_USER_INTERFACE_IDIOM()
#define IPAD     UIUserInterfaceIdiomPad

// PORTFOLIO
#define PORTFOLIO_BY_KEY @"portfolio_key"
#define PORTFOLIO_NAME @"portfolio_name"
#define PORTFOLIO_LINK @"portfolio_link"
#define PORTFOLIO_PASS_CODE @"portfolio_pass_code"

// FAST CODE
// NSLog(@"%@", NSStringFromSelector(_cmd));

// Pragma mark examples:
#pragma mark - Lifecycle -
#pragma mark - Сustom methods -
#pragma mark - Instance methods -

#pragma mark - UITableView datasource & delegate -
#pragma mark - UIViewController datasource & delegate -
#pragma mark - Click Event -
#pragma mark - Keyboard -
#pragma mark - Webservice delegate -
#pragma mark - Alertview Delegate -
#pragma mark - Segue -
#pragma mark - Scroll Delegate -
#pragma mark - MapView methods -
#pragma marks - Static methods -

// TODO: local URL's

//NSLog(@"%@", [[Singleton sharedSingleton] AUTORS_test]);

//    NSDictionary *dic = [[[Singleton sharedSingleton] AUTORS_test] objectAtIndex:0];
//    //NSLog(@"dic = %@", dic);
//    NSDictionary *settings = [dic valueForKey:@"settings"];
//    //NSLog(@"settings = %@", settings);
//    NSArray *exhibitions = [settings valueForKey:@"exhibitions"];
//    //NSLog(@"exhibitions = %@", exhibitions);
//    //NSLog(@"exhibitions count = %lu", (unsigned long)[exhibitions count]);
//    NSArray *FirstExhibitions = [exhibitions objectAtIndex:0];
//    //NSLog(@"FirstExhibitions = %@", FirstExhibitions);
//    //NSLog(@"FirstExhibitions count = %lu", (unsigned long)[FirstExhibitions count]);
//    NSDictionary *valueExhibitions = [FirstExhibitions objectAtIndex:0];
//NSLog(@"valueExhibitions = %@", valueExhibitions);
//    NSArray *picters = [valueExhibitions valueForKey:@"picters"];
//    //NSLog(@"picters = %@", picters);
//    NSDictionary *fistElement = [picters objectAtIndex:0];
//    NSLog(@"fistElement = %@", fistElement);

//    NSArray *picters = [[valueExhibitions valueForKey:@"picters"]allObjects];
//    //NSLog(@"picters = %@", picters);
//    // NSDictionary *fistElement = [picters objectAtIndex:0];
//    NSLog(@"fistElement = %@", [[picters objectAtIndex:1] valueForKey:@"picters_name"]);
//    NSLog(@"fistElement = %@", [[picters objectAtIndex:1] valueForKey:@"picture_image"]);
// определение размеров картинки
//    UIImage *img = [UIImage imageNamed:@"Helen Marten. Arsenale, Venice Biennale.png"];
//
//    CGFloat width = img.size.width;
//    CGFloat height = img.size.height;
//
//    NSLog(@"width = %f", width);
//    NSLog(@"height = %f", height);

// Set first title from the list of portfolios

//    // определение типа устройства
//    if ( IDIOM == IPAD ) {
//        /* do something specifically for iPad. */
//    } else {
//        /* do something specifically for iPhone or iPod touch. */
//    }

