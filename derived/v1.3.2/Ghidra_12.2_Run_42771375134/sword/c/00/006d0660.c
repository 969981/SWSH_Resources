/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d0660; name: FUN_006d0660
 */


undefined * FUN_006d0660(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_02715318 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02715318), iVar1 != 0))
  {
    uVar2 = FUN_006d07c0();
    *(undefined8 *)PTR_DAT_02715320 = uVar2;
    __cxa_guard_release(PTR_DAT_02715318);
    return PTR_DAT_02715320;
  }
  return PTR_DAT_02715320;
}


