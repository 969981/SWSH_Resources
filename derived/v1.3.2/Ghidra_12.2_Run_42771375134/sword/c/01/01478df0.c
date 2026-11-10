/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01478df0; name: FUN_01478df0
 */


void FUN_01478df0(long param_1)

{
  int iVar1;
  short sVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  int *piVar8;
  undefined8 *puVar9;
  
  if (*(int *)(*(long *)(param_1 + 0x90) + 0x730) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar9 == (undefined8 *)0x0) goto LAB_01478e50;
    plVar3 = (long *)(**(code **)*puVar9)(puVar9);
    lVar4 = FUN_0146e370();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        puVar9 = puVar9 + -10;
        goto LAB_01478e50;
      }
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_01478e50:
  iVar1 = *(int *)(*(long *)(param_1 + 0x90) + 0x730);
  if (iVar1 == 4 || iVar1 == 2) {
    piVar8 = (int *)puVar9[0xc];
    if (*piVar8 == 2) {
      uVar7 = piVar8[4];
      if ((uint)piVar8[0x42] <= uVar7) {
        uVar7 = (piVar8[0x42] + uVar7) - 3;
      }
    }
    else {
      uVar7 = piVar8[4];
    }
    uVar5 = (**(code **)(**(long **)(piVar8 + 2) + 0x50))(*(long **)(piVar8 + 2),uVar7);
    uVar6 = FUN_0087d610(uVar5,2);
    if ((uVar6 & 1) == 0) {
      piVar8 = (int *)puVar9[0xc];
      if (*piVar8 == 2) {
        uVar7 = piVar8[4];
        if ((uint)piVar8[0x42] <= uVar7) {
          uVar7 = (piVar8[0x42] + uVar7) - 3;
        }
      }
      else {
        uVar7 = piVar8[4];
      }
      (**(code **)(**(long **)(piVar8 + 2) + 0x50))(*(long **)(piVar8 + 2),uVar7);
      sVar2 = FUN_008787f0();
      if (sVar2 != 0) {
        FUN_01472660(puVar9,0);
        FUN_01470a00(*(undefined8 *)(param_1 + 0x90),1,*(undefined4 *)(puVar9 + 0xd));
        *(undefined4 *)(param_1 + 0x7c) = 0xf;
        *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(puVar9[0xc] + 0x10);
        FUN_01479920(param_1,0x2cac17c0622774ef,0,0);
      }
    }
    else {
      FUN_01479920(param_1,0x2cac15c062277189,0,1);
      *(undefined4 *)(param_1 + 0x7c) = 0x12;
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    *(undefined4 *)(puVar9[0xc] + 0x14) = 0;
    FUN_01471470(*(undefined8 *)(param_1 + 0x90),0);
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar3 = (long *)(**(code **)*puVar9)(puVar9);
    lVar4 = FUN_0146e370();
    for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
    }
    if (*(int *)(param_1 + 0x9c) != *(int *)(puVar9[2] + 0x10)) {
      FUN_01472540(puVar9 + -10);
    }
    FUN_01038270(*(undefined8 *)(param_1 + 0x88),1);
    if (*(char *)(*(long *)(param_1 + 0x90) + 0x760) != '\0') {
      FUN_016b2d70(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x738),1);
    }
  }
  *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x730) = 0;
  return;
}


