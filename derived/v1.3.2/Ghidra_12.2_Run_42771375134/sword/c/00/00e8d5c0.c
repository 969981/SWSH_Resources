/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8d5c0; name: FUN_00e8d5c0
 */


undefined * FUN_00e8d5c0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_0271fe90 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_0271fe90), iVar1 == 0))
  {
    return PTR_DAT_0271fe98;
  }
  if (((*PTR_DAT_0271ee10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271ee10), iVar1 != 0))
  {
    uVar2 = FUN_00db8eb0();
    *(undefined8 *)PTR_DAT_0271ee18 = uVar2;
    __cxa_guard_release(PTR_DAT_0271ee10);
  }
  *(undefined **)PTR_DAT_0271fe98 = PTR_DAT_0271ee18;
  __cxa_guard_release(PTR_DAT_0271fe90);
  return PTR_DAT_0271fe98;
}


