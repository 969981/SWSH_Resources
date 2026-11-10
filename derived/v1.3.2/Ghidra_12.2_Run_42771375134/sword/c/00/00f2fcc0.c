/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2fcc0; name: FUN_00f2fcc0
 */


undefined * FUN_00f2fcc0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_02720968 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02720968), iVar1 != 0))
  {
    uVar2 = FUN_00f10020();
    *(undefined8 *)PTR_DAT_02720970 = uVar2;
    __cxa_guard_release(PTR_DAT_02720968);
    return PTR_DAT_02720970;
  }
  return PTR_DAT_02720970;
}


