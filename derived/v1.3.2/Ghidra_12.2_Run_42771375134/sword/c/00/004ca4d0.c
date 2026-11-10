/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ca4d0; name: FUN_004ca4d0
 */


bool FUN_004ca4d0(long *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if ((long *)*param_1 != (long *)0x0) {
    iVar2 = (**(code **)(*(long *)*param_1 + 0x88))();
    bVar1 = iVar2 == 10;
  }
  return bVar1;
}


