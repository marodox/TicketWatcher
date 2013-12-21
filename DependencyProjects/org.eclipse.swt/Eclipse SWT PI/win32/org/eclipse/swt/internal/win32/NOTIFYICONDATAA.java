/*******************************************************************************
 * Copyright (c) 2000, 2008 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     IBM Corporation - initial API and implementation
 *******************************************************************************/
package org.eclipse.swt.internal.win32;

public class NOTIFYICONDATAA extends NOTIFYICONDATA {
	/** @field cast=(TCHAR) */
	public byte szTip[] = new byte [128];
	/** @field cast=(TCHAR),flags=no_wince */
	public byte szInfo[] = new byte [256];
	/** @field cast=(TCHAR),flags=no_wince */
	public byte szInfoTitle[] = new byte [64];
	public static final int sizeof = OS.NOTIFYICONDATAA_V2_SIZE;
}
