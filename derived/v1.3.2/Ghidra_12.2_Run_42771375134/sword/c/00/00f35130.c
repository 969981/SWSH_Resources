/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f35130; name: FUN_00f35130
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f35130(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_28;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    return;
  }
  FUN_00fab200();
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x60);
  if (lVar1 == 0) {
    _DAT_00000140 = *(undefined4 *)(param_1 + 0x28);
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    *(undefined4 *)(lVar1 + 0x140) = *(undefined4 *)(param_1 + 0x28);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(*(long *)(lVar1 + 0x60) + 0x610);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  local_28 = *(long *)(param_1 + 0x20);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN_00fad100(lVar3,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  lVar1 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  return;
}


