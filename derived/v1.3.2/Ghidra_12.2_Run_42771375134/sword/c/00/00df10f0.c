/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df10f0; name: FUN_00df10f0
 */


void FUN_00df10f0(long param_1,uint param_2)

{
  long *plVar1;
  undefined1 auStack_40 [24];
  long local_28;
  
  if (5 < param_2) {
    return;
  }
  plVar1 = *(long **)(param_1 + 0x70);
  switch(param_2) {
  case 0:
    FUN_006cf0a0(auStack_40,&DAT_02653808);
    (**(code **)(*plVar1 + 400))(plVar1,auStack_40,5);
    goto joined_r0x00df1184;
  case 1:
    FUN_006cf0a0(auStack_40,&DAT_02653808);
    (**(code **)(*plVar1 + 400))(plVar1,auStack_40,1);
joined_r0x00df1184:
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    FUN_006cf0a0(auStack_40,&DAT_026537f0);
    (**(code **)(*plVar1 + 400))(plVar1,auStack_40,5);
    if (local_28 == 0) {
      return;
    }
    goto LAB_00df11c8;
  case 2:
    FUN_006cf0a0(auStack_40,&DAT_02653808);
    (**(code **)(*plVar1 + 400))(plVar1,auStack_40,5);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    FUN_006cf0a0(auStack_40,&DAT_026537f0);
    (**(code **)(*plVar1 + 400))(plVar1,auStack_40,1);
    break;
  case 3:
    FUN_006cf0a0(auStack_40,&DAT_02653808);
    (**(code **)(*plVar1 + 400))(plVar1,auStack_40,6);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    FUN_006cf0a0(auStack_40,&DAT_026537f0);
    (**(code **)(*plVar1 + 400))(plVar1,auStack_40,6);
    break;
  case 4:
    FUN_006cf0a0(auStack_40,&DAT_02653808);
    (**(code **)(*plVar1 + 400))(plVar1,auStack_40,7);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    FUN_006cf0a0(auStack_40,&DAT_026537f0);
    (**(code **)(*plVar1 + 400))(plVar1,auStack_40,7);
    break;
  case 5:
    FUN_006cf0a0(auStack_40,&DAT_02653808);
    (**(code **)(*plVar1 + 400))(plVar1,auStack_40,4);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    FUN_006cf0a0(auStack_40,&DAT_026537f0);
    (**(code **)(*plVar1 + 400))(plVar1,auStack_40,4);
  }
  if (local_28 != 0) {
LAB_00df11c8:
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


