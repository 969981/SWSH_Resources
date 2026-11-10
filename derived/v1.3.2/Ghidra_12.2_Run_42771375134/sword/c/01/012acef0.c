/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012acef0; name: FUN_012acef0
 */


void FUN_012acef0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_012acef0(param_1,*param_2);
  FUN_012acef0(param_1,param_2[1]);
  FUN_017d3290(param_2 + 9);
  param_2[4] = PTR_DAT_027167e8 + 0x10;
  FUN_017d0720();
  FUN_017cd7a0(param_2);
  return;
}


