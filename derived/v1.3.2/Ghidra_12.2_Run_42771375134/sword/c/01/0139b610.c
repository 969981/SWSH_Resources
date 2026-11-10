/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0139b610; name: FUN_0139b610
 */


undefined * FUN_0139b610(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_02728a88 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_02728a88), iVar1 == 0))
  {
    return PTR_DAT_02728a90;
  }
  if (((*PTR_DAT_0271df30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271df30), iVar1 != 0))
  {
    uVar2 = FUN_00706e40();
    *(undefined8 *)PTR_DAT_0271df38 = uVar2;
    __cxa_guard_release(PTR_DAT_0271df30);
  }
  *(undefined **)PTR_DAT_02728a90 = PTR_DAT_0271df38;
  __cxa_guard_release(PTR_DAT_02728a88);
  return PTR_DAT_02728a90;
}


