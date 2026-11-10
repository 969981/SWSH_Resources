/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046b400; name: FUN_0046b400
 */


undefined8 FUN_0046b400(long param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  
  uVar6 = *param_2;
  if (((((uVar6 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
      (((char)param_2[3] == -1 && ((char)param_2[4] == -1)))) && (param_2[5] == 0)) {
    if (*(char *)(param_1 + 0x48) == '\0') {
      return 0;
    }
    puVar4 = (undefined8 *)(param_1 + 0x40);
  }
  else {
    iVar8 = *(int *)(param_1 + 0x58) + -1;
    if (iVar8 < 0) {
      return 0;
    }
    lVar5 = *(long *)(param_1 + 0x50);
    iVar9 = 0;
    while( true ) {
      while( true ) {
        iVar3 = iVar8 - iVar9;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar9 + (iVar3 >> 1);
        lVar7 = (long)iVar3;
        uVar10 = *(ulong *)(lVar5 + (long)iVar3 * 0x30 + 0x28);
        if (uVar6 > uVar10 || uVar10 == uVar6) break;
        iVar8 = iVar3 + -1;
        if (iVar8 < iVar9) {
          return 0;
        }
      }
      if (uVar6 <= uVar10) break;
      iVar9 = iVar3 + 1;
      if (iVar8 < iVar9) {
        return 0;
      }
    }
    if (lVar5 + lVar7 * 0x30 == 0) {
      return 0;
    }
    uVar1 = (uint)param_2[1];
    if (((uVar1 == 0) && ((int)param_2[2] == 0)) &&
       (((char)param_2[3] == -1 && (((char)param_2[4] == -1 && (param_2[5] == 0)))))) {
      lVar5 = lVar5 + lVar7 * 0x30;
      if (*(char *)(lVar5 + 0x10) == '\0') {
        return 0;
      }
      puVar4 = (undefined8 *)(lVar5 + 8);
    }
    else {
      iVar8 = *(int *)(lVar5 + lVar7 * 0x30 + 0x20) + -1;
      if (iVar8 < 0) {
        return 0;
      }
      lVar5 = *(long *)(lVar5 + lVar7 * 0x30 + 0x18);
      iVar9 = 0;
      while( true ) {
        while( true ) {
          iVar3 = iVar8 - iVar9;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar9 + (iVar3 >> 1);
          uVar2 = *(uint *)(lVar5 + (long)iVar3 * 0x30 + 0x28);
          if (uVar2 <= uVar1) break;
          iVar8 = iVar3 + -1;
          if (iVar8 < iVar9) {
            return 0;
          }
        }
        if (uVar1 <= uVar2) break;
        iVar9 = iVar3 + 1;
        if (iVar8 < iVar9) {
          return 0;
        }
      }
      lVar5 = lVar5 + (long)iVar3 * 0x30;
      if (lVar5 == 0) {
        return 0;
      }
      puVar4 = (undefined8 *)FUN_0046d840(lVar5,param_2 + 2,0,0);
      if (puVar4 == (undefined8 *)0x0) {
        return 0;
      }
    }
  }
  return *puVar4;
}


