/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f7320; name: FUN_012f7320
 */


void FUN_012f7320(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long local_38;
  
  puVar1 = PTR_DAT_02710848;
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar2 == 0) {
    FUN_01009f60(&local_38,0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_01009f60(&local_38,lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  FUN_00dab4e0(local_38,*(undefined4 *)(param_1 + 0x60));
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar2 = *(long *)(*(long *)puVar1 + 0x90);
  if (lVar2 == 0) {
    FUN_01009f60(&local_38,0);
    FUN_00da89d0(local_38);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_01009f60(&local_38,lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    FUN_00da89d0(local_38);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


