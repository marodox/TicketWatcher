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

#include "swt.h"
#include "os_stats.h"

#ifdef NATIVE_STATS

char * OS_nativeFunctionNames[] = {
	"PfDecomposeStemToID",
	"PfExtentText__Lorg_eclipse_swt_internal_photon_PhRect_1t_2Lorg_eclipse_swt_internal_photon_PhPoint_1t_2III",
	"PfExtentText__Lorg_eclipse_swt_internal_photon_PhRect_1t_2Lorg_eclipse_swt_internal_photon_PhPoint_1t_2_3B_3BI",
	"PfExtentWideText",
	"PfFontDescription",
	"PfFontFlags",
	"PfFontSize",
	"PfFreeFont",
	"PfGenerateFontName",
	"PfLoadMetrics",
	"PfQueryFontInfo",
	"PfQueryFonts",
	"PgAlphaOff",
	"PgAlphaOn",
	"PgCreateGC",
	"PgDestroyGC",
	"PgDrawArc",
	"PgDrawArrow",
	"PgDrawBitmap",
	"PgDrawEllipse",
	"PgDrawGradient",
	"PgDrawILine",
	"PgDrawIPixel",
	"PgDrawIRect",
	"PgDrawImage",
	"PgDrawMultiTextArea",
	"PgDrawPhImageRectmx",
	"PgDrawPolygon",
	"PgDrawRoundRect",
	"PgDrawTImage",
	"PgDrawText",
	"PgExtentMultiText",
	"PgFlush",
	"PgGetVideoMode",
	"PgGetVideoModeInfo",
	"PgReadScreen",
	"PgReadScreenSize",
	"PgSetAlpha",
	"PgSetClipping",
	"PgSetDrawBufferSize",
	"PgSetDrawMode",
	"PgSetFillColor",
	"PgSetFillTransPat",
	"PgSetFont",
	"PgSetGC",
	"PgSetMultiClip",
	"PgSetMultiClipTiles",
	"PgSetPalette",
	"PgSetRegion",
	"PgSetStrokeCap",
	"PgSetStrokeColor",
	"PgSetStrokeDash",
	"PgSetStrokeJoin",
	"PgSetStrokeWidth",
	"PgSetTextColor",
	"PgSetTextXORColor",
	"PgSetTranslation",
	"PgSetUserClip",
	"PgShmemCreate",
	"PgShmemDestroy",
	"PhAddMergeTiles",
	"PhAreaToRect",
	"PhBlit",
	"PhClipTilings",
	"PhClipboardCopy",
	"PhClipboardCopyString",
	"PhClipboardPasteFinish",
	"PhClipboardPasteStart",
	"PhClipboardPasteString",
	"PhClipboardPasteType",
	"PhClipboardPasteTypeN",
	"PhCoalesceTiles",
	"PhCopyTiles",
	"PhCreateImage",
	"PhDCSetCurrent",
	"PhDeTranslateTiles",
	"PhEventNext",
	"PhEventPeek",
	"PhFreeTiles",
	"PhGetData",
	"PhGetMsgSize",
	"PhGetRects",
	"PhGetTile",
	"PhInitDrag",
	"PhInputGroup",
	"PhIntersectTilings",
	"PhKeyToMb",
	"PhMakeGhostBitmap",
	"PhMakeTransBitmap",
	"PhMergeTiles",
	"PhMoveCursorAbs",
	"PhQueryCursor",
	"PhQueryRids",
	"PhRectIntersect",
	"PhRectUnion__II",
	"PhRectUnion__Lorg_eclipse_swt_internal_photon_PhRect_1t_2Lorg_eclipse_swt_internal_photon_PhRect_1t_2",
	"PhRectsToTiles",
	"PhRegionQuery",
	"PhReleaseImage",
	"PhSortTiles",
	"PhTilesToRects",
	"PhTranslateTiles",
	"PhWindowQueryVisible",
	"PiCropImage",
	"PiDuplicateImage",
	"PmMemCreateMC",
	"PmMemFlush",
	"PmMemReleaseMC",
	"PmMemStart",
	"PmMemStop",
	"PtAddCallback",
	"PtAddEventHandler",
	"PtAddFilterCallback",
	"PtAddHotkeyHandler",
	"PtAlert",
	"PtAppAddInput",
	"PtAppAddWorkProc",
	"PtAppCreatePulse",
	"PtAppDeletePulse",
	"PtAppProcessEvent",
	"PtAppPulseTrigger",
	"PtAppRemoveInput",
	"PtAppRemoveWorkProc",
	"PtBeep",
	"PtBlit",
	"PtBlockAllWindows",
	"PtBlockWindow",
	"PtButton",
	"PtCalcBorder",
	"PtCalcCanvas",
	"PtClippedBlit",
	"PtColorSelect",
	"PtComboBox",
	"PtContainer",
	"PtContainerFindFocus",
	"PtContainerFocusNext",
	"PtContainerFocusPrev",
	"PtContainerGiveFocus",
	"PtContainerHold",
	"PtContainerRelease",
	"PtCreateAppContext",
	"PtCreateWidget",
	"PtCreateWidgetClass",
	"PtDamageExtent",
	"PtDamageWidget",
	"PtDestroyWidget",
	"PtDisjoint",
	"PtEnter",
	"PtEventHandler",
	"PtExtentWidget",
	"PtExtentWidgetFamily",
	"PtFileSelection",
	"PtFindDisjoint",
	"PtFlush",
	"PtFontSelection",
	"PtForwardWindowEvent",
	"PtFrameSize",
	"PtGetAbsPosition",
	"PtGetResources",
	"PtGetVisibleTiles",
	"PtGlobalFocusNext",
	"PtGlobalFocusNextContainer",
	"PtGlobalFocusPrev",
	"PtGlobalFocusPrevContainer",
	"PtGroup",
	"PtHit",
	"PtHold",
	"PtInflateBalloon",
	"PtInit",
	"PtIsFocused",
	"PtLabel",
	"PtLeave",
	"PtList",
	"PtListAddItems",
	"PtListDeleteAllItems",
	"PtListDeleteItemPos",
	"PtListGotoPos",
	"PtListItemPos",
	"PtListReplaceItemPos",
	"PtListSelectPos",
	"PtListUnselectPos",
	"PtMainLoop",
	"PtMenu",
	"PtMenuBar",
	"PtMenuButton",
	"PtMultiText",
	"PtNextTopLevelWidget",
	"PtNumericInteger",
	"PtPane",
	"PtPanelGroup",
	"PtPositionMenu",
	"PtProgress",
	"PtReParentWidget",
	"PtRealizeWidget",
	"PtRegion",
	"PtRelease",
	"PtRemoveCallback",
	"PtRemoveHotkeyHandler",
	"PtScrollArea",
	"PtScrollContainer",
	"PtScrollbar",
	"PtSendEventToWidget",
	"PtSeparator",
	"PtSetAreaFromWidgetCanvas",
	"PtSetParentWidget",
	"PtSetResource",
	"PtSetResources",
	"PtSlider",
	"PtSuperClassDraw",
	"PtSyncWidget",
	"PtText",
	"PtTextGetSelection",
	"PtTextModifyText__IIIIII",
	"PtTextModifyText__IIII_3BI",
	"PtTextSetSelection",
	"PtTimer",
	"PtToggleButton",
	"PtToolbar",
	"PtUnblockWindows",
	"PtUnrealizeWidget",
	"PtValidParent",
	"PtWebClient",
	"PtWidgetArea",
	"PtWidgetBrotherBehind",
	"PtWidgetBrotherInFront",
	"PtWidgetCanvas__II",
	"PtWidgetCanvas__ILorg_eclipse_swt_internal_photon_PhRect_1t_2",
	"PtWidgetChildBack",
	"PtWidgetChildFront",
	"PtWidgetClass",
	"PtWidgetExtent__II",
	"PtWidgetExtent__ILorg_eclipse_swt_internal_photon_PhRect_1t_2",
	"PtWidgetFlags",
	"PtWidgetInsert",
	"PtWidgetIsClassMember",
	"PtWidgetIsRealized",
	"PtWidgetOffset",
	"PtWidgetParent",
	"PtWidgetPreferredSize",
	"PtWidgetRid",
	"PtWidgetToBack",
	"PtWidgetToFront",
	"PtWindow",
	"PtWindowFocus",
	"PtWindowGetState",
	"PtWindowToBack",
	"PtWindowToFront",
	"memmove__ILorg_eclipse_swt_internal_photon_PgAlpha_1t_2I",
	"memmove__ILorg_eclipse_swt_internal_photon_PhArea_1t_2I",
	"memmove__ILorg_eclipse_swt_internal_photon_PhCursorDef_1t_2I",
	"memmove__ILorg_eclipse_swt_internal_photon_PhEvent_1t_2I",
	"memmove__ILorg_eclipse_swt_internal_photon_PhImage_1t_2I",
	"memmove__ILorg_eclipse_swt_internal_photon_PhPoint_1t_2I",
	"memmove__ILorg_eclipse_swt_internal_photon_PhPointerEvent_1t_2I",
	"memmove__ILorg_eclipse_swt_internal_photon_PhRect_1t_2I",
	"memmove__ILorg_eclipse_swt_internal_photon_PhTile_1t_2I",
	"memmove__ILorg_eclipse_swt_internal_photon_PtTextCallback_1t_2I",
	"memmove__ILorg_eclipse_swt_internal_photon_PtWebClient2Data_1t_2I",
	"memmove__Lorg_eclipse_swt_internal_photon_FontDetails_2II",
	"memmove__Lorg_eclipse_swt_internal_photon_PgAlpha_1t_2II",
	"memmove__Lorg_eclipse_swt_internal_photon_PgMap_1t_2II",
	"memmove__Lorg_eclipse_swt_internal_photon_PhClipHeader_2II",
	"memmove__Lorg_eclipse_swt_internal_photon_PhEvent_1t_2II",
	"memmove__Lorg_eclipse_swt_internal_photon_PhImage_1t_2II",
	"memmove__Lorg_eclipse_swt_internal_photon_PhKeyEvent_1t_2II",
	"memmove__Lorg_eclipse_swt_internal_photon_PhPointerEvent_1t_2II",
	"memmove__Lorg_eclipse_swt_internal_photon_PhRect_1t_2II",
	"memmove__Lorg_eclipse_swt_internal_photon_PhTile_1t_2II",
	"memmove__Lorg_eclipse_swt_internal_photon_PhWindowEvent_1t_2II",
	"memmove__Lorg_eclipse_swt_internal_photon_PtCallbackInfo_1t_2II",
	"memmove__Lorg_eclipse_swt_internal_photon_PtScrollbarCallback_1t_2II",
	"memmove__Lorg_eclipse_swt_internal_photon_PtTextCallback_1t_2II",
	"memmove__Lorg_eclipse_swt_internal_photon_PtWebDataReqCallback_1t_2II",
	"memmove__Lorg_eclipse_swt_internal_photon_PtWebMetaDataCallback_1t_2II",
	"memmove__Lorg_eclipse_swt_internal_photon_PtWebStatusCallback_1t_2II",
	"memmove__Lorg_eclipse_swt_internal_photon_PtWebWindowCallback_1t_2II",
	"memmove___3BLorg_eclipse_swt_internal_photon_PhClipHeader_2I",
	"strdup",
	"uname",
};
#define NATIVE_FUNCTION_COUNT sizeof(OS_nativeFunctionNames) / sizeof(char*)
int OS_nativeFunctionCount = NATIVE_FUNCTION_COUNT;
int OS_nativeFunctionCallCount[NATIVE_FUNCTION_COUNT];

#define STATS_NATIVE(func) Java_org_eclipse_swt_tools_internal_NativeStats_##func

JNIEXPORT jint JNICALL STATS_NATIVE(OS_1GetFunctionCount)
	(JNIEnv *env, jclass that)
{
	return OS_nativeFunctionCount;
}

JNIEXPORT jstring JNICALL STATS_NATIVE(OS_1GetFunctionName)
	(JNIEnv *env, jclass that, jint index)
{
	return (*env)->NewStringUTF(env, OS_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(OS_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return OS_nativeFunctionCallCount[index];
}

#endif
