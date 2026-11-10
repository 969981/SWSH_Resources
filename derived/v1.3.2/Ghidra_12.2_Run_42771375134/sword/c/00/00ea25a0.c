/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ea25a0; name: FUN_00ea25a0
 */


undefined * FUN_00ea25a0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_0271ed78 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_0271ed78), iVar1 == 0))
  {
    return PTR_DAT_0271ed80;
  }
  if (((*PTR_DAT_0271ed88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271ed88), iVar1 != 0))
  {
    uVar2 = FUN_0156b190();
    *(undefined8 *)PTR_DAT_0271ed90 = uVar2;
    __cxa_guard_release(PTR_DAT_0271ed88);
  }
  *(undefined **)PTR_DAT_0271ed80 = PTR_DAT_0271ed90;
  __cxa_guard_release(PTR_DAT_0271ed78);
  return PTR_DAT_0271ed80;
}


