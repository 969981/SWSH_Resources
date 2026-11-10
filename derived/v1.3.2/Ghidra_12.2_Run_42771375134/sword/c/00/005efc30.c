/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005efc30; name: FUN_005efc30
 */


void FUN_005efc30(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = param_1 + 6;
  *param_1 = param_2;
  param_1[1] = (long)plVar3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x40;
  param_1[5] = 1;
  if (param_2 == 0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    plVar3 = (long *)param_1[1];
    *param_1 = lVar2;
  }
  *(undefined1 *)plVar3 = 0;
  param_1[0x15] = 0x800000000;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  lVar2 = FUN_005bc740();
  if (lVar2 == 0) {
    lVar2 = FUN_005bc6f0();
  }
  else {
    lVar2 = FUN_005bc740();
  }
  param_1[0x20] = lVar2;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  lVar2 = FUN_005bc740();
  if (lVar2 == 0) {
    lVar2 = FUN_005bc6f0();
  }
  else {
    lVar2 = FUN_005bc740();
  }
  param_1[0x2c] = -0x100000000;
  param_1[0x26] = lVar2;
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x16c) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x176) = 0;
  *(undefined2 *)((long)param_1 + 0x174) = 0;
  param_1[0x18] = 0;
  param_1[0x2f] = -1;
  param_1[0x30] = -1;
  puVar1 = PTR_DAT_02714328 + 0x10;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x31] = (long)puVar1;
  param_1[0x32] = param_2;
  param_1[0x35] = 1;
  param_1[0x36] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x32] = lVar2;
  }
  puVar1 = PTR_DAT_02714340;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  param_1[0x3f] = 0x18;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3b] = (long)(puVar1 + 0x10);
  param_1[0x3c] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x3c] = lVar2;
  }
  plVar3 = param_1 + 0x4b;
  param_1[0x45] = param_2;
  param_1[0x49] = 0x80;
  param_1[0x46] = (long)plVar3;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 1;
  if (param_2 == 0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    plVar3 = (long *)param_1[0x46];
    param_1[0x45] = lVar2;
  }
  *(undefined1 *)plVar3 = 0;
  plVar3 = param_1 + 0x61;
  param_1[0x5f] = 0x80;
  param_1[0x5b] = param_2;
  param_1[0x5c] = (long)plVar3;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 1;
  if (param_2 == 0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    plVar3 = (long *)param_1[0x5c];
    param_1[0x5b] = lVar2;
  }
  *(undefined1 *)plVar3 = 0;
  param_1[0x71] = -0x100000000;
  *(undefined4 *)(param_1 + 0x72) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x394) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x39e) = 0;
  *(undefined2 *)((long)param_1 + 0x39c) = 0;
  return;
}


