/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0146d8d0; name: FUN_0146d8d0
 */


void FUN_0146d8d0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *local_40;
  undefined8 local_38;
  long local_28;
  
  if ((*(long *)(param_1 + 0x4c0) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58), lVar2 != 0)) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar2 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_40 = &local_28;
    local_28 = 0;
    local_38 = 0x18cd1891cbc1757a;
    FUN_008a0cd0(lVar2,&local_40,0);
    lVar1 = local_28;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
    if (lVar1 != 0) {
      lVar2 = *param_2;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      if (*(long *)(lVar1 + 0x98) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + 0x98) + 0x48) + 0x18))();
        *(undefined8 *)(lVar1 + 0x98) = 0;
      }
      *(long *)(lVar1 + 0x98) = lVar2;
    }
  }
  return;
}


