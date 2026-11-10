/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cf860; name: FUN_004cf860
 */


void FUN_004cf860(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 local_40 [16];
  
  *param_1 = (long)(PTR_DAT_02713550 + 0x10);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1[9];
  while (local_40 = auVar4, auVar4._0_8_ != 0) {
    auVar4 = FUN_004cf990(param_1,local_40);
  }
  if (param_1[5] != 0) {
    *(undefined4 *)(param_1 + 6) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[5] = 0;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
  }
  if (param_1[10] != 0) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[10] = 0;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  puVar2 = PTR_DAT_02712e28;
  puVar3 = (undefined8 *)param_1[9];
  while (puVar3 != (undefined8 *)0x0) {
    if (puVar3[8] == 0) {
      param_1[9] = 0;
    }
    else {
      param_1[9] = puVar3[8];
    }
    *(int *)(param_1 + 8) = (int)param_1[8] + -1;
    uVar1 = *(undefined4 *)puVar2;
    (**(code **)*puVar3)(puVar3);
    FUN_004047f0(uVar1,puVar3);
    puVar3 = (undefined8 *)param_1[9];
  }
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


