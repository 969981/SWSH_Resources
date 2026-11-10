/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ccfaa0; name: FUN_00ccfaa0
 */


void FUN_00ccfaa0(long param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_0271c800;
  param_1 = param_1 + 0x100;
  lVar2 = (long)param_2;
  if ((param_3 & 1) == 0) {
    FUN_00ffd010(param_1,PTR_DAT_0271c800 + lVar2 * 0x88 + 0x78);
    return;
  }
  FUN_00ffd010(param_1,PTR_DAT_0271c800 + lVar2 * 0x88 + 0x68);
  FUN_00ffd010(param_1,puVar1 + lVar2 * 0x88 + 0x70);
  return;
}


