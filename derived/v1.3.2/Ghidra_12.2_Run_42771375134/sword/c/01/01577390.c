/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01577390; name: FUN_01577390
 */


undefined * FUN_01577390(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_0271ed88 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_0271ed88), iVar1 == 0))
  {
    return PTR_DAT_0271ed90;
  }
  if (((*PTR_DAT_027196c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_027196c0), iVar1 != 0))
  {
    if (((*PTR_DAT_027194f8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_027194f8), iVar1 != 0)) {
      if (((*PTR_DAT_02715078 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
        uVar2 = FUN_00a87090();
        *(undefined8 *)PTR_DAT_02715080 = uVar2;
        __cxa_guard_release(PTR_DAT_02715078);
      }
      *(undefined **)PTR_DAT_02719500 = PTR_DAT_02715080;
      __cxa_guard_release(PTR_DAT_027194f8);
    }
    *(undefined **)PTR_DAT_027196c8 = PTR_DAT_02719500;
    __cxa_guard_release(PTR_DAT_027196c0);
  }
  *(undefined **)PTR_DAT_0271ed90 = PTR_DAT_027196c8;
  __cxa_guard_release(PTR_DAT_0271ed88);
  return PTR_DAT_0271ed90;
}


