/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffdbc0; name: FUN_00ffdbc0
 */


undefined8 FUN_00ffdbc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  if ((*(long *)(param_1 + 0x3c0) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x58), lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x58);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_40 = &local_28;
    local_28 = 0;
    uStack_38 = param_2;
    FUN_01000360(lVar2,&local_40,0);
    uVar1 = local_28;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
  }
  return uVar1;
}


