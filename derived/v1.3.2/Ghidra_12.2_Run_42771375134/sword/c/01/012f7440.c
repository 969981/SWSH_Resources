/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f7440; name: FUN_012f7440
 */


undefined * FUN_012f7440(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_027274c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_027274c0), iVar1 != 0))
  {
    uVar2 = FUN_012c1b00();
    *(undefined8 *)PTR_DAT_027274c8 = uVar2;
    __cxa_guard_release(PTR_DAT_027274c0);
    return PTR_DAT_027274c8;
  }
  return PTR_DAT_027274c8;
}


