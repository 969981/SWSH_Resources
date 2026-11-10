/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc3e70; name: FUN_00dc3e70
 */


bool FUN_00dc3e70(long param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x420) + 0x80);
  bVar1 = false;
  if (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if (*(int *)(lVar6 + 0x54) == 0) {
      bVar1 = false;
    }
    else {
      puVar7 = *(undefined8 **)(lVar6 + 0x60);
      plVar3 = (long *)(**(code **)*puVar7)(puVar7);
      if (((*PTR_DAT_02715290 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_02715290), iVar2 != 0)) {
        uVar4 = FUN_01590a70();
        *(undefined8 *)PTR_DAT_02715298 = uVar4;
        __cxa_guard_release(PTR_DAT_02715290);
      }
      for (; plVar3 != (long *)PTR_DAT_02715298; plVar3 = (long *)*plVar3) {
      }
      bVar1 = puVar7[0x22] != 0;
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  return bVar1;
}


