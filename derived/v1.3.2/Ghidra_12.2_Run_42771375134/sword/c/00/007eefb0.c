/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007eefb0; name: FUN_007eefb0
 */


void FUN_007eefb0(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (*(long *)(param_2 + 0x90) == 0) {
    uVar1 = FUN_008469a0();
    *(undefined8 *)(param_2 + 0x90) = uVar1;
    iVar2 = *(int *)(param_2 + 0x48);
  }
  else {
    iVar2 = *(int *)(param_2 + 0x48);
  }
  if (0 < iVar2) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_007f1fc0(param_1,*(long *)(param_2 + 0x50) + lVar3,
                   *(undefined8 *)(*(long *)(param_3 + 0x70) + lVar4 * 8 + 8));
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0xa8;
    } while (lVar4 < *(int *)(param_2 + 0x48));
  }
  if (0 < *(int *)(param_2 + 0x78)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_007f2560(param_1,*(long *)(param_2 + 0x88) + lVar3,
                   *(undefined8 *)(*(long *)(param_3 + 0xb8) + lVar4 * 8 + 8));
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x90;
    } while (lVar4 < *(int *)(param_2 + 0x78));
  }
  if (0 < *(int *)(param_2 + 0x58)) {
    lVar4 = 0;
    do {
      lVar3 = *(long *)(param_2 + 0x60);
      plVar5 = (long *)(lVar3 + lVar4 * 0x38 + 0x20);
      if (*plVar5 == 0) {
        lVar9 = FUN_0084fe30();
        *plVar5 = lVar9;
        piVar6 = (int *)(lVar3 + lVar4 * 0x38 + 0x2c);
        iVar2 = *piVar6;
      }
      else {
        piVar6 = (int *)(lVar3 + lVar4 * 0x38 + 0x2c);
        iVar2 = *piVar6;
      }
      if (0 < iVar2) {
        lVar9 = 0;
        lVar8 = 0x20;
        do {
          while (lVar7 = *(long *)(lVar3 + lVar4 * 0x38 + 0x30), *(long *)(lVar7 + lVar8) != 0) {
            lVar9 = lVar9 + 1;
            lVar8 = lVar8 + 0x28;
            if (iVar2 <= lVar9) goto LAB_007ef11c;
          }
          uVar1 = FUN_00850fb0();
          *(undefined8 *)(lVar7 + lVar8) = uVar1;
          iVar2 = *piVar6;
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + 0x28;
        } while (lVar9 < iVar2);
      }
LAB_007ef11c:
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_2 + 0x58));
  }
  if (0 < *(int *)(param_2 + 0x68)) {
    lVar4 = 0;
    do {
      lVar9 = *(long *)(param_2 + 0x70);
      lVar3 = *(long *)(*(long *)(param_3 + 0xa0) + lVar4 * 8 + 8);
      plVar5 = (long *)(lVar9 + lVar4 * 0x30 + 0x18);
      if (*plVar5 == 0) {
        lVar8 = FUN_00851f00();
        *plVar5 = lVar8;
        piVar6 = (int *)(lVar9 + lVar4 * 0x30 + 0x20);
        iVar2 = *piVar6;
      }
      else {
        piVar6 = (int *)(lVar9 + lVar4 * 0x30 + 0x20);
        iVar2 = *piVar6;
      }
      if (0 < iVar2) {
        lVar7 = 0;
        lVar8 = 0;
        do {
          FUN_007f3e40(param_1,*(long *)(lVar9 + lVar4 * 0x30 + 0x28) + lVar7,
                       *(undefined8 *)(*(long *)(lVar3 + 0x30) + lVar8 * 8 + 8));
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x38;
        } while (lVar8 < *piVar6);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_2 + 0x68));
  }
  return;
}


