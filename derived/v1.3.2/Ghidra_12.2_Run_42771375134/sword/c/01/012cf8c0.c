/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012cf8c0; name: FUN_012cf8c0
 */


undefined * FUN_012cf8c0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_027275b8 & 1) != 0) || (iVar1 = __cxa_guard_acquire(PTR_DAT_027275b8), iVar1 == 0))
  {
    return PTR_DAT_027275a8;
  }
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02717528), iVar1 != 0))
  {
    uVar2 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar2;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  *(undefined **)PTR_DAT_027275a8 = PTR_DAT_02717530;
  __cxa_guard_release(PTR_DAT_027275b8);
  return PTR_DAT_027275a8;
}


