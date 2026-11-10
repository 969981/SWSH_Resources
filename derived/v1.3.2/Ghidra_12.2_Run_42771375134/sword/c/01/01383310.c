/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01383310; name: FUN_01383310
 */


undefined * FUN_01383310(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_02728aa8 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_02728aa8), iVar1 == 0))
  {
    return PTR_DAT_02728ab0;
  }
  if (((*PTR_DAT_0271df30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271df30), iVar1 != 0))
  {
    uVar2 = FUN_00706e40();
    *(undefined8 *)PTR_DAT_0271df38 = uVar2;
    __cxa_guard_release(PTR_DAT_0271df30);
  }
  *(undefined **)PTR_DAT_02728ab0 = PTR_DAT_0271df38;
  __cxa_guard_release(PTR_DAT_02728aa8);
  return PTR_DAT_02728ab0;
}


