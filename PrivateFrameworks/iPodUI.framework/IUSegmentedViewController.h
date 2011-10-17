/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UITransitionView, UINavigationBar, UISegmentedControl, <IUSegmentedViewControllerDelegate>, UIView, UIViewController, NSArray;

@interface IUSegmentedViewController : UIViewController  {
    <IUSegmentedViewControllerDelegate> *_delegate;
    NSArray *_viewControllers;
    NSArray *_pendingNonTransientViewControllers;
    unsigned int _selectedIndex;
    UITransitionView *_transitionView;
    UINavigationBar *_navigationBar;
    id _segmentedControl;
    int _segmentedControlAlignment;
    UIView *_accessoryView;
    UIView *_leftView;
    struct CGSize { 
        float width; 
        float height; 
    } _accessoryViewOffset;
    unsigned int _autoHidesSegmentedControl : 1;
    unsigned int _ownsNavigationBar : 1;
    unsigned int _viewControllersAreTransient : 1;
    unsigned int _editable : 1;
    unsigned int _editing : 1;
}

@property <IUSegmentedViewControllerDelegate> * delegate;
@property(retain) NSArray * viewControllers;
@property(retain) UIViewController * transientViewController;
@property UIViewController * selectedViewController;
@property unsigned int selectedIndex;
@property(retain) UINavigationBar * navigationBar;
@property(readonly) UISegmentedControl * segmentedControl;
@property BOOL autoHidesSegmentedControl;
@property BOOL editable;
@property int segmentedControlAlignment;
@property(retain) UIView * accessoryView;
@property struct CGSize { float x1; float x2; } accessoryViewOffset;
@property(retain) UIView * leftView;


- (void)setDelegate:(id)arg1;
- (id)segmentedControl;
- (void)setAccessoryView:(id)arg1;
- (BOOL)editable;
- (void)setEditable:(BOOL)arg1;
- (void)setTransientViewController:(id)arg1;
- (void)setSelectedIndex:(unsigned int)arg1;
- (unsigned int)selectedIndex;
- (id)transientViewController;
- (void)setSelectedViewController:(id)arg1;
- (id)selectedViewController;
- (void)setViewControllers:(id)arg1;
- (id)viewControllers;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)_canReloadView;
- (void)loadView;
- (void)viewDidLoad;
- (id)accessoryView;
- (id)leftView;
- (void)setLeftView:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (id)navigationBar;
- (id)delegate;
- (struct CGSize { float x1; float x2; })accessoryViewOffset;
- (int)segmentedControlAlignment;
- (void)_popTopViewController:(id)arg1;
- (BOOL)viewControllerEnabledAtIndex:(unsigned int)arg1;
- (void)setViewControllerEnabled:(BOOL)arg1 atIndex:(unsigned int)arg2;
- (BOOL)autoHidesSegmentedControl;
- (void)childNavigationController:(id)arg1 willNavigateToViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_updateFromSelectedSegmentedControlIndex;
- (void)_segmentedControlChanged:(id)arg1;
- (id)_newSegmentedControl;
- (void)setViewControllers:(id)arg1 transient:(BOOL)arg2;
- (void)setSelectedIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (id)_createDefaultNavigationBar;
- (void)_toggleEdit:(id)arg1;
- (void)_updateSegmentedControlVisibility;
- (void)_layoutAccessoryAndTransitionView;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_setNavigationControllerDelegate:(id)arg1;
- (void)_destroySegmentControl;
- (void)setAccessoryViewOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)reloadSegmentedControl;
- (void)reloadEnabledState;
- (void)setAutoHidesSegmentedControl:(BOOL)arg1;
- (void)setSegmentedControlAlignment:(int)arg1;
- (void)cancelEditing;
- (void)dealloc;

@end