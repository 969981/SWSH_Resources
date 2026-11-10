/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00723bf0; name: FUN_00723bf0
 */


void FUN_00723bf0(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)*(int *)PTR_DAT_02715500 * 0x70;
  param_1 = param_1 + lVar1;
  FUN_0199d360(*(long *)(param_2 + 0x58) + (long)*(int *)PTR_DAT_02715500 * 0x170,param_1 + 0x58,0,
               param_3 + lVar1 + 0x58,0,
               (long)*(int *)(param_1 + 0xc4) * (long)*(int *)(param_1 + 0xc0));
  return;
}


