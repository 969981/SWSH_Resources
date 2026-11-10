/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df4c80; name: FUN_00df4c80
 */


void FUN_00df4c80(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,byte param_6,byte param_7,byte param_8)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_2 + 0xe4) = param_1;
  *(byte *)(param_2 + 0xdc) = param_6 & 1;
  uVar1 = FUN_00df4810(0);
  *(undefined4 *)(param_2 + 0xa0) = uVar1;
  *(undefined4 *)(param_2 + 0xac) = param_5;
  *(byte *)(param_2 + 0x108) = param_7 & 1;
  *(byte *)(param_2 + 0x109) = param_8 & 1;
  return;
}


