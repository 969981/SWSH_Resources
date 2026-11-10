/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046f800; name: FUN_0046f800
 */


void FUN_0046f800(long param_1,code *UNRECOVERED_JUMPTABLE,byte *param_3,undefined8 param_4,
                 byte *param_5,undefined8 param_6,uint param_7)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  long *plVar11;
  
  if (((param_7 & 1) != 0) && (*(char *)(param_1 + 0x10) != '\0')) {
    (*UNRECOVERED_JUMPTABLE)(param_1 + 8,param_4,param_6);
  }
  bVar1 = *param_3;
  if (bVar1 != 0xff) {
    iVar5 = *(int *)(param_1 + 0x20) + -1;
    if (iVar5 < 0) {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x18);
    iVar6 = 0;
    while( true ) {
      while( true ) {
        iVar3 = iVar5 - iVar6;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar6 + (iVar3 >> 1);
        lVar10 = (long)iVar3;
        bVar2 = *(byte *)(lVar8 + (long)iVar3 * 0x30 + 0x28);
        if (bVar2 <= bVar1) break;
        iVar5 = iVar3 + -1;
        if (iVar5 < iVar6) {
          return;
        }
      }
      if (bVar1 <= bVar2) break;
      iVar6 = iVar3 + 1;
      if (iVar5 < iVar6) {
        return;
      }
    }
    if (lVar8 + lVar10 * 0x30 == 0) {
      return;
    }
    *param_5 = bVar1;
    if (*(char *)(lVar8 + lVar10 * 0x30 + 0x10) != '\0') {
      (*UNRECOVERED_JUMPTABLE)(lVar8 + lVar10 * 0x30 + 8,param_4,param_6);
    }
    uVar4 = *(ulong *)(param_3 + 8);
    if (uVar4 == 0) {
      lVar8 = lVar8 + lVar10 * 0x30;
      puVar9 = (uint *)(lVar8 + 0x20);
      if (*puVar9 == 0) {
        return;
      }
      plVar11 = (long *)(lVar8 + 0x18);
      lVar8 = *plVar11;
      do {
        *(undefined8 *)(param_5 + 8) = *(undefined8 *)(lVar8 + 8);
        (*UNRECOVERED_JUMPTABLE)(lVar8,param_4,param_6);
        lVar8 = lVar8 + 0x10;
      } while (lVar8 != *plVar11 + (ulong)*puVar9 * 0x10);
      return;
    }
    iVar5 = *(int *)(lVar8 + lVar10 * 0x30 + 0x20) + -1;
    if (iVar5 < 0) {
      return;
    }
    lVar8 = *(long *)(lVar8 + lVar10 * 0x30 + 0x18);
    iVar6 = 0;
    do {
      while( true ) {
        iVar3 = iVar5 - iVar6;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar6 + (iVar3 >> 1);
        uVar7 = *(ulong *)(lVar8 + (long)iVar3 * 0x10 + 8);
        if (uVar7 <= uVar4) break;
        iVar5 = iVar3 + -1;
        if (iVar5 < iVar6) {
          return;
        }
      }
      if (uVar4 <= uVar7) {
        lVar8 = lVar8 + (long)iVar3 * 0x10;
        if (lVar8 == 0) {
          return;
        }
        *(ulong *)(param_5 + 8) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0046fb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(lVar8,param_4,param_6);
        return;
      }
      iVar6 = iVar3 + 1;
    } while (iVar6 <= iVar5);
    return;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x18);
  do {
    *param_5 = *(byte *)(lVar8 + 0x28);
    if (*(char *)(lVar8 + 0x10) != '\0') {
      (*UNRECOVERED_JUMPTABLE)(lVar8 + 8,param_4,param_6);
    }
    uVar4 = *(ulong *)(param_3 + 8);
    if (uVar4 == 0) {
      if (*(int *)(lVar8 + 0x20) != 0) {
        lVar10 = *(long *)(lVar8 + 0x18);
        do {
          *(undefined8 *)(param_5 + 8) = *(undefined8 *)(lVar10 + 8);
          (*UNRECOVERED_JUMPTABLE)(lVar10,param_4,param_6);
          lVar10 = lVar10 + 0x10;
        } while (lVar10 != *(long *)(lVar8 + 0x18) + (ulong)*(uint *)(lVar8 + 0x20) * 0x10);
      }
    }
    else {
      iVar5 = *(int *)(lVar8 + 0x20) + -1;
      if (-1 < iVar5) {
        iVar6 = 0;
        do {
          while( true ) {
            iVar3 = iVar5 - iVar6;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 1;
            }
            iVar3 = iVar6 + (iVar3 >> 1);
            uVar7 = *(ulong *)(*(long *)(lVar8 + 0x18) + (long)iVar3 * 0x10 + 8);
            if (uVar4 < uVar7) break;
            if (uVar4 <= uVar7) {
              lVar10 = *(long *)(lVar8 + 0x18) + (long)iVar3 * 0x10;
              if (lVar10 != 0) {
                *(ulong *)(param_5 + 8) = uVar4;
                (*UNRECOVERED_JUMPTABLE)(lVar10,param_4,param_6);
              }
              goto LAB_0046f9b8;
            }
            iVar6 = iVar3 + 1;
            if (iVar5 < iVar6) goto LAB_0046f9b8;
          }
          iVar5 = iVar3 + -1;
        } while (iVar6 <= iVar5);
      }
    }
LAB_0046f9b8:
    lVar8 = lVar8 + 0x30;
    if (lVar8 == *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30) {
      return;
    }
  } while( true );
}


