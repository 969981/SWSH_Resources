/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046d840; name: FUN_0046d840
 */


long FUN_0046d840(long param_1,uint *param_2,long *param_3,undefined1 *param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  
  uVar6 = *param_2;
  if ((((uVar6 == 0) && ((char)param_2[2] == -1)) && ((char)param_2[4] == -1)) &&
     (*(long *)(param_2 + 6) == 0)) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = *(int *)(param_1 + 0x20) != 0;
    }
    lVar4 = 0;
    if (*(char *)(param_1 + 0x10) != '\0') {
      lVar4 = param_1 + 8;
    }
    return lVar4;
  }
  if ((param_3 != (long *)0x0) && (*(char *)(param_1 + 0x10) != '\0')) {
    *param_3 = param_1 + 8;
    uVar6 = *param_2;
  }
  iVar8 = *(int *)(param_1 + 0x20) + -1;
  if (iVar8 < 0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  iVar9 = 0;
  while( true ) {
    while( true ) {
      iVar3 = iVar8 - iVar9;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar9 + (iVar3 >> 1);
      lVar7 = (long)iVar3;
      uVar1 = *(uint *)(lVar4 + (long)iVar3 * 0x30 + 0x28);
      if (uVar6 > uVar1 || uVar1 == uVar6) break;
      iVar8 = iVar3 + -1;
      if (iVar8 < iVar9) {
        return 0;
      }
    }
    if (uVar6 <= uVar1) break;
    iVar9 = iVar3 + 1;
    if (iVar8 < iVar9) {
      return 0;
    }
  }
  if (lVar4 + lVar7 * 0x30 == 0) {
    return 0;
  }
  bVar5 = (byte)param_2[2];
  if (((bVar5 == 0xff) && ((char)param_2[4] == -1)) && (*(long *)(param_2 + 6) == 0)) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = *(int *)(lVar4 + lVar7 * 0x30 + 0x20) != 0;
    }
    lVar4 = lVar4 + lVar7 * 0x30;
    lVar7 = 0;
    if (*(char *)(lVar4 + 0x10) != '\0') {
      lVar7 = lVar4 + 8;
    }
    return lVar7;
  }
  if ((param_3 != (long *)0x0) && (*(char *)(lVar4 + lVar7 * 0x30 + 0x10) != '\0')) {
    *param_3 = lVar4 + lVar7 * 0x30 + 8;
    bVar5 = (byte)param_2[2];
  }
  iVar8 = *(int *)(lVar4 + lVar7 * 0x30 + 0x20) + -1;
  if (iVar8 < 0) {
    return 0;
  }
  lVar4 = *(long *)(lVar4 + lVar7 * 0x30 + 0x18);
  iVar9 = 0;
  while( true ) {
    while( true ) {
      iVar3 = iVar8 - iVar9;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar9 + (iVar3 >> 1);
      bVar2 = *(byte *)(lVar4 + (long)iVar3 * 0x30 + 0x28);
      if (bVar2 <= bVar5) break;
      iVar8 = iVar3 + -1;
      if (iVar8 < iVar9) {
        return 0;
      }
    }
    if (bVar5 <= bVar2) break;
    iVar9 = iVar3 + 1;
    if (iVar8 < iVar9) {
      return 0;
    }
  }
  lVar4 = lVar4 + (long)iVar3 * 0x30;
  if (lVar4 == 0) {
    return 0;
  }
  bVar5 = (byte)param_2[4];
  if ((bVar5 == 0xff) && (*(long *)(param_2 + 6) == 0)) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = *(int *)(lVar4 + 0x20) != 0;
    }
    lVar7 = 0;
    if (*(char *)(lVar4 + 0x10) != '\0') {
      lVar7 = lVar4 + 8;
    }
    return lVar7;
  }
  if ((param_3 != (long *)0x0) && (*(char *)(lVar4 + 0x10) != '\0')) {
    *param_3 = lVar4 + 8;
    bVar5 = (byte)param_2[4];
  }
  iVar8 = *(int *)(lVar4 + 0x20) + -1;
  if (iVar8 < 0) {
    return 0;
  }
  lVar4 = *(long *)(lVar4 + 0x18);
  iVar9 = 0;
  while( true ) {
    while( true ) {
      iVar3 = iVar8 - iVar9;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar9 + (iVar3 >> 1);
      lVar7 = (long)iVar3;
      bVar2 = *(byte *)(lVar4 + (long)iVar3 * 0x30 + 0x28);
      if (bVar2 <= bVar5) break;
      iVar8 = iVar3 + -1;
      if (iVar8 < iVar9) {
        return 0;
      }
    }
    if (bVar5 <= bVar2) break;
    iVar9 = iVar3 + 1;
    if (iVar8 < iVar9) {
      return 0;
    }
  }
  if (lVar4 + lVar7 * 0x30 == 0) {
    return 0;
  }
  if (*(long *)(param_2 + 6) == 0) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = *(int *)(lVar4 + lVar7 * 0x30 + 0x20) != 0;
    }
    lVar4 = lVar4 + lVar7 * 0x30;
    lVar7 = 0;
    if (*(char *)(lVar4 + 0x10) != '\0') {
      lVar7 = lVar4 + 8;
    }
    return lVar7;
  }
  if ((param_3 != (long *)0x0) && (*(char *)(lVar4 + lVar7 * 0x30 + 0x10) != '\0')) {
    *param_3 = lVar4 + lVar7 * 0x30 + 8;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  iVar8 = *(int *)(lVar4 + lVar7 * 0x30 + 0x20) + -1;
  if (iVar8 < 0) {
    return 0;
  }
  lVar4 = *(long *)(lVar4 + lVar7 * 0x30 + 0x18);
  iVar9 = 0;
  do {
    while( true ) {
      iVar3 = iVar8 - iVar9;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar9 + (iVar3 >> 1);
      uVar10 = *(ulong *)(lVar4 + (long)iVar3 * 0x10 + 8);
      if (uVar10 <= *(ulong *)(param_2 + 6)) break;
      iVar8 = iVar3 + -1;
      if (iVar8 < iVar9) {
        return 0;
      }
    }
    if (*(ulong *)(param_2 + 6) <= uVar10) {
      return lVar4 + (long)iVar3 * 0x10;
    }
    iVar9 = iVar3 + 1;
  } while (iVar9 <= iVar8);
  return 0;
}


