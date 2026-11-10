/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd1cc0; name: FUN_00bd1cc0
 */


void FUN_00bd1cc0(long param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  *(undefined4 *)(param_1 + 0x3008) = param_2;
  *(uint *)(param_1 + 0x300c) =
       param_3 & 0xff | (param_4 & 0x3f) << 8 | (param_5 & 0x3f) << 0xe |
       *(uint *)(param_1 + 0x300c) & 0xfff00000;
  FUN_00bd1a80(param_1,1);
  *(undefined8 *)(param_1 + 0x3008) = 2;
  return;
}


