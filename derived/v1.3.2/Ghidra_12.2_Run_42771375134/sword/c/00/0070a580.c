/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0070a580; name: FUN_0070a580
 */


undefined * FUN_0070a580(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_027159e0 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_027159e0), iVar1 == 0))
  {
    return PTR_DAT_027159e8;
  }
  if (((*PTR_DAT_02715888 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02715888), iVar1 != 0))
  {
    uVar2 = FUN_00702ff0();
    *(undefined8 *)PTR_DAT_02715890 = uVar2;
    __cxa_guard_release(PTR_DAT_02715888);
  }
  *(undefined **)PTR_DAT_027159e8 = PTR_DAT_02715890;
  __cxa_guard_release(PTR_DAT_027159e0);
  return PTR_DAT_027159e8;
}


