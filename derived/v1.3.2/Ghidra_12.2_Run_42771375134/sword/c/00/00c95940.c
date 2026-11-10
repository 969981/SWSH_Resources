/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c95940; name: FUN_00c95940
 */


undefined * FUN_00c95940(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_0271c4a8 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_0271c4a8), iVar1 == 0))
  {
    return PTR_DAT_0271c4b0;
  }
  if (((*PTR_DAT_0271c208 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271c208), iVar1 != 0))
  {
    if (((*PTR_DAT_0271c218 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0271c218), iVar1 != 0)) {
      uVar2 = FUN_00c72b60();
      *(undefined8 *)PTR_DAT_0271c220 = uVar2;
      __cxa_guard_release(PTR_DAT_0271c218);
    }
    *(undefined **)PTR_DAT_0271c210 = PTR_DAT_0271c220;
    __cxa_guard_release(PTR_DAT_0271c208);
  }
  *(undefined **)PTR_DAT_0271c4b0 = PTR_DAT_0271c210;
  __cxa_guard_release(PTR_DAT_0271c4a8);
  return PTR_DAT_0271c4b0;
}


