/**********************************************************************
 * Copyright (c) 2003, 2008 IBM Corp.
 * Portions Copyright (c) 1983-2002, Apple Computer, Inc.
 *
 * All rights reserved.  This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     IBM Corporation - initial API and implementation
 **********************************************************************/
package org.eclipse.swt.internal.carbon;

 
public class LSApplicationParameters {
	public int version;
	public int flags;
	/** @field cast=(const FSRef *) */
	public int application;
	/** @field cast=(void *) */
	public int asyncLaunchRefCon;
	/** @field cast=(CFDictionaryRef) */
	public int environment;
	/** @field cast=(CFArrayRef) */
	public int argv;
	/** @field cast=(AppleEvent *) */
	public int initialEvent;
	public static final int sizeof = 28;
}
