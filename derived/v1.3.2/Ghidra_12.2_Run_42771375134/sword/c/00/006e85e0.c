/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e85e0; name: FUN_006e85e0
 */


void FUN_006e85e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[5] = 0x800000;
  param_1[6] = 0x1800000;
  param_1[7] = 0x2000000;
  param_1[8] = 0x100000;
  param_1[9] = 0x10000;
  param_1[10] = 0x2000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x43800000780;
  param_1[0xe] = 0x50000000b01;
  param_1[0xf] = 0xb01000002d0;
  *(undefined4 *)(param_1 + 0xb) = 0x1000;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)((long)param_1 + 0x5c) = 1;
  *(undefined4 *)(param_1 + 0x12) = 1;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x10] = 0x800000008;
  param_1[0x11] = 0x100000b01;
  uVar3 = DAT_01d4d7d8;
  uVar2 = DAT_01d4d7c8;
  uVar1 = DAT_01d4d7c0;
  param_1[2] = DAT_01d4d7d0;
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}


