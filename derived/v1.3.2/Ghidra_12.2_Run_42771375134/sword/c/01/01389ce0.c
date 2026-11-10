/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01389ce0; name: FUN_01389ce0
 */


void FUN_01389ce0(undefined4 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = param_2 + 8;
  if (*param_2 == 0) {
    plVar2 = param_2;
  }
  else {
    plVar2 = (long *)(*param_2 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar3 = param_2[2];
    plVar2 = param_2 + 2;
    if (lVar3 != 0) {
      plVar2 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      lVar3 = param_2[4];
      plVar2 = param_2 + 4;
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        (**(code **)(*plVar2 + 0x18))(plVar2);
        lVar3 = param_2[6];
        plVar2 = param_2 + 6;
        if (lVar3 != 0) {
          plVar2 = (long *)(lVar3 + 0x48);
          (**(code **)(*plVar2 + 0x10))(plVar2);
          (**(code **)(*plVar2 + 0x18))(plVar2);
          lVar3 = *param_3;
          lVar4 = (long)plVar5 - (long)param_2;
          goto joined_r0x01389dd4;
        }
      }
    }
  }
  lVar3 = *param_3;
  lVar4 = (long)plVar2 - (long)param_2;
  plVar5 = plVar2;
joined_r0x01389dd4:
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *plVar5;
  *plVar5 = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_2 + (lVar4 >> 4) * 2 + 1) = param_1;
  return;
}


