/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00465db0; name: FUN_00465db0
 */


long FUN_00465db0(long param_1,byte *param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  
  bVar2 = *param_2;
  if ((bVar2 != 0xff) || (*(long *)(param_2 + 8) != 0)) {
    iVar7 = *(int *)(param_1 + 0x18) + -1;
    if (-1 < iVar7) {
      iVar8 = 0;
      do {
        while( true ) {
          iVar4 = iVar7 - iVar8;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar8 + (iVar4 >> 1);
          bVar3 = *(byte *)(*(long *)(param_1 + 0x10) + (long)iVar4 * 0x28 + 0x20);
          if (bVar2 > bVar3 || bVar3 == bVar2) break;
          iVar7 = iVar4 + -1;
          if (iVar7 < iVar8) goto LAB_00465e30;
        }
        if (bVar2 <= bVar3) {
          lVar6 = *(long *)(param_1 + 0x10) + (long)iVar4 * 0x28;
          if (lVar6 != 0) goto LAB_00465e98;
          break;
        }
        iVar8 = iVar4 + 1;
      } while (iVar8 <= iVar7);
    }
LAB_00465e30:
    if (bVar2 != 0xff) {
      *param_2 = 0xff;
      iVar7 = *(int *)(param_1 + 0x18) + -1;
      if (-1 < iVar7) {
        iVar8 = 0;
        do {
          iVar4 = iVar7 - iVar8;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar8 + (iVar4 >> 1);
          if (*(char *)(*(long *)(param_1 + 0x10) + (long)iVar4 * 0x28 + 0x20) == -1) {
            lVar6 = *(long *)(param_1 + 0x10) + (long)iVar4 * 0x28;
            if (lVar6 != 0) goto LAB_00465e98;
            break;
          }
          iVar8 = iVar4 + 1;
        } while (iVar4 < iVar7);
      }
    }
  }
  goto LAB_00465f1c;
LAB_00465e98:
  uVar5 = *(ulong *)(param_2 + 8);
  if ((uVar5 != 0) && (iVar7 = *(int *)(lVar6 + 0x18) + -1, -1 < iVar7)) {
    iVar8 = 0;
    do {
      while( true ) {
        iVar4 = iVar7 - iVar8;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        iVar4 = iVar8 + (iVar4 >> 1);
        uVar9 = *(ulong *)(*(long *)(lVar6 + 0x10) + (long)iVar4 * 0x10 + 8);
        if (uVar5 > uVar9 || uVar9 == uVar5) break;
        iVar7 = iVar4 + -1;
        if (iVar7 < iVar8) goto LAB_00465f04;
      }
      if (uVar5 <= uVar9) {
        lVar1 = *(long *)(lVar6 + 0x10) + (long)iVar4 * 0x10;
        if (lVar1 != 0) {
          return lVar1;
        }
        break;
      }
      iVar8 = iVar4 + 1;
    } while (iVar8 <= iVar7);
  }
LAB_00465f04:
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  if (*(char *)(lVar6 + 0xc) != '\0') {
    return lVar6 + 8;
  }
LAB_00465f1c:
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  lVar6 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    lVar6 = param_1 + 8;
  }
  return lVar6;
}


