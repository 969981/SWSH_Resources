/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046f480; name: FUN_0046f480
 */


void FUN_0046f480(long param_1,code *param_2,uint *param_3,undefined8 param_4,uint *param_5,
                 undefined8 param_6,ulong param_7)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  long *plVar11;
  
  if (((param_7 & 1) != 0) && (*(char *)(param_1 + 0x10) != '\0')) {
    (*param_2)(param_1 + 8,param_4,param_6);
  }
  uVar1 = *param_3;
  if (uVar1 != 0) {
    iVar6 = *(int *)(param_1 + 0x20) + -1;
    if (iVar6 < 0) {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x18);
    iVar7 = 0;
    while( true ) {
      while( true ) {
        iVar5 = iVar6 - iVar7;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 1;
        }
        iVar5 = iVar7 + (iVar5 >> 1);
        lVar9 = (long)iVar5;
        uVar2 = *(uint *)(lVar8 + (long)iVar5 * 0x30 + 0x28);
        if (uVar2 <= uVar1) break;
        iVar6 = iVar5 + -1;
        if (iVar6 < iVar7) {
          return;
        }
      }
      if (uVar1 <= uVar2) break;
      iVar7 = iVar5 + 1;
      if (iVar6 < iVar7) {
        return;
      }
    }
    if (lVar8 + lVar9 * 0x30 == 0) {
      return;
    }
    *param_5 = uVar1;
    if (*(char *)(lVar8 + lVar9 * 0x30 + 0x10) != '\0') {
      (*param_2)(lVar8 + lVar9 * 0x30 + 8,param_4,param_6);
    }
    bVar3 = (byte)param_3[2];
    if (bVar3 == 0xff) {
      lVar8 = lVar8 + lVar9 * 0x30;
      puVar10 = (uint *)(lVar8 + 0x20);
      if (*puVar10 == 0) {
        return;
      }
      plVar11 = (long *)(lVar8 + 0x18);
      lVar8 = *plVar11;
      do {
        *(undefined1 *)(param_5 + 2) = *(undefined1 *)(lVar8 + 0x28);
        FUN_0046f800(lVar8,param_2,param_3 + 4,param_4,param_5 + 4,param_6,1);
        lVar8 = lVar8 + 0x30;
      } while (lVar8 != *plVar11 + (ulong)*puVar10 * 0x30);
      return;
    }
    iVar6 = *(int *)(lVar8 + lVar9 * 0x30 + 0x20) + -1;
    if (iVar6 < 0) {
      return;
    }
    lVar8 = *(long *)(lVar8 + lVar9 * 0x30 + 0x18);
    iVar7 = 0;
    do {
      while( true ) {
        iVar5 = iVar6 - iVar7;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 1;
        }
        iVar5 = iVar7 + (iVar5 >> 1);
        bVar4 = *(byte *)(lVar8 + (long)iVar5 * 0x30 + 0x28);
        if (bVar4 <= bVar3) break;
        iVar6 = iVar5 + -1;
        if (iVar6 < iVar7) {
          return;
        }
      }
      if (bVar3 <= bVar4) {
        lVar8 = lVar8 + (long)iVar5 * 0x30;
        if (lVar8 == 0) {
          return;
        }
        *(byte *)(param_5 + 2) = bVar3;
        FUN_0046f800(lVar8,param_2,param_3 + 4,param_4,param_5 + 4,param_6,1);
        return;
      }
      iVar7 = iVar5 + 1;
    } while (iVar7 <= iVar6);
    return;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x18);
  do {
    *param_5 = *(uint *)(lVar8 + 0x28);
    if (*(char *)(lVar8 + 0x10) != '\0') {
      (*param_2)(lVar8 + 8,param_4,param_6);
    }
    bVar3 = (byte)param_3[2];
    if (bVar3 == 0xff) {
      if (*(int *)(lVar8 + 0x20) != 0) {
        lVar9 = *(long *)(lVar8 + 0x18);
        do {
          *(undefined1 *)(param_5 + 2) = *(undefined1 *)(lVar9 + 0x28);
          FUN_0046f800(lVar9,param_2,param_3 + 4,param_4,param_5 + 4,param_6,1);
          lVar9 = lVar9 + 0x30;
        } while (lVar9 != *(long *)(lVar8 + 0x18) + (ulong)*(uint *)(lVar8 + 0x20) * 0x30);
      }
    }
    else {
      iVar6 = *(int *)(lVar8 + 0x20) + -1;
      if (-1 < iVar6) {
        iVar7 = 0;
        do {
          while( true ) {
            iVar5 = iVar6 - iVar7;
            if (iVar5 < 0) {
              iVar5 = iVar5 + 1;
            }
            iVar5 = iVar7 + (iVar5 >> 1);
            bVar4 = *(byte *)(*(long *)(lVar8 + 0x18) + (long)iVar5 * 0x30 + 0x28);
            if (bVar3 < bVar4) break;
            if (bVar3 <= bVar4) {
              lVar9 = *(long *)(lVar8 + 0x18) + (long)iVar5 * 0x30;
              if (lVar9 != 0) {
                *(byte *)(param_5 + 2) = bVar3;
                FUN_0046f800(lVar9,param_2,param_3 + 4,param_4,param_5 + 4,param_6,1);
              }
              goto LAB_0046f660;
            }
            iVar7 = iVar5 + 1;
            if (iVar6 < iVar7) goto LAB_0046f660;
          }
          iVar6 = iVar5 + -1;
        } while (iVar7 <= iVar6);
      }
    }
LAB_0046f660:
    lVar8 = lVar8 + 0x30;
    if (lVar8 == *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30) {
      return;
    }
  } while( true );
}


