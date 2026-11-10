/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007874a0; name: FUN_007874a0
 */


undefined * FUN_007874a0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_02716338 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02716338), iVar1 != 0))
  {
    uVar2 = FUN_00702ff0();
    *(undefined8 *)PTR_DAT_02716340 = uVar2;
    __cxa_guard_release(PTR_DAT_02716338);
    return PTR_DAT_02716340;
  }
  return PTR_DAT_02716340;
}


