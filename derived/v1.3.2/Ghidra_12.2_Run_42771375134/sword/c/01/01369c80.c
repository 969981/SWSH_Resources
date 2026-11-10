/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01369c80; name: FUN_01369c80
 */


undefined * FUN_01369c80(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_02727b18 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_02727b18), iVar1 == 0))
  {
    return PTR_DAT_02727b20;
  }
  if (((*PTR_DAT_027278c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_027278c0), iVar1 != 0))
  {
    uVar2 = FUN_00d3ff90();
    *(undefined8 *)PTR_DAT_027278c8 = uVar2;
    __cxa_guard_release(PTR_DAT_027278c0);
  }
  *(undefined **)PTR_DAT_02727b20 = PTR_DAT_027278c8;
  __cxa_guard_release(PTR_DAT_02727b18);
  return PTR_DAT_02727b20;
}


