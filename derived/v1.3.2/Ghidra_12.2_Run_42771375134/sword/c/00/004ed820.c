/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ed820; name: FUN_004ed820
 */


void FUN_004ed820(long *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_004edb50();
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  if (*(uint *)(param_1 + 7) != 0) {
    lVar3 = *(long *)param_1[6];
    if (lVar3 == 0) {
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
        if (*(uint *)(param_1 + 7) <= uVar4) goto LAB_004ed958;
        lVar3 = ((long *)param_1[6])[uVar4];
      } while (lVar3 == 0);
    }
    else {
      uVar4 = 0;
    }
    do {
      if (*(int *)(lVar3 + 8) != 0) {
        lVar5 = 0;
        uVar6 = 0;
        do {
          FUN_004ebc30(param_1,*(long *)(lVar3 + 0x10) + lVar5);
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 0x70;
        } while (uVar6 < *(uint *)(lVar3 + 8));
      }
      lVar1 = *(long *)(lVar3 + 0x18);
      lVar5 = lVar1;
      uVar2 = uVar4;
      if (lVar1 == 0) {
        do {
          uVar2 = uVar2 + 1;
          if (*(uint *)(param_1 + 7) <= uVar2) {
            lVar5 = 0;
            break;
          }
          lVar5 = *(long *)(param_1[6] + (ulong)uVar2 * 8);
        } while (lVar5 == 0);
      }
      *(long *)(param_1[6] + (ulong)uVar4 * 8) = lVar1;
      *(int *)(param_1 + 8) = (int)param_1[8] + -1;
      FUN_004ebaf0(param_1 + 0x10,lVar3);
      lVar3 = lVar5;
      uVar4 = uVar2;
    } while (lVar5 != 0);
  }
LAB_004ed958:
  if (param_1[6] != 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
  }
  if (param_1[10] != 0) {
    FUN_004f0aa0(param_1 + 9);
    param_1[10] = 0;
  }
  if (param_1[0x12] != 0) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
    param_1[0x12] = 0;
    *(undefined4 *)((long)param_1 + 0x9c) = 0;
  }
  return;
}


