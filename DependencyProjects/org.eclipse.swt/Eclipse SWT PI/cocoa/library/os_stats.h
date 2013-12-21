/*******************************************************************************
 * Copyright (c) 2000, 2012 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *    IBM Corporation - initial API and implementation
 *******************************************************************************/

#ifdef NATIVE_STATS
extern int OS_nativeFunctionCount;
extern int OS_nativeFunctionCallCount[];
extern char* OS_nativeFunctionNames[];
#define OS_NATIVE_ENTER(env, that, func) OS_nativeFunctionCallCount[func]++;
#define OS_NATIVE_EXIT(env, that, func) 
#else
#ifndef OS_NATIVE_ENTER
#define OS_NATIVE_ENTER(env, that, func) 
#endif
#ifndef OS_NATIVE_EXIT
#define OS_NATIVE_EXIT(env, that, func) 
#endif
#endif

typedef enum {
	ATSFontActivateFromFileReference_FUNC,
	AcquireRootMenu_FUNC,
	CALLBACK_1NSTextAttachmentCell_1cellSize_FUNC,
	CALLBACK_1accessibilityHitTest_1_FUNC,
	CALLBACK_1attributedSubstringFromRange_1_FUNC,
	CALLBACK_1canDragRowsWithIndexes_1atPoint_1_FUNC,
	CALLBACK_1cellBaselineOffset_FUNC,
	CALLBACK_1cellSize_FUNC,
	CALLBACK_1cellSizeForBounds_1_FUNC,
	CALLBACK_1characterIndexForPoint_1_FUNC,
	CALLBACK_1columnAtPoint_1_FUNC,
	CALLBACK_1dragSelectionWithEvent_1offset_1slideBack_1_FUNC,
	CALLBACK_1draggedImage_1beganAt_1_FUNC,
	CALLBACK_1draggedImage_1endedAt_1operation_1_FUNC,
	CALLBACK_1drawBackgroundInClipRect_1_FUNC,
	CALLBACK_1drawImage_1withFrame_1inView_1_FUNC,
	CALLBACK_1drawInteriorWithFrame_1inView_1_FUNC,
	CALLBACK_1drawLabel_1inRect_1_FUNC,
	CALLBACK_1drawRect_1_FUNC,
	CALLBACK_1drawTitle_1withFrame_1inView_1_FUNC,
	CALLBACK_1drawViewBackgroundInRect_1_FUNC,
	CALLBACK_1drawWithExpansionFrame_1inView_1_FUNC,
	CALLBACK_1expansionFrameWithFrame_1inView_1_FUNC,
	CALLBACK_1firstRectForCharacterRange_1_FUNC,
	CALLBACK_1headerRectOfColumn_1_FUNC,
	CALLBACK_1highlightSelectionInClipRect_1_FUNC,
	CALLBACK_1hitTestForEvent_1inRect_1ofView_1_FUNC,
	CALLBACK_1hitTest_1_FUNC,
	CALLBACK_1imageRectForBounds_1_FUNC,
	CALLBACK_1markedRange_FUNC,
	CALLBACK_1scrollClipView_1toPoint_1_FUNC,
	CALLBACK_1selectedRange_FUNC,
	CALLBACK_1setFrameOrigin_1_FUNC,
	CALLBACK_1setFrameSize_1_FUNC,
	CALLBACK_1setFrame_1_FUNC,
	CALLBACK_1setMarkedText_1selectedRange_1_FUNC,
	CALLBACK_1setNeedsDisplayInRect_1_FUNC,
	CALLBACK_1shouldChangeTextInRange_1replacementString_1_FUNC,
	CALLBACK_1sizeOfLabel_1_FUNC,
	CALLBACK_1textView_1willChangeSelectionFromCharacterRange_1toCharacterRange_1_FUNC,
	CALLBACK_1titleRectForBounds_1_FUNC,
	CALLBACK_1view_1stringForToolTip_1point_1userData_1_FUNC,
	CALLBACK_1webView_1setFrame_1_FUNC,
	CFAttributedStringCreate_FUNC,
	CFDataGetBytePtr_FUNC,
	CFDataGetLength_FUNC,
	CFDictionaryAddValue_FUNC,
	CFDictionaryCreateMutable_FUNC,
	CFRange_1sizeof_FUNC,
	CFRelease_FUNC,
	CFRunLoopAddObserver_FUNC,
	CFRunLoopGetCurrent_FUNC,
	CFRunLoopObserverCreate_FUNC,
	CFRunLoopObserverInvalidate_FUNC,
	CFRunLoopRunInMode_FUNC,
	CFRunLoopStop_FUNC,
	CFStringCreateWithCharacters_FUNC,
	CFURLCreateFromFSRef_FUNC,
	CFURLCreateStringByAddingPercentEscapes_FUNC,
	CGAffineTransform_1sizeof_FUNC,
	CGBitmapContextCreate_FUNC,
	CGBitmapContextCreateImage_FUNC,
	CGBitmapContextGetData_FUNC,
	CGColorCreate_FUNC,
	CGColorRelease_FUNC,
	CGColorSpaceCreateDeviceRGB_FUNC,
	CGColorSpaceRelease_FUNC,
	CGContextAddPath_FUNC,
	CGContextBeginTransparencyLayerWithRect_FUNC,
	CGContextCopyPath_FUNC,
	CGContextCopyWindowContentsToRect_FUNC,
	CGContextDrawImage_FUNC,
	CGContextEndTransparencyLayer_FUNC,
	CGContextFillRect_FUNC,
	CGContextRelease_FUNC,
	CGContextReplacePathWithStrokedPath_FUNC,
	CGContextRestoreGState_FUNC,
	CGContextSaveGState_FUNC,
	CGContextScaleCTM_FUNC,
	CGContextSetBlendMode_FUNC,
	CGContextSetFillColor_FUNC,
	CGContextSetFillColorSpace_FUNC,
	CGContextSetLineCap_FUNC,
	CGContextSetLineDash_FUNC,
	CGContextSetLineJoin_FUNC,
	CGContextSetLineWidth_FUNC,
	CGContextSetMiterLimit_FUNC,
	CGContextSetShouldAntialias_FUNC,
	CGContextSetTextDrawingMode_FUNC,
	CGContextSetTextMatrix_FUNC,
	CGContextSetTextPosition_FUNC,
	CGContextStrokePath_FUNC,
	CGContextTranslateCTM_FUNC,
	CGDataProviderCreateWithData_FUNC,
	CGDataProviderRelease_FUNC,
	CGDisplayBaseAddress_FUNC,
	CGDisplayBitsPerPixel_FUNC,
	CGDisplayBitsPerSample_FUNC,
	CGDisplayBounds_FUNC,
	CGDisplayBytesPerRow_FUNC,
	CGDisplayCreateImage_FUNC,
	CGDisplayPixelsHigh_FUNC,
	CGDisplayPixelsWide_FUNC,
	CGEventCreateKeyboardEvent_FUNC,
	CGEventCreateMouseEvent_FUNC,
	CGEventCreateScrollWheelEvent_FUNC,
	CGEventGetIntegerValueField_FUNC,
	CGEventPost_FUNC,
	CGEventSourceCreate_FUNC,
	CGGetDisplaysWithRect_FUNC,
	CGImageCreate_FUNC,
	CGImageGetHeight_FUNC,
	CGImageGetWidth_FUNC,
	CGImageRelease_FUNC,
	CGPathAddCurveToPoint_FUNC,
	CGPathAddLineToPoint_FUNC,
	CGPathAddRect_FUNC,
	CGPathApply_FUNC,
	CGPathCloseSubpath_FUNC,
	CGPathCreateCopy_FUNC,
	CGPathCreateMutable_FUNC,
	CGPathElement_1sizeof_FUNC,
	CGPathMoveToPoint_FUNC,
	CGPathRelease_FUNC,
	CGPoint_1sizeof_FUNC,
	CGPostKeyboardEvent_FUNC,
	CGRect_1sizeof_FUNC,
	CGSetLocalEventsFilterDuringSuppressionState_FUNC,
	CGSetLocalEventsSuppressionInterval_FUNC,
	CGSize_1sizeof_FUNC,
	CGWarpMouseCursorPosition_FUNC,
	CPSSetProcessName_FUNC,
	CTFontGetAscent_FUNC,
	CTFontGetDescent_FUNC,
	CTFontGetLeading_FUNC,
	CTLineCreateWithAttributedString_FUNC,
	CTLineDraw_FUNC,
	CTLineGetTypographicBounds_FUNC,
	CTParagraphStyleCreate_FUNC,
	CTParagraphStyleSetting_1sizeof_FUNC,
	CTTypesetterCreateLine_FUNC,
	CTTypesetterCreateWithAttributedString_FUNC,
	CTTypesetterSuggestLineBreak_FUNC,
	CancelMenuTracking_FUNC,
	CloseRgn_FUNC,
	CopyRgn_FUNC,
	DeleteGlobalRef_FUNC,
	DeleteMenuItem_FUNC,
	DiffRgn_FUNC,
	DisposeRgn_FUNC,
	EmptyRgn_FUNC,
	FSPathMakeRef_FUNC,
	FindWindow_FUNC,
	Gestalt_FUNC,
	GetCurrentEventButtonState_FUNC,
	GetCurrentProcess_FUNC,
	GetDblTime_FUNC,
	GetIconRefFromTypeInfo_FUNC,
	GetIndMenuItemWithCommandID_FUNC,
	GetRegionBounds_FUNC,
	GetSystemUIMode_FUNC,
	GetThemeMetric_FUNC,
	HIThemeDrawFocusRect_FUNC,
	HIWindowGetCGWindowID_FUNC,
	JNIGetObject_FUNC,
	JSEvaluateScript_FUNC,
	JSStringCreateWithUTF8CString_FUNC,
	JSStringRelease_FUNC,
	LMGetKbdType_FUNC,
	LSGetApplicationForInfo_FUNC,
	LineTo_FUNC,
	MoveTo_FUNC,
	NSAccessibilityActionDescription_FUNC,
	NSAccessibilityAttributedStringForRangeParameterizedAttribute_FUNC,
	NSAccessibilityBackgroundColorTextAttribute_FUNC,
	NSAccessibilityBoundsForRangeParameterizedAttribute_FUNC,
	NSAccessibilityButtonRole_FUNC,
	NSAccessibilityCellForColumnAndRowParameterizedAttribute_FUNC,
	NSAccessibilityCellRole_FUNC,
	NSAccessibilityCheckBoxRole_FUNC,
	NSAccessibilityChildrenAttribute_FUNC,
	NSAccessibilityColorWellRole_FUNC,
	NSAccessibilityColumnIndexRangeAttribute_FUNC,
	NSAccessibilityColumnRole_FUNC,
	NSAccessibilityColumnsAttribute_FUNC,
	NSAccessibilityComboBoxRole_FUNC,
	NSAccessibilityConfirmAction_FUNC,
	NSAccessibilityContentsAttribute_FUNC,
	NSAccessibilityDescriptionAttribute_FUNC,
	NSAccessibilityDialogSubrole_FUNC,
	NSAccessibilityEnabledAttribute_FUNC,
	NSAccessibilityExpandedAttribute_FUNC,
	NSAccessibilityFloatingWindowSubrole_FUNC,
	NSAccessibilityFocusedAttribute_FUNC,
	NSAccessibilityFocusedUIElementChangedNotification_FUNC,
	NSAccessibilityFocusedWindowChangedNotification_FUNC,
	NSAccessibilityFontFamilyKey_FUNC,
	NSAccessibilityFontNameKey_FUNC,
	NSAccessibilityFontSizeKey_FUNC,
	NSAccessibilityFontTextAttribute_FUNC,
	NSAccessibilityForegroundColorTextAttribute_FUNC,
	NSAccessibilityGridRole_FUNC,
	NSAccessibilityGroupRole_FUNC,
	NSAccessibilityHeaderAttribute_FUNC,
	NSAccessibilityHelpAttribute_FUNC,
	NSAccessibilityHelpTagRole_FUNC,
	NSAccessibilityHorizontalOrientationValue_FUNC,
	NSAccessibilityHorizontalScrollBarAttribute_FUNC,
	NSAccessibilityImageRole_FUNC,
	NSAccessibilityIncrementorRole_FUNC,
	NSAccessibilityIndexAttribute_FUNC,
	NSAccessibilityInsertionPointLineNumberAttribute_FUNC,
	NSAccessibilityLabelValueAttribute_FUNC,
	NSAccessibilityLineForIndexParameterizedAttribute_FUNC,
	NSAccessibilityLinkRole_FUNC,
	NSAccessibilityLinkTextAttribute_FUNC,
	NSAccessibilityLinkedUIElementsAttribute_FUNC,
	NSAccessibilityListRole_FUNC,
	NSAccessibilityMaxValueAttribute_FUNC,
	NSAccessibilityMenuBarRole_FUNC,
	NSAccessibilityMenuButtonRole_FUNC,
	NSAccessibilityMenuItemRole_FUNC,
	NSAccessibilityMenuRole_FUNC,
	NSAccessibilityMinValueAttribute_FUNC,
	NSAccessibilityMisspelledTextAttribute_FUNC,
	NSAccessibilityMovedNotification_FUNC,
	NSAccessibilityNextContentsAttribute_FUNC,
	NSAccessibilityNumberOfCharactersAttribute_FUNC,
	NSAccessibilityOrientationAttribute_FUNC,
	NSAccessibilityOutlineRole_FUNC,
	NSAccessibilityOutlineRowSubrole_FUNC,
	NSAccessibilityParentAttribute_FUNC,
	NSAccessibilityPopUpButtonRole_FUNC,
	NSAccessibilityPositionAttribute_FUNC,
	NSAccessibilityPostNotification_FUNC,
	NSAccessibilityPressAction_FUNC,
	NSAccessibilityPreviousContentsAttribute_FUNC,
	NSAccessibilityProgressIndicatorRole_FUNC,
	NSAccessibilityRTFForRangeParameterizedAttribute_FUNC,
	NSAccessibilityRadioButtonRole_FUNC,
	NSAccessibilityRadioGroupRole_FUNC,
	NSAccessibilityRaiseBadArgumentException_FUNC,
	NSAccessibilityRangeForIndexParameterizedAttribute_FUNC,
	NSAccessibilityRangeForLineParameterizedAttribute_FUNC,
	NSAccessibilityRangeForPositionParameterizedAttribute_FUNC,
	NSAccessibilityResizedNotification_FUNC,
	NSAccessibilityRoleAttribute_FUNC,
	NSAccessibilityRoleDescription_FUNC,
	NSAccessibilityRoleDescriptionAttribute_FUNC,
	NSAccessibilityRoleDescriptionForUIElement_FUNC,
	NSAccessibilityRowCountChangedNotification_FUNC,
	NSAccessibilityRowIndexRangeAttribute_FUNC,
	NSAccessibilityRowRole_FUNC,
	NSAccessibilityRowsAttribute_FUNC,
	NSAccessibilityScrollAreaRole_FUNC,
	NSAccessibilityScrollBarRole_FUNC,
	NSAccessibilitySelectedAttribute_FUNC,
	NSAccessibilitySelectedChildrenAttribute_FUNC,
	NSAccessibilitySelectedChildrenChangedNotification_FUNC,
	NSAccessibilitySelectedColumnsAttribute_FUNC,
	NSAccessibilitySelectedRowsAttribute_FUNC,
	NSAccessibilitySelectedRowsChangedNotification_FUNC,
	NSAccessibilitySelectedTextAttribute_FUNC,
	NSAccessibilitySelectedTextChangedNotification_FUNC,
	NSAccessibilitySelectedTextRangeAttribute_FUNC,
	NSAccessibilitySelectedTextRangesAttribute_FUNC,
	NSAccessibilityServesAsTitleForUIElementsAttribute_FUNC,
	NSAccessibilityShowMenuAction_FUNC,
	NSAccessibilitySizeAttribute_FUNC,
	NSAccessibilitySliderRole_FUNC,
	NSAccessibilitySortButtonRole_FUNC,
	NSAccessibilitySplitterRole_FUNC,
	NSAccessibilityStandardWindowSubrole_FUNC,
	NSAccessibilityStaticTextRole_FUNC,
	NSAccessibilityStrikethroughColorTextAttribute_FUNC,
	NSAccessibilityStrikethroughTextAttribute_FUNC,
	NSAccessibilityStringForRangeParameterizedAttribute_FUNC,
	NSAccessibilityStyleRangeForIndexParameterizedAttribute_FUNC,
	NSAccessibilitySubroleAttribute_FUNC,
	NSAccessibilitySuperscriptTextAttribute_FUNC,
	NSAccessibilitySystemDialogSubrole_FUNC,
	NSAccessibilityTabGroupRole_FUNC,
	NSAccessibilityTableRole_FUNC,
	NSAccessibilityTableRowSubrole_FUNC,
	NSAccessibilityTabsAttribute_FUNC,
	NSAccessibilityTextAreaRole_FUNC,
	NSAccessibilityTextFieldRole_FUNC,
	NSAccessibilityTextLinkSubrole_FUNC,
	NSAccessibilityTitleAttribute_FUNC,
	NSAccessibilityTitleChangedNotification_FUNC,
	NSAccessibilityTitleUIElementAttribute_FUNC,
	NSAccessibilityToolbarRole_FUNC,
	NSAccessibilityTopLevelUIElementAttribute_FUNC,
	NSAccessibilityURLAttribute_FUNC,
	NSAccessibilityUnderlineColorTextAttribute_FUNC,
	NSAccessibilityUnderlineTextAttribute_FUNC,
	NSAccessibilityUnignoredAncestor_FUNC,
	NSAccessibilityUnignoredChildren_FUNC,
	NSAccessibilityUnignoredChildrenForOnlyChild_FUNC,
	NSAccessibilityUnignoredDescendant_FUNC,
	NSAccessibilityUnknownRole_FUNC,
	NSAccessibilityUnknownSubrole_FUNC,
	NSAccessibilityValueAttribute_FUNC,
	NSAccessibilityValueChangedNotification_FUNC,
	NSAccessibilityValueDescriptionAttribute_FUNC,
	NSAccessibilityValueIndicatorRole_FUNC,
	NSAccessibilityVerticalOrientationValue_FUNC,
	NSAccessibilityVerticalScrollBarAttribute_FUNC,
	NSAccessibilityVisibleCharacterRangeAttribute_FUNC,
	NSAccessibilityVisibleChildrenAttribute_FUNC,
	NSAccessibilityVisibleColumnsAttribute_FUNC,
	NSAccessibilityVisibleNameKey_FUNC,
	NSAccessibilityVisibleRowsAttribute_FUNC,
	NSAccessibilityWindowAttribute_FUNC,
	NSAccessibilityWindowRole_FUNC,
	NSAddImage_FUNC,
	NSAffineTransformStruct_1sizeof_FUNC,
	NSApplicationDidChangeScreenParametersNotification_FUNC,
	NSAttachmentAttributeName_FUNC,
	NSBackgroundColorAttributeName_FUNC,
	NSBaselineOffsetAttributeName_FUNC,
	NSBeep_FUNC,
	NSBitsPerPixelFromDepth_FUNC,
	NSCalibratedRGBColorSpace_FUNC,
	NSCopyBits_FUNC,
	NSCountWindows_FUNC,
	NSCursorAttributeName_FUNC,
	NSDefaultRunLoopMode_FUNC,
	NSDeviceRGBColorSpace_FUNC,
	NSDeviceResolution_FUNC,
	NSDragPboard_FUNC,
	NSEqualRects_FUNC,
	NSErrorFailingURLStringKey_FUNC,
	NSEventTrackingRunLoopMode_FUNC,
	NSFileTypeForHFSTypeCode_FUNC,
	NSFilenamesPboardType_FUNC,
	NSFontAttributeName_FUNC,
	NSForegroundColorAttributeName_FUNC,
	NSGetSizeAndAlignment_FUNC,
	NSHTMLPboardType_FUNC,
	NSIntersectionRect_FUNC,
	NSLigatureAttributeName_FUNC,
	NSLinkAttributeName_FUNC,
	NSLocaleLanguageCode_FUNC,
	NSModalPanelRunLoopMode_FUNC,
	NSNumberOfColorComponents_FUNC,
	NSObliquenessAttributeName_FUNC,
	NSOutlineViewColumnDidMoveNotification_FUNC,
	NSParagraphStyleAttributeName_FUNC,
	NSPointInRect_FUNC,
	NSPoint_1sizeof_FUNC,
	NSPrintAllPages_FUNC,
	NSPrintCopies_FUNC,
	NSPrintFirstPage_FUNC,
	NSPrintJobDisposition_FUNC,
	NSPrintLastPage_FUNC,
	NSPrintMustCollate_FUNC,
	NSPrintOrientation_FUNC,
	NSPrintPreviewJob_FUNC,
	NSPrintSaveJob_FUNC,
	NSPrintSavePath_FUNC,
	NSPrintScalingFactor_FUNC,
	NSPrintSpoolJob_FUNC,
	NSRTFPboardType_FUNC,
	NSRange_1sizeof_FUNC,
	NSRectFillUsingOperation_FUNC,
	NSRect_1sizeof_FUNC,
	NSSearchPathForDirectoriesInDomains_FUNC,
	NSSize_1sizeof_FUNC,
	NSSpellingStateAttributeName_FUNC,
	NSStrikethroughColorAttributeName_FUNC,
	NSStrikethroughStyleAttributeName_FUNC,
	NSStringPboardType_FUNC,
	NSStrokeWidthAttributeName_FUNC,
	NSSystemColorsDidChangeNotification_FUNC,
	NSTIFFPboardType_FUNC,
	NSTableViewColumnDidMoveNotification_FUNC,
	NSTemporaryDirectory_FUNC,
	NSToolbarCustomizeToolbarItemIdentifier_FUNC,
	NSToolbarDidRemoveItemNotification_FUNC,
	NSToolbarFlexibleSpaceItemIdentifier_FUNC,
	NSToolbarPrintItemIdentifier_FUNC,
	NSToolbarSeparatorItemIdentifier_FUNC,
	NSToolbarShowColorsItemIdentifier_FUNC,
	NSToolbarShowFontsItemIdentifier_FUNC,
	NSToolbarSpaceItemIdentifier_FUNC,
	NSToolbarWillAddItemNotification_FUNC,
	NSURLPboardType_FUNC,
	NSUnderlineColorAttributeName_FUNC,
	NSUnderlineStyleAttributeName_FUNC,
	NSViewGlobalFrameDidChangeNotification_FUNC,
	NSWindowDidBecomeKeyNotification_FUNC,
	NSWindowDidDeminiaturizeNotification_FUNC,
	NSWindowDidMiniaturizeNotification_FUNC,
	NSWindowDidMoveNotification_FUNC,
	NSWindowDidResignKeyNotification_FUNC,
	NSWindowDidResizeNotification_FUNC,
	NSWindowList_FUNC,
	NSWindowWillCloseNotification_FUNC,
	NewGlobalRef_FUNC,
	NewRgn_FUNC,
	OffsetRgn_FUNC,
	OpenRgn_FUNC,
	PMGetDuplex_FUNC,
	PMPrinterGetIndexedPrinterResolution_FUNC,
	PMPrinterGetOutputResolution_FUNC,
	PMPrinterGetPrinterResolutionCount_FUNC,
	PMSessionGetCurrentPrinter_FUNC,
	PMSessionGetDestinationType_FUNC,
	PMSetDuplex_FUNC,
	PtInRgn_FUNC,
	QDRegionToRects_FUNC,
	RectInRgn_FUNC,
	RectRgn_FUNC,
	SecPolicySearchCopyNext_FUNC,
	SecPolicySearchCreate_FUNC,
	SecTrustCreateWithCertificates_FUNC,
	SectRgn_FUNC,
	SetFrontProcess_FUNC,
	SetRect_FUNC,
	SetSystemUIMode_FUNC,
	SetThemeCursor_FUNC,
	TISCopyCurrentKeyboardInputSource_FUNC,
	TISGetInputSourceProperty_FUNC,
	TransformProcessType_FUNC,
	UCKeyTranslate_FUNC,
	UTTypeEqual_FUNC,
	UnionRgn_FUNC,
	_1_1BIG_1ENDIAN_1_1_FUNC,
	call_FUNC,
	class_1addIvar_FUNC,
	class_1addMethod_FUNC,
	class_1addProtocol_FUNC,
	class_1createInstance_FUNC,
	class_1getClassMethod_FUNC,
	class_1getInstanceMethod_FUNC,
	class_1getMethodImplementation_FUNC,
	class_1getName_FUNC,
	class_1getSuperclass_FUNC,
	getpid_FUNC,
	instrumentObjcMessageSends_FUNC,
	isFlipped_1CALLBACK_FUNC,
	kCFAllocatorDefault_FUNC,
	kCFRunLoopCommonModes_FUNC,
	kCFTypeDictionaryKeyCallBacks_FUNC,
	kCFTypeDictionaryValueCallBacks_FUNC,
	kCTFontAttributeName_FUNC,
	kCTForegroundColorAttributeName_FUNC,
	kCTParagraphStyleAttributeName_FUNC,
	kTISPropertyUnicodeKeyLayoutData_FUNC,
	kUTTypeFileURL_FUNC,
	kUTTypeURL_FUNC,
#ifndef JNI64
	memmove__ILorg_eclipse_swt_internal_cocoa_CFRange_2I_FUNC,
#else
	memmove__JLorg_eclipse_swt_internal_cocoa_CFRange_2J_FUNC,
#endif
#ifndef JNI64
	memmove__ILorg_eclipse_swt_internal_cocoa_CGAffineTransform_2I_FUNC,
#else
	memmove__JLorg_eclipse_swt_internal_cocoa_CGAffineTransform_2J_FUNC,
#endif
#ifndef JNI64
	memmove__ILorg_eclipse_swt_internal_cocoa_CGPathElement_2I_FUNC,
#else
	memmove__JLorg_eclipse_swt_internal_cocoa_CGPathElement_2J_FUNC,
#endif
#ifndef JNI64
	memmove__ILorg_eclipse_swt_internal_cocoa_CGPoint_2I_FUNC,
#else
	memmove__JLorg_eclipse_swt_internal_cocoa_CGPoint_2J_FUNC,
#endif
#ifndef JNI64
	memmove__ILorg_eclipse_swt_internal_cocoa_CGRect_2I_FUNC,
#else
	memmove__JLorg_eclipse_swt_internal_cocoa_CGRect_2J_FUNC,
#endif
#ifndef JNI64
	memmove__ILorg_eclipse_swt_internal_cocoa_CGSize_2I_FUNC,
#else
	memmove__JLorg_eclipse_swt_internal_cocoa_CGSize_2J_FUNC,
#endif
#ifndef JNI64
	memmove__ILorg_eclipse_swt_internal_cocoa_CTParagraphStyleSetting_2I_FUNC,
#else
	memmove__JLorg_eclipse_swt_internal_cocoa_CTParagraphStyleSetting_2J_FUNC,
#endif
#ifndef JNI64
	memmove__ILorg_eclipse_swt_internal_cocoa_NSAffineTransformStruct_2I_FUNC,
#else
	memmove__JLorg_eclipse_swt_internal_cocoa_NSAffineTransformStruct_2J_FUNC,
#endif
#ifndef JNI64
	memmove__ILorg_eclipse_swt_internal_cocoa_NSPoint_2I_FUNC,
#else
	memmove__JLorg_eclipse_swt_internal_cocoa_NSPoint_2J_FUNC,
#endif
#ifndef JNI64
	memmove__ILorg_eclipse_swt_internal_cocoa_NSRange_2I_FUNC,
#else
	memmove__JLorg_eclipse_swt_internal_cocoa_NSRange_2J_FUNC,
#endif
#ifndef JNI64
	memmove__ILorg_eclipse_swt_internal_cocoa_NSRect_2I_FUNC,
#else
	memmove__JLorg_eclipse_swt_internal_cocoa_NSRect_2J_FUNC,
#endif
#ifndef JNI64
	memmove__ILorg_eclipse_swt_internal_cocoa_NSSize_2I_FUNC,
#else
	memmove__JLorg_eclipse_swt_internal_cocoa_NSSize_2J_FUNC,
#endif
#ifndef JNI64
	memmove__Lorg_eclipse_swt_internal_cocoa_CFRange_2II_FUNC,
#else
	memmove__Lorg_eclipse_swt_internal_cocoa_CFRange_2JJ_FUNC,
#endif
#ifndef JNI64
	memmove__Lorg_eclipse_swt_internal_cocoa_CGAffineTransform_2II_FUNC,
#else
	memmove__Lorg_eclipse_swt_internal_cocoa_CGAffineTransform_2JJ_FUNC,
#endif
#ifndef JNI64
	memmove__Lorg_eclipse_swt_internal_cocoa_CGPathElement_2II_FUNC,
#else
	memmove__Lorg_eclipse_swt_internal_cocoa_CGPathElement_2JJ_FUNC,
#endif
#ifndef JNI64
	memmove__Lorg_eclipse_swt_internal_cocoa_CGPoint_2II_FUNC,
#else
	memmove__Lorg_eclipse_swt_internal_cocoa_CGPoint_2JJ_FUNC,
#endif
#ifndef JNI64
	memmove__Lorg_eclipse_swt_internal_cocoa_CGRect_2II_FUNC,
#else
	memmove__Lorg_eclipse_swt_internal_cocoa_CGRect_2JJ_FUNC,
#endif
#ifndef JNI64
	memmove__Lorg_eclipse_swt_internal_cocoa_CGSize_2II_FUNC,
#else
	memmove__Lorg_eclipse_swt_internal_cocoa_CGSize_2JJ_FUNC,
#endif
#ifndef JNI64
	memmove__Lorg_eclipse_swt_internal_cocoa_CTParagraphStyleSetting_2II_FUNC,
#else
	memmove__Lorg_eclipse_swt_internal_cocoa_CTParagraphStyleSetting_2JJ_FUNC,
#endif
#ifndef JNI64
	memmove__Lorg_eclipse_swt_internal_cocoa_NSAffineTransformStruct_2II_FUNC,
#else
	memmove__Lorg_eclipse_swt_internal_cocoa_NSAffineTransformStruct_2JJ_FUNC,
#endif
#ifndef JNI64
	memmove__Lorg_eclipse_swt_internal_cocoa_NSPoint_2II_FUNC,
#else
	memmove__Lorg_eclipse_swt_internal_cocoa_NSPoint_2JJ_FUNC,
#endif
#ifndef JNI64
	memmove__Lorg_eclipse_swt_internal_cocoa_NSRange_2II_FUNC,
#else
	memmove__Lorg_eclipse_swt_internal_cocoa_NSRange_2JJ_FUNC,
#endif
#ifndef JNI64
	memmove__Lorg_eclipse_swt_internal_cocoa_NSRect_2II_FUNC,
#else
	memmove__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJ_FUNC,
#endif
#ifndef JNI64
	memmove__Lorg_eclipse_swt_internal_cocoa_NSSize_2II_FUNC,
#else
	memmove__Lorg_eclipse_swt_internal_cocoa_NSSize_2JJ_FUNC,
#endif
	method_1setImplementation_FUNC,
	objc_1allocateClassPair_FUNC,
	objc_1disposeClassPair_FUNC,
	objc_1getClass_FUNC,
	objc_1getMetaClass_FUNC,
	objc_1getProtocol_FUNC,
	objc_1lookUpClass_FUNC,
#ifndef JNI64
	objc_1msgSend__II_FUNC,
#else
	objc_1msgSend__JJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IID_FUNC,
#else
	objc_1msgSend__JJD_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIDIIIZ_FUNC,
#else
	objc_1msgSend__JJDJJJZ_FUNC,
#endif
	objc_1msgSend__IIF_FUNC,
#ifndef JNI64
	objc_1msgSend__IIFF_FUNC,
#else
	objc_1msgSend__JJDD_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIFFFF_FUNC,
#else
	objc_1msgSend__JJDDDD_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIFI_FUNC,
#else
	objc_1msgSend__JJDJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__III_FUNC,
#else
	objc_1msgSend__JJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIIF_FUNC,
#else
	objc_1msgSend__JJJD_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIII_FUNC,
#else
	objc_1msgSend__JJJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIIIDI_FUNC,
#else
	objc_1msgSend__JJJJDJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIIII_FUNC,
#else
	objc_1msgSend__JJJJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIIIIF_FUNC,
#else
	objc_1msgSend__JJJJJD_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIIIII_FUNC,
#else
	objc_1msgSend__JJJJJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIIIIII_FUNC,
#else
	objc_1msgSend__JJJJJJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIIIIIII_FUNC,
#else
	objc_1msgSend__JJJJJJJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIIIIIIII_FUNC,
#else
	objc_1msgSend__JJJJJJJJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIIIIIIZZIII_FUNC,
#else
	objc_1msgSend__JJJJJJJZZJJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIIIIIIZZIIII_FUNC,
#else
	objc_1msgSend__JJJJJJJZZJJJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIIIIZ_FUNC,
#else
	objc_1msgSend__JJJJJZ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIIILorg_eclipse_swt_internal_cocoa_NSRange_2_FUNC,
#else
	objc_1msgSend__JJJJLorg_eclipse_swt_internal_cocoa_NSRange_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIIIZ_FUNC,
#else
	objc_1msgSend__JJJJZ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIILorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#else
	objc_1msgSend__JJJLorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIILorg_eclipse_swt_internal_cocoa_NSPoint_2I_FUNC,
#else
	objc_1msgSend__JJJLorg_eclipse_swt_internal_cocoa_NSPoint_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIILorg_eclipse_swt_internal_cocoa_NSPoint_2IDIIIII_FUNC,
#else
	objc_1msgSend__JJJLorg_eclipse_swt_internal_cocoa_NSPoint_2JDJJJJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIILorg_eclipse_swt_internal_cocoa_NSPoint_2IDIISII_FUNC,
#else
	objc_1msgSend__JJJLorg_eclipse_swt_internal_cocoa_NSPoint_2JDJJSJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIILorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSSize_2IIIZ_FUNC,
#else
	objc_1msgSend__JJJLorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSSize_2JJJZ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIILorg_eclipse_swt_internal_cocoa_NSRange_2_FUNC,
#else
	objc_1msgSend__JJJLorg_eclipse_swt_internal_cocoa_NSRange_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIILorg_eclipse_swt_internal_cocoa_NSRect_2I_FUNC,
#else
	objc_1msgSend__JJJLorg_eclipse_swt_internal_cocoa_NSRect_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIIZ_FUNC,
#else
	objc_1msgSend__JJJZ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSAffineTransformStruct_2_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSAffineTransformStruct_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2FFF_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2DDD_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2FFFZ_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2DDDZ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2I_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2I_3F_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2J_3D_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2I_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSRect_2IF_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSRect_2JD_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRange_2_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRange_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRange_2I_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRange_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRange_2IIII_3B_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRange_2JJJJ_3B_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRange_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRange_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRange_2Lorg_eclipse_swt_internal_cocoa_NSRange_2I_3I_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRange_2Lorg_eclipse_swt_internal_cocoa_NSRange_2J_3J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2F_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2D_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2FF_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2DD_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2I_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2II_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2JJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2III_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2JJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2IIZ_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2JJZ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2IIZI_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2JJZJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2IZI_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2JZJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_NSRange_2Lorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_NSRange_2Lorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_NSRect_2IF_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_NSRect_2JD_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2Z_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2Z_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2ZZ_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSRect_2ZZ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSSize_2_FUNC,
#else
	objc_1msgSend__JJLorg_eclipse_swt_internal_cocoa_NSSize_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIZ_FUNC,
#else
	objc_1msgSend__JJZ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIZI_FUNC,
#else
	objc_1msgSend__JJZJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__IIZLorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#else
	objc_1msgSend__JJZLorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__II_3B_FUNC,
#else
	objc_1msgSend__JJ_3B_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__II_3BI_FUNC,
#else
	objc_1msgSend__JJ_3BJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__II_3C_FUNC,
#else
	objc_1msgSend__JJ_3C_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__II_3CI_FUNC,
#else
	objc_1msgSend__JJ_3CJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__II_3CLorg_eclipse_swt_internal_cocoa_NSRange_2_FUNC,
#else
	objc_1msgSend__JJ_3CLorg_eclipse_swt_internal_cocoa_NSRange_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__II_3F_FUNC,
#else
	objc_1msgSend__JJ_3D_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__II_3FIF_FUNC,
#else
	objc_1msgSend__JJ_3DJD_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__II_3I_FUNC,
#else
	objc_1msgSend__JJ_3J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__II_3II_FUNC,
#else
	objc_1msgSend__JJ_3II_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend__II_3III_FUNC,
#else
	objc_1msgSend__JJ_3JII_FUNC,
#endif
	objc_1msgSend__JJI_FUNC,
	objc_1msgSend__JJ_3I_FUNC,
	objc_1msgSend__JJ_3JJJ_FUNC,
#ifndef JNI64
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2I_FUNC,
#else
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2II_FUNC,
#else
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2III_FUNC,
#else
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2IIIII_FUNC,
#else
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJJJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2IIIIZ_FUNC,
#else
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJJJZ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2IILorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#else
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJLorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2IILorg_eclipse_swt_internal_cocoa_NSPoint_2I_FUNC,
#else
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJLorg_eclipse_swt_internal_cocoa_NSPoint_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2IILorg_eclipse_swt_internal_cocoa_NSRect_2I_FUNC,
#else
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJLorg_eclipse_swt_internal_cocoa_NSRect_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2IIZ_FUNC,
#else
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJZ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2ILorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#else
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JLorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2ILorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#else
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JLorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2ILorg_eclipse_swt_internal_cocoa_NSRect_2I_FUNC,
#else
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JLorg_eclipse_swt_internal_cocoa_NSRect_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2ILorg_eclipse_swt_internal_cocoa_NSSize_2_FUNC,
#else
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JLorg_eclipse_swt_internal_cocoa_NSSize_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2IZ_FUNC,
#else
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JZ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2IZLorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#else
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JZLorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper_1bool__Lorg_eclipse_swt_internal_cocoa_objc_1super_2IILorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#else
	objc_1msgSendSuper_1bool__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJLorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper_1bool__Lorg_eclipse_swt_internal_cocoa_objc_1super_2ILorg_eclipse_swt_internal_cocoa_NSRange_2I_FUNC,
#else
	objc_1msgSendSuper_1bool__Lorg_eclipse_swt_internal_cocoa_objc_1super_2JLorg_eclipse_swt_internal_cocoa_NSRange_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2II_FUNC,
#else
	objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2IILorg_eclipse_swt_internal_cocoa_NSRect_2I_FUNC,
#else
	objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2JJLorg_eclipse_swt_internal_cocoa_NSRect_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2ILorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#else
	objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2JLorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2ILorg_eclipse_swt_internal_cocoa_NSRect_2I_FUNC,
#else
	objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2JLorg_eclipse_swt_internal_cocoa_NSRect_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2I_FUNC,
#else
	objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2ILorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#else
	objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2JLorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2IZ_FUNC,
#else
	objc_1msgSendSuper_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2Lorg_eclipse_swt_internal_cocoa_objc_1super_2JZ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1bool__II_FUNC,
#else
	objc_1msgSend_1bool__JJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1bool__III_FUNC,
#else
	objc_1msgSend_1bool__JJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1bool__IIII_FUNC,
#else
	objc_1msgSend_1bool__JJJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1bool__IIIII_FUNC,
#else
	objc_1msgSend_1bool__JJJJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1bool__IIIIII_FUNC,
#else
	objc_1msgSend_1bool__JJJJJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1bool__IIIIIII_FUNC,
#else
	objc_1msgSend_1bool__JJJJJJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1bool__IIILorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#else
	objc_1msgSend_1bool__JJJLorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1bool__IIILorg_eclipse_swt_internal_cocoa_NSSize_2Z_FUNC,
#else
	objc_1msgSend_1bool__JJJLorg_eclipse_swt_internal_cocoa_NSSize_2Z_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1bool__IILorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#else
	objc_1msgSend_1bool__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1bool__IILorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#else
	objc_1msgSend_1bool__JJLorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1bool__IILorg_eclipse_swt_internal_cocoa_NSRange_2I_FUNC,
#else
	objc_1msgSend_1bool__JJLorg_eclipse_swt_internal_cocoa_NSRange_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1bool__IILorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#else
	objc_1msgSend_1bool__JJLorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1bool__IIS_FUNC,
#else
	objc_1msgSend_1bool__JJS_FUNC,
#endif
	objc_1msgSend_1floatret_FUNC,
#ifndef JNI64
	objc_1msgSend_1fpret__II_FUNC,
#else
	objc_1msgSend_1fpret__JJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1fpret__III_FUNC,
#else
	objc_1msgSend_1fpret__JJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1fpret__IIII_FUNC,
#else
	objc_1msgSend_1fpret__JJJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSAffineTransformStruct_2II_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSAffineTransformStruct_2JJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2II_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2JJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2III_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2JJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2IILorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2JJLorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2IILorg_eclipse_swt_internal_cocoa_NSPoint_2I_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2JJLorg_eclipse_swt_internal_cocoa_NSPoint_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRange_2II_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRange_2JJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRange_2III_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRange_2JJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRange_2IILorg_eclipse_swt_internal_cocoa_NSRange_2I_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRange_2JJLorg_eclipse_swt_internal_cocoa_NSRange_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRange_2IILorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRange_2JJLorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2II_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2III_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2IIII_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2IIIIZ_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJJJZ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2IIILorg_eclipse_swt_internal_cocoa_NSRect_2I_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJJLorg_eclipse_swt_internal_cocoa_NSRect_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2IILorg_eclipse_swt_internal_cocoa_NSRange_2I_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJLorg_eclipse_swt_internal_cocoa_NSRange_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2IILorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJLorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2IILorg_eclipse_swt_internal_cocoa_NSRect_2I_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJLorg_eclipse_swt_internal_cocoa_NSRect_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2IILorg_eclipse_swt_internal_cocoa_NSSize_2I_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2JJLorg_eclipse_swt_internal_cocoa_NSSize_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2II_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2JJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2IILorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2JJLorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2IILorg_eclipse_swt_internal_cocoa_NSSize_2_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2JJLorg_eclipse_swt_internal_cocoa_NSSize_2_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2IILorg_eclipse_swt_internal_cocoa_NSSize_2I_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2JJLorg_eclipse_swt_internal_cocoa_NSSize_2J_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2IILorg_eclipse_swt_internal_cocoa_NSSize_2IIIII_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2JJLorg_eclipse_swt_internal_cocoa_NSSize_2JJJJJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2IILorg_eclipse_swt_internal_cocoa_NSSize_2ZZI_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2JJLorg_eclipse_swt_internal_cocoa_NSSize_2ZZJ_FUNC,
#endif
#ifndef JNI64
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2IIZ_FUNC,
#else
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2JJZ_FUNC,
#endif
	objc_1registerClassPair_FUNC,
	objc_1super_1sizeof_FUNC,
	object_1getClass_FUNC,
	object_1getClassName_FUNC,
	object_1getInstanceVariable_FUNC,
	object_1setClass_FUNC,
	object_1setInstanceVariable_FUNC,
	sel_1getName_FUNC,
	sel_1registerName_FUNC,
} OS_FUNCS;
