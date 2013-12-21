/*******************************************************************************
 * Copyright (c) 2000, 2012 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     IBM Corporation - initial API and implementation
 *******************************************************************************/
package org.eclipse.swt.internal.ole.win32;

public class IPersistStorage extends IPersist
{
public IPersistStorage(long /*int*/ address) {
	super(address);
}
public int IsDirty() {
	return COM.VtblCall(4, address);
}
public int InitNew(long /*int*/ pStg) {
	return COM.VtblCall(5, address, pStg);
}
public int Load(long /*int*/ pStg) {
	return COM.VtblCall(6, address, pStg);
}
public int Save(long /*int*/ pStgSave, boolean fSameAsLoad) {
	return COM.VtblCall(7, address, pStgSave, fSameAsLoad);
}
public int SaveCompleted(long /*int*/ pStgNew) {
	return COM.VtblCall(8, address, pStgNew);
}
public int HandsOffStorage(){
	return COM.VtblCall(9, address);
}
}
