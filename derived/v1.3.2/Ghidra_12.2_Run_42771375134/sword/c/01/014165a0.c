/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014165a0; name: FUN_014165a0
 */


long FUN_014165a0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *local_40;
  undefined8 local_38;
  long local_28;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    return *(long *)(param_1 + 0x28);
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar3 = *(long *)(param_1 + 0x20);
    lVar1 = *(long *)(lVar3 + 0x4c0);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    lVar1 = *(long *)(lVar3 + 0x4c0);
  }
  else {
    lVar3 = 0;
    lVar1 = lRam00000000000004c0;
  }
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x58) == 0)) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    plVar2 = (long *)(*(long *)(lVar1 + 0x58) + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar3 = *(long *)(*(long *)(lVar3 + 0x4c0) + 0x58);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_40 = &local_28;
    local_28 = 0;
    local_38 = 0x18cd1891cbc1757a;
    FUN_008a0cd0(lVar3,&local_40,0);
    lVar1 = local_28;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    *(long *)(param_1 + 0x28) = lVar1;
    if (lVar1 != 0) {
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


