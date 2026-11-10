/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046f100; name: FUN_0046f100
 */


void FUN_0046f100(long param_1,code *param_2,ulong *param_3,undefined8 param_4,ulong *param_5,
                 undefined8 param_6,ulong param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  long *plVar11;
  
  if (((param_7 & 1) != 0) && (*(char *)(param_1 + 0x10) != '\0')) {
    (*param_2)(param_1 + 8,param_4,param_6);
  }
  uVar4 = *param_3;
  if (uVar4 != 0) {
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
        lVar9 = (long)iVar3;
        uVar7 = *(ulong *)(lVar8 + (long)iVar3 * 0x30 + 0x28);
        if (uVar7 <= uVar4) break;
        iVar5 = iVar3 + -1;
        if (iVar5 < iVar6) {
          return;
        }
      }
      if (uVar4 <= uVar7) break;
      iVar6 = iVar3 + 1;
      if (iVar5 < iVar6) {
        return;
      }
    }
    if (lVar8 + lVar9 * 0x30 == 0) {
      return;
    }
    *param_5 = uVar4;
    if (*(char *)(lVar8 + lVar9 * 0x30 + 0x10) != '\0') {
      (*param_2)(lVar8 + lVar9 * 0x30 + 8,param_4,param_6);
    }
    uVar1 = (uint)param_3[1];
    if (uVar1 == 0) {
      lVar8 = lVar8 + lVar9 * 0x30;
      puVar10 = (uint *)(lVar8 + 0x20);
      if (*puVar10 == 0) {
        return;
      }
      plVar11 = (long *)(lVar8 + 0x18);
      lVar8 = *plVar11;
      do {
        *(undefined4 *)(param_5 + 1) = *(undefined4 *)(lVar8 + 0x28);
        FUN_0046f480(lVar8,param_2,param_3 + 2,param_4,param_5 + 2,param_6,1);
        lVar8 = lVar8 + 0x30;
      } while (lVar8 != *plVar11 + (ulong)*puVar10 * 0x30);
      return;
    }
    iVar5 = *(int *)(lVar8 + lVar9 * 0x30 + 0x20) + -1;
    if (iVar5 < 0) {
      return;
    }
    lVar8 = *(long *)(lVar8 + lVar9 * 0x30 + 0x18);
    iVar6 = 0;
    do {
      while( true ) {
        iVar3 = iVar5 - iVar6;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar6 + (iVar3 >> 1);
        uVar2 = *(uint *)(lVar8 + (long)iVar3 * 0x30 + 0x28);
        if (uVar2 <= uVar1) break;
        iVar5 = iVar3 + -1;
        if (iVar5 < iVar6) {
          return;
        }
      }
      if (uVar1 <= uVar2) {
        lVar8 = lVar8 + (long)iVar3 * 0x30;
        if (lVar8 == 0) {
          return;
        }
        *(uint *)(param_5 + 1) = uVar1;
        FUN_0046f480(lVar8,param_2,param_3 + 2,param_4,param_5 + 2,param_6,1);
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
    *param_5 = *(ulong *)(lVar8 + 0x28);
    if (*(char *)(lVar8 + 0x10) != '\0') {
      (*param_2)(lVar8 + 8,param_4,param_6);
    }
    uVar1 = (uint)param_3[1];
    if (uVar1 == 0) {
      if (*(int *)(lVar8 + 0x20) != 0) {
        lVar9 = *(long *)(lVar8 + 0x18);
        do {
          *(undefined4 *)(param_5 + 1) = *(undefined4 *)(lVar9 + 0x28);
          FUN_0046f480(lVar9,param_2,param_3 + 2,param_4,param_5 + 2,param_6,1);
          lVar9 = lVar9 + 0x30;
        } while (lVar9 != *(long *)(lVar8 + 0x18) + (ulong)*(uint *)(lVar8 + 0x20) * 0x30);
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
            uVar2 = *(uint *)(*(long *)(lVar8 + 0x18) + (long)iVar3 * 0x30 + 0x28);
            if (uVar1 < uVar2) break;
            if (uVar1 <= uVar2) {
              lVar9 = *(long *)(lVar8 + 0x18) + (long)iVar3 * 0x30;
              if (lVar9 != 0) {
                *(uint *)(param_5 + 1) = uVar1;
                FUN_0046f480(lVar9,param_2,param_3 + 2,param_4,param_5 + 2,param_6,1);
              }
              goto LAB_0046f2dc;
            }
            iVar6 = iVar3 + 1;
            if (iVar5 < iVar6) goto LAB_0046f2dc;
          }
          iVar5 = iVar3 + -1;
        } while (iVar6 <= iVar5);
      }
    }
LAB_0046f2dc:
    lVar8 = lVar8 + 0x30;
    if (lVar8 == *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30) {
      return;
    }
  } while( true );
}


