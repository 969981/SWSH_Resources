/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b8c580; name: FUN_00b8c580
 */


void FUN_00b8c580(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long local_28;
  
  FUN_00774040(&local_28,*(undefined8 *)(param_2 + 0x10));
  lVar1 = local_28;
  plVar3 = (long *)(*(code *)**(undefined8 **)(local_28 + 0x50))((undefined8 *)(local_28 + 0x50));
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02717528), iVar2 != 0))
  {
    uVar4 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar4;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  do {
    if (plVar3 == (long *)0x0) {
      *param_1 = 0;
joined_r0x00b8c628:
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
      return;
    }
    if (plVar3 == (long *)PTR_DAT_02717530) {
      *param_1 = lVar1;
      plVar3 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      goto joined_r0x00b8c628;
    }
    plVar3 = (long *)*plVar3;
  } while( true );
}


