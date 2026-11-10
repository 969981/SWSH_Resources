/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbf7d0; name: FUN_00dbf7d0
 */


void FUN_00dbf7d0(long param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (((*(long **)(param_1 + 0x418) != *(long **)(param_1 + 0x420)) &&
      (lVar4 = **(long **)(param_1 + 0x418), lVar4 != 0)) &&
     (puVar5 = *(undefined8 **)(lVar4 + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    if (((*PTR_DAT_027150a8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar1 != 0)) {
      uVar3 = FUN_00706e40();
      *(undefined8 *)PTR_DAT_027150b0 = uVar3;
      __cxa_guard_release(PTR_DAT_027150a8);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_027150b0) {
        FUN_0069c580(puVar5 + -10,param_2 & 1);
        return;
      }
    }
  }
  return;
}


