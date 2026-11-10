/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004794f0; name: FUN_004794f0
 */


void FUN_004794f0(ulong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  
  puVar3 = PTR_DAT_02712a90;
  puVar6 = (ulong *)*param_1;
  puVar7 = (ulong *)0x0;
  if (puVar6 != (ulong *)0x0) {
    do {
      *(int *)(puVar6[1] + 0x74) = *(int *)(puVar6[1] + 0x74) + -1;
      puVar5 = (undefined8 *)puVar6[1];
      iVar2 = *(int *)((long)puVar5 + 100) + -1;
      *(int *)((long)puVar5 + 100) = iVar2;
      if (iVar2 == 0) {
        uVar1 = *(undefined4 *)puVar3;
        (**(code **)*puVar5)(puVar5);
        FUN_00404870(uVar1,puVar5);
        uVar4 = puVar6[2];
      }
      else {
        uVar4 = puVar6[2];
      }
      if (uVar4 != 0) {
        *(undefined4 *)(puVar6 + 3) = 0;
        FUN_00404870(*(undefined4 *)puVar3);
        puVar6[2] = 0;
        *(undefined4 *)((long)puVar6 + 0x1c) = 0;
      }
      puVar6 = (ulong *)*puVar6;
    } while (puVar6 != (ulong *)0x0);
    puVar7 = (ulong *)*param_1;
  }
  if (puVar7 == (ulong *)0x0) {
    puVar6 = (ulong *)param_1[2];
    if (puVar6 == (ulong *)0x0) {
      uVar4 = param_1[3];
      goto joined_r0x00479660;
    }
  }
  else {
    do {
      puVar6 = puVar7;
      *param_1 = *puVar6;
      if ((ulong *)param_1[1] == puVar6) {
        param_1[1] = 0;
      }
      *puVar6 = param_1[2];
      param_1[2] = (ulong)puVar6;
      *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + -1;
      puVar7 = (ulong *)*param_1;
    } while ((ulong *)*param_1 != (ulong *)0x0);
  }
  puVar3 = PTR_DAT_02712a90;
  do {
    uVar4 = param_1[3];
    uVar8 = *puVar6;
    if ((puVar6 < uVar4) || (uVar4 + (ulong)(uint)param_1[4] * 0x20 <= puVar6)) {
      FUN_00404870(*(undefined4 *)puVar3);
    }
    puVar6 = (ulong *)uVar8;
  } while (uVar8 != 0);
  uVar4 = param_1[3];
joined_r0x00479660:
  if (uVar4 != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[3] = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


