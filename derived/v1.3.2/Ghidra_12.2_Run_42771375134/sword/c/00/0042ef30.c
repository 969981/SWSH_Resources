/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042ef30; name: FUN_0042ef30
 */


void FUN_0042ef30(long param_1)

{
  time_t tVar1;
  
  if (param_1 == 0) {
    tVar1 = time((time_t *)0x0);
    *(time_t *)PTR_DAT_02712b80 = tVar1;
    return;
  }
  *(long *)PTR_DAT_02712b80 = param_1;
  return;
}


