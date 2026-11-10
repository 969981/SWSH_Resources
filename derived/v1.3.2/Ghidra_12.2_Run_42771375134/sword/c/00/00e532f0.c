/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e532f0; name: FUN_00e532f0
 */


undefined * FUN_00e532f0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_0271e808 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_0271e808), iVar1 == 0))
  {
    return PTR_DAT_0271e810;
  }
  if (((*PTR_DAT_0271e818 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271e818), iVar1 != 0))
  {
    uVar2 = FUN_00db8eb0();
    *(undefined8 *)PTR_DAT_0271e820 = uVar2;
    __cxa_guard_release(PTR_DAT_0271e818);
  }
  *(undefined **)PTR_DAT_0271e810 = PTR_DAT_0271e820;
  __cxa_guard_release(PTR_DAT_0271e808);
  return PTR_DAT_0271e810;
}


