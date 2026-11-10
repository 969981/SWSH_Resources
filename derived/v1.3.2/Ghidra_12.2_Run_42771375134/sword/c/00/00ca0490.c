/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca0490; name: FUN_00ca0490
 */


undefined * FUN_00ca0490(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_0271c2e8 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_0271c2e8), iVar1 == 0))
  {
    return PTR_DAT_0271c2f0;
  }
  if (((*PTR_DAT_0271c2a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271c2a8), iVar1 != 0))
  {
    uVar2 = FUN_00c79910();
    *(undefined8 *)PTR_DAT_0271c298 = uVar2;
    __cxa_guard_release(PTR_DAT_0271c2a8);
  }
  *(undefined **)PTR_DAT_0271c2f0 = PTR_DAT_0271c298;
  __cxa_guard_release(PTR_DAT_0271c2e8);
  return PTR_DAT_0271c2f0;
}


