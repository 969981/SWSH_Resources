/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01068c10; name: FUN_01068c10
 */


undefined * FUN_01068c10(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_02723b48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02723b48), iVar1 != 0))
  {
    uVar2 = FUN_006f10c0();
    *(undefined8 *)PTR_DAT_02723b50 = uVar2;
    __cxa_guard_release(PTR_DAT_02723b48);
    return PTR_DAT_02723b50;
  }
  return PTR_DAT_02723b50;
}


