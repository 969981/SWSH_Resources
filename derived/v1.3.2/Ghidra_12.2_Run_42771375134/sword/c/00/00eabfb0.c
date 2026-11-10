/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eabfb0; name: FUN_00eabfb0
 */


undefined * FUN_00eabfb0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_02720158 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_02720158), iVar1 == 0))
  {
    return PTR_DAT_02720160;
  }
  if (((*PTR_DAT_0271ec78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271ec78), iVar1 != 0))
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
    *(undefined **)PTR_DAT_0271ec80 = PTR_DAT_02719500;
    __cxa_guard_release(PTR_DAT_0271ec78);
  }
  *(undefined **)PTR_DAT_02720160 = PTR_DAT_0271ec80;
  __cxa_guard_release(PTR_DAT_02720158);
  return PTR_DAT_02720160;
}


