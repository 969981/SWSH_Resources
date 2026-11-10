/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fc0c0; name: FUN_006fc0c0
 */


void FUN_006fc0c0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  param_1[4] = *param_5;
  param_1[5] = param_5[1];
  param_1[6] = param_5[2];
  lVar3 = param_5[3];
  param_1[7] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  param_1[8] = PTR_DAT_02710808 + 0x10;
  lVar3 = param_2[9];
  param_1[9] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  if ((code *)param_2[0xc] != (code *)0x0) {
    (*(code *)param_2[0xc])(param_2 + 0xe,param_1 + 0xe);
    uVar5 = param_2[10];
    uVar6 = param_2[0xb];
    uVar1 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar1;
    param_1[10] = uVar5;
    param_1[0xb] = uVar6;
  }
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  if ((code *)param_2[0x1c] != (code *)0x0) {
    (*(code *)param_2[0x1c])(param_2 + 0x1e,param_1 + 0x1e);
    uVar5 = param_2[0x1a];
    uVar6 = param_2[0x1b];
    uVar1 = param_2[0x1d];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1d] = uVar1;
    param_1[0x1a] = uVar5;
    param_1[0x1b] = uVar6;
  }
  puVar2 = PTR_DAT_02710818;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[8] = puVar2 + 0x10;
  lVar3 = param_2[0x2d];
  param_1[0x2d] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  uVar5 = param_2[0x2f];
  param_1[0x31] = param_2[0x31];
  uVar6 = param_2[0x30];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = uVar5;
  param_1[0x30] = uVar6;
  param_1[0x32] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = param_3;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)((long)param_1 + 0x1dc) = param_4;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  lVar3 = param_2[0x2a];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = param_1[0x2a];
  param_1[0x2a] = lVar3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  uVar5 = param_2[0x32];
  uVar6 = param_2[0x34];
  param_1[0x33] = param_2[0x33];
  param_1[0x34] = uVar6;
  param_1[0x32] = uVar5;
  lVar3 = param_2[0x2b];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = param_1[0x2b];
  param_1[0x2b] = lVar3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  uVar5 = param_2[0x35];
  uVar6 = param_2[0x37];
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = uVar6;
  param_1[0x35] = uVar5;
  lVar3 = param_2[0x2c];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = param_1[0x2c];
  param_1[0x2c] = lVar3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  uVar5 = param_2[0x38];
  uVar6 = param_2[0x3a];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = uVar6;
  param_1[0x38] = uVar5;
  return;
}


