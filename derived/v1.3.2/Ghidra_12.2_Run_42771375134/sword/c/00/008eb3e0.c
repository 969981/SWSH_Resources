/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008eb3e0; name: FUN_008eb3e0
 */


void FUN_008eb3e0(undefined8 *param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_02149980;
  param_1[2] = DAT_02149978;
  param_1[3] = uVar1;
  uVar1 = DAT_02149970;
  *param_1 = DAT_02149968;
  param_1[1] = uVar1;
  uVar1 = DAT_021499a0;
  param_1[6] = DAT_02149998;
  param_1[7] = uVar1;
  uVar1 = DAT_02149990;
  param_1[4] = DAT_02149988;
  param_1[5] = uVar1;
  uVar2 = DAT_021499b8;
  uVar1 = DAT_021499b0;
  param_1[8] = DAT_021499a8;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  *(undefined4 *)(param_1 + 0xb) = DAT_021499c0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0xf4b17a579f18960;
  param_1[0xe] = 0x82a2b175229d6a5b;
  param_1[0xf] = 0;
  FUN_01028fc0(param_1 + 0xd,param_3);
  *(undefined4 *)((long)param_1 + 0x5c) = 0x14;
  *(undefined2 *)(param_1 + 0xc) = 0;
  switch(param_2) {
  case 1:
    param_1[10] = 0x16f0000016e;
    *(undefined4 *)((long)param_1 + 0x5c) = 0x16;
    break;
  case 2:
    param_1[10] = 0x16f0000016e;
    param_1[0xb] = 0x1700000171;
    return;
  case 3:
    param_1[10] = 0x16f0000016e;
    param_1[0xb] = 0x1700000170;
    return;
  case 4:
    *(undefined4 *)((long)param_1 + 0x5c) = 0x15;
    *(undefined4 *)(param_1 + 10) = 0x172;
    return;
  case 5:
    *(undefined4 *)((long)param_1 + 0x5c) = 0x15;
    *(undefined4 *)(param_1 + 10) = 0x172;
    *(undefined1 *)(param_1 + 0xc) = 1;
    return;
  }
  return;
}


