/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cde060; name: FUN_00cde060
 */


void FUN_00cde060(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  if ((*(long *)(param_1 + 0x4c0) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58), lVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar1 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    local_40 = &local_28;
    local_28 = 0;
    local_38 = 0xe2c06acab97c29c2;
    FUN_01037340(lVar1,&local_40,0);
    uVar3 = local_28;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    }
  }
  *(undefined8 *)(param_1 + 0x5d0) = uVar3;
  return;
}


