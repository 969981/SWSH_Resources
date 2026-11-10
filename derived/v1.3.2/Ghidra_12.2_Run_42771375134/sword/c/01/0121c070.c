/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121c070; name: FUN_0121c070
 */


void FUN_0121c070(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4,
                 byte param_5,byte param_6,byte param_7,undefined1 param_8,undefined2 param_9,
                 undefined2 param_10,undefined4 param_11,undefined2 param_12,undefined2 param_13,
                 undefined2 param_14,undefined2 param_15,undefined1 param_16,undefined1 param_17)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x1c) = param_3;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined2 *)((long)param_1 + 0x22) = param_9;
  *(undefined2 *)((long)param_1 + 0x24) = param_10;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(byte *)((long)param_1 + 0x1e) = param_5 & 1;
  *(byte *)((long)param_1 + 0x1f) = param_6 & 1;
  *(byte *)(param_1 + 4) = param_7 & 1;
  *(undefined1 *)((long)param_1 + 0x1d) = param_4;
  *(undefined2 *)((long)param_1 + 0x2e) = param_13;
  *(undefined2 *)((long)param_1 + 0x32) = param_15;
  *(undefined1 *)((long)param_1 + 0x34) = param_16;
  *(undefined4 *)(param_1 + 5) = param_11;
  *(undefined1 *)((long)param_1 + 0x21) = param_8;
  *(undefined2 *)((long)param_1 + 0x2c) = param_12;
  *(undefined2 *)(param_1 + 6) = param_14;
  *(undefined1 *)((long)param_1 + 0x35) = param_17;
  return;
}


