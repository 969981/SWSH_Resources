/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079b4f0; name: FUN_0079b4f0
 */


undefined8 * FUN_0079b4f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  lVar7 = param_2[3];
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar4 = param_1[3];
  param_1[3] = lVar7;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  lVar7 = param_2[7];
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar4 = param_1[7];
  param_1[7] = lVar7;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  lVar7 = param_2[9];
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar4 = param_1[9];
  param_1[9] = lVar7;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  pcVar5 = (code *)param_1[0xb];
  if (pcVar5 != (code *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    (*pcVar5)(param_1 + 0xe);
  }
  if ((code *)param_2[0xc] != (code *)0x0) {
    (*(code *)param_2[0xc])(param_2 + 0xe,param_1 + 0xe);
    uVar6 = param_2[10];
    uVar1 = param_2[0xb];
    uVar2 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar2;
    param_1[10] = uVar6;
    param_1[0xb] = uVar1;
  }
  pcVar5 = (code *)param_1[0x1b];
  if (pcVar5 != (code *)0x0) {
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    (*pcVar5)(param_1 + 0x1e);
  }
  if ((code *)param_2[0x1c] != (code *)0x0) {
    (*(code *)param_2[0x1c])(param_2 + 0x1e,param_1 + 0x1e);
    uVar6 = param_2[0x1a];
    uVar1 = param_2[0x1b];
    uVar2 = param_2[0x1d];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1d] = uVar2;
    param_1[0x1a] = uVar6;
    param_1[0x1b] = uVar1;
  }
  lVar7 = param_2[0x2a];
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar4 = param_1[0x2a];
  param_1[0x2a] = lVar7;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  lVar7 = param_2[0x2b];
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar4 = param_1[0x2b];
  param_1[0x2b] = lVar7;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  lVar7 = param_2[0x2c];
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar4 = param_1[0x2c];
  param_1[0x2c] = lVar7;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  lVar7 = param_2[0x2d];
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar4 = param_1[0x2d];
  param_1[0x2d] = lVar7;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  param_1[0x2f] = param_2[0x2f];
  uVar6 = param_2[0x31];
  param_1[0x33] = param_2[0x33];
  param_1[0x31] = uVar6;
  uVar6 = param_2[0x35];
  param_1[0x37] = param_2[0x37];
  param_1[0x35] = uVar6;
  uVar6 = param_2[0x39];
  uVar3 = *(undefined1 *)(param_2 + 0x3c);
  param_1[0x3b] = param_2[0x3b];
  param_1[0x39] = uVar6;
  uVar6 = param_2[0x2e];
  param_1[0x30] = param_2[0x30];
  param_1[0x2e] = uVar6;
  uVar6 = param_2[0x32];
  param_1[0x34] = param_2[0x34];
  param_1[0x32] = uVar6;
  uVar6 = param_2[0x36];
  param_1[0x38] = param_2[0x38];
  param_1[0x36] = uVar6;
  uVar6 = param_2[0x3a];
  *(undefined1 *)(param_1 + 0x3c) = uVar3;
  param_1[0x3a] = uVar6;
  return param_1;
}


