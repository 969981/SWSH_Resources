/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00638f00; name: FUN_00638f00
 */


void FUN_00638f00(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_006340b0(param_1,*(undefined8 *)(param_2 + 8));
  puVar1 = PTR_DAT_027146a8;
  param_1[0x2f] = param_2;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


