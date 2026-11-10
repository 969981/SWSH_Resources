/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014108b0; name: FUN_014108b0
 */


undefined * FUN_014108b0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_027297c8 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_027297c8), iVar1 == 0))
  {
    return PTR_DAT_027297d0;
  }
  if (((*PTR_DAT_02717aa8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02717aa8), iVar1 != 0))
  {
    if (((*PTR_DAT_02717908 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02717908), iVar1 != 0)) {
      uVar2 = FUN_00ff92a0();
      *(undefined8 *)PTR_DAT_02717910 = uVar2;
      __cxa_guard_release(PTR_DAT_02717908);
    }
    *(undefined **)PTR_DAT_02717ab0 = PTR_DAT_02717910;
    __cxa_guard_release(PTR_DAT_02717aa8);
  }
  *(undefined **)PTR_DAT_027297d0 = PTR_DAT_02717ab0;
  __cxa_guard_release(PTR_DAT_027297c8);
  return PTR_DAT_027297d0;
}


