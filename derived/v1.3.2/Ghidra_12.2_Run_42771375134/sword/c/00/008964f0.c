/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008964f0; name: FUN_008964f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008964f0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long local_28;
  
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 == 0) {
    FUN_00896640(&local_28,0);
    *(undefined4 *)(param_2 + 4) = 0;
  }
  else {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_00896640(&local_28,lVar3);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    *(undefined4 *)(param_2 + 4) = 0;
  }
  if (local_28 == 0) {
    _DAT_00000090 = param_2;
    return;
  }
  puVar4 = *(undefined8 **)(local_28 + 0x60);
  plVar5 = (long *)(**(code **)*puVar4)(puVar4);
  if (((*PTR_DAT_027175d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_027175d8), iVar1 != 0))
  {
    uVar2 = FUN_0156a3b0();
    *(undefined8 *)PTR_DAT_027175e0 = uVar2;
    __cxa_guard_release(PTR_DAT_027175d8);
  }
  for (; plVar5 != (long *)PTR_DAT_027175e0; plVar5 = (long *)*plVar5) {
  }
  puVar4[8] = param_2;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


