/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcb720; name: FUN_00bcb720
 */


long * FUN_00bcb720(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_28;
  
  lVar4 = *(long *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_28 = 0xcf4e8c6b868ed555;
  plVar2 = (long *)FUN_0167b6b0(lVar4,&local_28);
  if (((*PTR_DAT_02716318 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02716318), iVar1 != 0))
  {
    *(undefined8 *)PTR_DAT_02716320 = 0;
    __cxa_guard_release(PTR_DAT_02716318);
  }
  if (plVar2 != (long *)0x0) {
    for (plVar3 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2); plVar3 != (long *)0x0;
        plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_02716320) goto LAB_00bcb7b0;
    }
    plVar2 = (long *)0x0;
  }
LAB_00bcb7b0:
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return plVar2;
}


