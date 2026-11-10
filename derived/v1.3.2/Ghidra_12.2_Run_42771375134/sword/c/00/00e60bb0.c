/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e60bb0; name: FUN_00e60bb0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00e60bb0(long param_1,byte param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  size_t __n;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *__src;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  if (*(byte *)(param_1 + 0xbd1) == (param_2 & 1)) {
    return;
  }
  *(byte *)(param_1 + 0xbd1) = param_2 & 1;
  lVar6 = *(long *)(*(long *)(param_1 + 0xb20) + 0x80);
  if (lVar6 == 0) {
    return;
  }
  puVar8 = *(undefined8 **)(lVar6 + 0x60);
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  plVar5 = (long *)(**(code **)*puVar8)(puVar8);
  if (((*PTR_DAT_02715280 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02715280), iVar4 != 0))
  {
    uVar9 = FUN_01590a70();
    *(undefined8 *)PTR_DAT_02715288 = uVar9;
    __cxa_guard_release(PTR_DAT_02715280);
  }
  while( true ) {
    if (plVar5 == (long *)0x0) {
      return;
    }
    if (plVar5 == (long *)PTR_DAT_02715288) break;
    plVar5 = (long *)*plVar5;
  }
  if ((long *)puVar8[0x2d] == (long *)puVar8[0x2e]) {
    if ((long *)puVar8[0x33] != (long *)puVar8[0x34]) {
      plVar5 = (long *)puVar8[0x33];
      do {
        plVar7 = plVar5 + 1;
        if (*plVar5 == *(long *)PTR_DAT_0271fc60) goto LAB_00e60cf8;
        plVar5 = plVar7;
      } while ((long *)puVar8[0x34] != plVar7);
    }
LAB_00e60c88:
    bVar2 = true;
  }
  else {
    plVar5 = (long *)puVar8[0x2d];
    do {
      plVar7 = plVar5 + 1;
      if (*plVar5 == *(long *)PTR_DAT_0271fc60) goto LAB_00e60c88;
      plVar5 = plVar7;
    } while ((long *)puVar8[0x2e] != plVar7);
LAB_00e60cf8:
    bVar2 = false;
  }
  if ((param_2 & 1) == 0) {
    if (bVar2) {
      return;
    }
    plVar5 = (long *)puVar8[0x33];
    plVar7 = (long *)puVar8[0x34];
    if ((plVar5 == plVar7) || (*(long *)PTR_DAT_0271fc60 == *plVar5)) {
LAB_00e60d78:
      __src = plVar5 + 1;
    }
    else {
      __src = plVar5 + 1;
      do {
        plVar5 = __src;
        if (plVar7 == plVar5) {
          plVar5 = plVar7;
          goto LAB_00e60d78;
        }
        __src = plVar5 + 1;
      } while (*(long *)PTR_DAT_0271fc60 != *plVar5);
    }
    __n = (long)plVar7 - (long)__src;
    if (__n != 0) {
      memmove(plVar5,__src,__n);
    }
    plVar5 = plVar5 + ((long)__n >> 3);
  }
  else {
    if (!bVar2) {
      return;
    }
    puVar1 = (undefined8 *)puVar8[0x34];
    if (puVar1 == (undefined8 *)puVar8[0x35]) {
      FUN_015c3280(puVar8 + 0x33,PTR_DAT_0271fc60);
      return;
    }
    uVar9 = puVar8[0x36];
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar9;
    puVar3 = PTR_DAT_0271fc60;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    *puVar1 = *(undefined8 *)puVar3;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    plVar5 = (long *)(puVar8[0x34] + 8);
  }
  puVar8[0x34] = plVar5;
  return;
}


