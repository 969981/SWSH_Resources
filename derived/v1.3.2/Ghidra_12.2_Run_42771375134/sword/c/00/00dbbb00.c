/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbbb00; name: FUN_00dbbb00
 */


void FUN_00dbbb00(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long local_38;
  
  plVar1 = *(long **)(param_1 + 0xb0);
  plVar3 = *(long **)(param_1 + 0xb8);
  if (plVar3 != plVar1) {
    lVar2 = *plVar1;
    while (lVar2 != param_2) {
      plVar1 = plVar1 + 1;
      if (plVar3 == plVar1) {
        return;
      }
      lVar2 = *plVar1;
    }
  }
  if (plVar1 == plVar3) {
    return;
  }
  local_38 = *plVar1;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    plVar3 = *(long **)(param_1 + 0xb8);
  }
  if (plVar1 + 1 != plVar3) {
    plVar4 = plVar1;
    do {
      if (*plVar4 != 0) {
        (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
        *plVar4 = 0;
      }
      plVar1 = plVar4 + 1;
      lVar2 = *plVar1;
      *plVar1 = 0;
      *plVar4 = lVar2;
      plVar4 = plVar1;
    } while (plVar3 + -1 != plVar1);
    plVar3 = *(long **)(param_1 + 0xb8);
    if (plVar3 == plVar1) goto LAB_00dbbc10;
  }
  do {
    plVar4 = plVar3 + -1;
    if (*plVar4 != 0) {
      (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
      plVar3[-1] = 0;
    }
    plVar3 = plVar4;
  } while (plVar1 != plVar4);
LAB_00dbbc10:
  *(long **)(param_1 + 0xb8) = plVar1;
  FUN_00dbb520((undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb0),&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


