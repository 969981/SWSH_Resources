/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e2d4c0; name: FUN_00e2d4c0
 */


undefined * FUN_00e2d4c0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_0271f690 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_0271f690), iVar1 == 0))
  {
    return PTR_DAT_0271f698;
  }
  if (((*PTR_DAT_027196b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_027196b0), iVar1 != 0))
  {
    uVar2 = FUN_0156b190();
    *(undefined8 *)PTR_DAT_027196b8 = uVar2;
    __cxa_guard_release(PTR_DAT_027196b0);
  }
  *(undefined **)PTR_DAT_0271f698 = PTR_DAT_027196b8;
  __cxa_guard_release(PTR_DAT_0271f690);
  return PTR_DAT_0271f698;
}


