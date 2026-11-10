/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0101cb00; name: FUN_0101cb00
 */


undefined8 FUN_0101cb00(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long local_38;
  
  FUN_00774040(&local_38);
  lVar4 = local_38;
  if (local_38 == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = *(long *)(local_38 + 0x70);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(lVar4 + 0x78);
    if (lVar4 != 0) {
      plVar2 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    *param_2 = lVar3;
    param_2[1] = lVar4;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    uVar1 = 1;
  }
  return uVar1;
}


