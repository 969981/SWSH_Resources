/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012236e0; name: FUN_012236e0
 */


void FUN_012236e0(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,void *param_6,undefined1 param_7)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  memcpy(param_1 + 0x10,param_6,0x90);
  param_1[0xa0] = param_7;
  return;
}


