/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01356e50; name: FUN_01356e50
 */


long FUN_01356e50(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long local_18;
  
  FUN_01312100(&local_18);
  lVar4 = local_18;
  plVar2 = (long *)(*(code *)**(undefined8 **)(local_18 + 0x50))((undefined8 *)(local_18 + 0x50));
  if (((*PTR_DAT_02727750 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02727750), iVar1 != 0))
  {
    if (((*PTR_DAT_0271df20 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar1 != 0)) {
      if (((*PTR_DAT_0271df30 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_0271df30), iVar1 != 0)) {
        uVar3 = FUN_00706e40();
        *(undefined8 *)PTR_DAT_0271df38 = uVar3;
        __cxa_guard_release(PTR_DAT_0271df30);
      }
      *(undefined **)PTR_DAT_0271df28 = PTR_DAT_0271df38;
      __cxa_guard_release(PTR_DAT_0271df20);
    }
    *(undefined **)PTR_DAT_02727758 = PTR_DAT_0271df28;
    __cxa_guard_release(PTR_DAT_02727750);
  }
  for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    if (plVar2 == (long *)PTR_DAT_02727758) goto joined_r0x01356ee0;
  }
  lVar4 = 0;
joined_r0x01356ee0:
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return lVar4;
}


