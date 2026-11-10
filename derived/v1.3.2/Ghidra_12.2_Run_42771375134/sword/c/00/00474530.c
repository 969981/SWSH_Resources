/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00474530; name: FUN_00474530
 */


void FUN_00474530(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar4 = PTR_DAT_02712a90;
  puVar5 = *(undefined8 **)(param_1 + 4);
  if (puVar5 != (undefined8 *)0x0) {
    do {
      while( true ) {
        *(undefined8 *)(param_1 + 4) = puVar5[1];
        if (*(undefined8 **)(param_1 + 2) == puVar5) {
          param_1[2] = 0;
          param_1[3] = 0;
        }
        *param_1 = *param_1 + -1;
        FUN_00473aa0(puVar5);
        iVar2 = *(int *)((long)puVar5 + 100) + -1;
        *(int *)((long)puVar5 + 100) = iVar2;
        if (iVar2 == 0) break;
        puVar5 = *(undefined8 **)(param_1 + 4);
        if (puVar5 == (undefined8 *)0x0) goto LAB_004745d4;
      }
      uVar1 = *(undefined4 *)puVar4;
      (**(code **)*puVar5)(puVar5);
      FUN_00404870(uVar1,puVar5);
      puVar5 = *(undefined8 **)(param_1 + 4);
    } while (puVar5 != (undefined8 *)0x0);
  }
LAB_004745d4:
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar4 = PTR_DAT_02712a90;
  param_1[5] = 0;
  plVar3 = (long *)*(long *)(param_1 + 10);
  while (plVar3 != (long *)0x0) {
    *(undefined4 *)(plVar3 + 2) = 0;
    *(undefined4 *)(plVar3 + 4) = 0;
    lVar6 = *plVar3;
    uVar1 = *(undefined4 *)puVar4;
    if (plVar3[6] != 0) {
      FUN_004047f0(uVar1);
    }
    *(undefined4 *)((long)plVar3 + 0x2c) = 0;
    plVar3[6] = 0;
    if (plVar3[1] != 0) {
      *(undefined4 *)(plVar3 + 2) = 0;
      FUN_004047f0(*(undefined4 *)puVar4);
      plVar3[1] = 0;
      *(undefined4 *)((long)plVar3 + 0x14) = 0;
    }
    if (plVar3[3] != 0) {
      *(undefined4 *)(plVar3 + 4) = 0;
      FUN_004047f0(*(undefined4 *)puVar4);
      plVar3[3] = 0;
      *(undefined4 *)((long)plVar3 + 0x24) = 0;
    }
    FUN_00404870(uVar1,plVar3);
    plVar3 = (long *)lVar6;
  }
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar4 = PTR_DAT_02712a90;
  param_1[0xb] = 0;
  plVar3 = (long *)*(long *)(param_1 + 0x10);
  while (plVar3 != (long *)0x0) {
    *(undefined4 *)(plVar3 + 2) = 0;
    *(undefined4 *)(plVar3 + 4) = 0;
    lVar6 = *plVar3;
    uVar1 = *(undefined4 *)puVar4;
    if (plVar3[6] != 0) {
      FUN_004047f0(uVar1);
    }
    *(undefined4 *)((long)plVar3 + 0x2c) = 0;
    plVar3[6] = 0;
    if (plVar3[1] != 0) {
      *(undefined4 *)(plVar3 + 2) = 0;
      FUN_004047f0(*(undefined4 *)puVar4);
      plVar3[1] = 0;
      *(undefined4 *)((long)plVar3 + 0x14) = 0;
    }
    if (plVar3[3] != 0) {
      *(undefined4 *)(plVar3 + 4) = 0;
      FUN_004047f0(*(undefined4 *)puVar4);
      plVar3[3] = 0;
      *(undefined4 *)((long)plVar3 + 0x24) = 0;
    }
    FUN_00404870(uVar1,plVar3);
    plVar3 = (long *)lVar6;
  }
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}


