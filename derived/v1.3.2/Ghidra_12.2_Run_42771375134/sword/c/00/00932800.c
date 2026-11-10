/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00932800; name: FUN_00932800
 */


void FUN_00932800(undefined1 *param_1,undefined1 param_2,uint param_3,uint param_4,
                 undefined1 param_5)

{
  *param_1 = param_2;
  *(uint *)(param_1 + 4) = param_3 & 0xffff;
  *(uint *)(param_1 + 8) = param_4 & 0xffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = param_5;
  return;
}


