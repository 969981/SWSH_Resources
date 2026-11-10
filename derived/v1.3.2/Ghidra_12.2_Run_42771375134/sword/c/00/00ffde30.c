/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffde30; name: FUN_00ffde30
 */


undefined8 FUN_00ffde30(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x3c0) == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x58);
    uVar3 = 0;
    if (lVar1 != 0) {
      uVar3 = *param_2;
      plVar2 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      lVar1 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x58);
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
      }
      local_40 = &local_28;
      local_28 = 0;
      uStack_38 = uVar3;
      FUN_01000730(lVar1,&local_40,0);
      uVar3 = local_28;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
      }
    }
  }
  return uVar3;
}


