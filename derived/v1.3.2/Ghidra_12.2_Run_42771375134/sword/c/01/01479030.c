/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01479030; name: FUN_01479030
 */


void FUN_01479030(long param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  
  if (*(int *)(*(long *)(param_1 + 0x90) + 0x730) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_01479090:
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar10 != (undefined8 *)0x0) {
      plVar4 = (long *)(**(code **)*puVar10)(puVar10);
      lVar5 = FUN_0146e370();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar5) {
          puVar10 = puVar10 + -10;
          goto LAB_01479094;
        }
      }
      goto LAB_01479090;
    }
  }
LAB_01479094:
  iVar1 = *(int *)(*(long *)(param_1 + 0x90) + 0x730);
  if (iVar1 == 4 || iVar1 == 2) {
    iVar1 = *(int *)(puVar10 + 0xd);
    iVar2 = *(int *)(puVar10[0xc] + 0x10);
    if (iVar1 == iVar2) {
      uVar9 = 0xe;
LAB_01479208:
      *(undefined4 *)(param_1 + 0x7c) = uVar9;
      FUN_01472660(puVar10,1);
      FUN_014713f0(*(undefined8 *)(param_1 + 0x90),0xffffffff);
      FUN_01479920(param_1,0x2ca892c062245d19,0,0);
      uVar8 = FUN_01479ed0(param_1,iVar1);
      if ((uVar8 & 1) != 0) {
        FUN_0146bd00(*(long *)(*(long *)(param_1 + 0x90) + 0x5e0) + (long)iVar1 * 0x218);
      }
      uVar8 = FUN_01479ed0(param_1,iVar2);
      if ((uVar8 & 1) != 0) {
        FUN_0146bd00(*(long *)(*(long *)(param_1 + 0x90) + 0x5e0) + (long)iVar2 * 0x218);
      }
    }
    else {
      plVar4 = *(long **)(puVar10[0xc] + 8);
      uVar6 = (**(code **)(*plVar4 + 0x50))(plVar4,iVar1);
      uVar7 = (**(code **)(**(long **)(puVar10[0xc] + 8) + 0x50))
                        (*(long **)(puVar10[0xc] + 8),iVar2);
      uVar8 = FUN_0087d610(uVar7,2);
      if ((uVar8 & 1) == 0) {
        sVar3 = FUN_008787f0(uVar6);
        if (sVar3 != 0) {
          FUN_01470ad0(*(undefined8 *)(param_1 + 0x90),iVar1,1);
        }
        sVar3 = FUN_008787f0(uVar7);
        if (sVar3 != 0) {
          FUN_01470ad0(*(undefined8 *)(param_1 + 0x90),iVar2,1);
        }
        uVar9 = 0x10;
        goto LAB_01479208;
      }
      FUN_01479920(param_1,0x2cac15c062277189,0,1);
      *(undefined4 *)(param_1 + 0x7c) = 0x12;
    }
    FUN_01470a00(*(undefined8 *)(param_1 + 0x90),0,*(undefined4 *)(puVar10 + 0xd));
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar4 = (long *)(**(code **)*puVar10)(puVar10);
    lVar5 = FUN_0146e370();
    for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
    }
  }
  else {
    if (iVar1 != 1) goto LAB_014792ec;
    *(undefined4 *)(param_1 + 0x7c) = 1;
    *(undefined4 *)(puVar10[0xc] + 0x14) = 0;
    FUN_01471470(*(undefined8 *)(param_1 + 0x90),0);
    FUN_01470a00(*(undefined8 *)(param_1 + 0x90),0,*(undefined4 *)(puVar10 + 0xd));
    FUN_01038270(*(undefined8 *)(param_1 + 0x88),1);
    if (*(char *)(*(long *)(param_1 + 0x90) + 0x760) != '\0') {
      FUN_016b2d70(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x738),1);
    }
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar4 = (long *)(**(code **)*puVar10)(puVar10);
    lVar5 = FUN_0146e370();
    for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
    }
  }
  if (*(int *)(param_1 + 0x9c) != *(int *)(puVar10[2] + 0x10)) {
    FUN_01472540(puVar10 + -10);
  }
LAB_014792ec:
  *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x730) = 0;
  return;
}


