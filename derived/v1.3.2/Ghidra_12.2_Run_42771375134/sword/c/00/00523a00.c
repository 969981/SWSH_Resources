/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00523a00; name: FUN_00523a00
 */


undefined8
FUN_00523a00(long param_1,undefined4 param_2,byte param_3,undefined8 *param_4,undefined8 *param_5,
            undefined8 *param_6,byte param_7)

{
  *(undefined4 *)(param_1 + 0xc30) = param_2;
  *(byte *)(param_1 + 0xc34) = param_3 & 1;
  *(undefined8 *)(param_1 + 0xc38) = *param_4;
  *(undefined8 *)(param_1 + 0xc40) = *param_5;
  *(undefined8 *)(param_1 + 0xc48) = *param_6;
  *(byte *)(param_1 + 0xc36) = param_7 & 1;
  return 0;
}


