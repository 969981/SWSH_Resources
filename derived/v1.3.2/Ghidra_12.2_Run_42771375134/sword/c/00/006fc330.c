/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fc330; name: FUN_006fc330
 */


void FUN_006fc330(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 *param_6)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_48;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  lVar6 = param_2[3];
  param_1[3] = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  param_1[4] = *param_6;
  param_1[5] = param_6[1];
  param_1[6] = param_6[2];
  lVar6 = param_6[3];
  param_1[7] = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  param_1[8] = PTR_DAT_02710808 + 0x10;
  lVar6 = param_2[9];
  param_1[9] = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  if ((code *)param_2[0xc] != (code *)0x0) {
    (*(code *)param_2[0xc])(param_2 + 0xe,param_1 + 0xe);
    uVar3 = param_2[10];
    uVar8 = param_2[0xb];
    uVar4 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar4;
    param_1[10] = uVar3;
    param_1[0xb] = uVar8;
  }
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  if ((code *)param_2[0x1c] != (code *)0x0) {
    (*(code *)param_2[0x1c])(param_2 + 0x1e,param_1 + 0x1e);
    uVar3 = param_2[0x1a];
    uVar8 = param_2[0x1b];
    uVar4 = param_2[0x1d];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1d] = uVar4;
    param_1[0x1a] = uVar3;
    param_1[0x1b] = uVar8;
  }
  puVar1 = PTR_DAT_02710818 + 0x10;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[8] = puVar1;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  plVar2 = param_1 + 0x2a;
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar8 = param_3[2];
  uVar5 = param_3[3];
  param_1[0x32] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = param_4;
  *(undefined4 *)((long)param_1 + 0x1dc) = param_5;
  param_1[0x2e] = uVar3;
  param_1[0x2f] = uVar4;
  param_1[0x30] = uVar8;
  param_1[0x31] = uVar5;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  lVar6 = param_2[0x2a];
  if (lVar6 == 0) {
    *plVar2 = 0;
  }
  else {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    lVar7 = *plVar2;
    *plVar2 = lVar6;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
  }
  uVar3 = param_2[0x32];
  uVar8 = param_2[0x34];
  param_1[0x33] = param_2[0x33];
  param_1[0x34] = uVar8;
  param_1[0x32] = uVar3;
  lVar6 = param_2[0x2b];
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = param_1[0x2b];
  param_1[0x2b] = lVar6;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  uVar3 = param_2[0x35];
  uVar8 = param_2[0x37];
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = uVar8;
  param_1[0x35] = uVar3;
  lVar6 = param_2[0x2c];
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = param_1[0x2c];
  param_1[0x2c] = lVar6;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  uVar3 = param_2[0x39];
  uVar8 = param_2[0x3a];
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = uVar3;
  param_1[0x3a] = uVar8;
  if (*(char *)(param_1 + 0x3c) != '\0') {
    thunk_FUN_006f9fd0(&local_48,param_1 + 0x2e);
    if (param_1[0x2d] != 0) {
      (**(code **)(*(long *)(param_1[0x2d] + 0x48) + 0x18))();
      param_1[0x2d] = 0;
    }
    param_1[0x2d] = local_48;
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  return;
}


