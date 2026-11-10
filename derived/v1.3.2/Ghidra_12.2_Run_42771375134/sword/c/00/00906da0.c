/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00906da0; name: FUN_00906da0
 */


void FUN_00906da0(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_30;
  long local_28;
  
  uVar1 = FUN_008f9910(*(undefined8 *)(param_1 + 0x58),param_3);
  FUN_008fb160(&local_28,*(undefined8 *)(param_1 + 0x58),uVar1,param_2);
  if (local_28 != 0) {
    uVar2 = FUN_0077d470();
    FUN_0077e020(uVar2,0);
    plVar3 = *(long **)(param_1 + 0x358);
    local_30 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    (**(code **)(*plVar3 + 0x150))(plVar3,&local_30);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


