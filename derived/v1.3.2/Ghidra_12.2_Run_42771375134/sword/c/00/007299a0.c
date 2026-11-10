/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007299a0; name: FUN_007299a0
 */


void FUN_007299a0(long *param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)PTR_DAT_027154f0 + 0x10);
  *param_1 = (long)(PTR_DAT_02715bb8 + 0x10);
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = param_3;
  param_1[2] = lVar1;
  return;
}


