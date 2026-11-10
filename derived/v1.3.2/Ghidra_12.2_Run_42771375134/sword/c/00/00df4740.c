/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df4740; name: FUN_00df4740
 */


void FUN_00df4740(undefined4 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5,undefined4 param_6,byte param_7,byte param_8,byte param_9,
                 byte param_10)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_60 [16];
  
  uVar2 = FUN_00a92fd0(CONCAT44((float)((ulong)*param_5 >> 0x20) - (float)((ulong)*param_3 >> 0x20),
                                (float)*param_5 - (float)*param_3),
                       (float)param_5[1] - (float)param_3[1]);
  local_60 = FUN_00a92cd0(uVar2,0,0);
  uVar1 = DAT_01d4bffc;
  if ((param_10 & 1) == 0) {
    uVar1 = DAT_01d4c60c;
  }
  *(byte *)(param_2 + 0xdc) = param_7 & 1;
  *(undefined4 *)(param_2 + 0xe4) = param_1;
  uVar1 = FUN_00df4810(uVar1,param_2,param_4,local_60);
  *(undefined4 *)(param_2 + 0xa0) = uVar1;
  *(undefined4 *)(param_2 + 0xac) = param_6;
  *(byte *)(param_2 + 0x108) = param_8 & 1;
  *(byte *)(param_2 + 0x109) = param_9 & 1;
  return;
}


