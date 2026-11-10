/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008df050; name: FUN_008df050
 */


void FUN_008df050(long param_1,ulong param_2,ulong param_3,long *param_4,undefined8 param_5,
                 long *param_6)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_68;
  long local_58;
  
  lVar2 = param_1 + (param_3 & 0xff) * 8;
  plVar1 = (long *)(lVar2 + 0x120);
  if (*(long *)(lVar2 + 0x120) == 0) {
    lVar2 = param_1 + (param_3 & 0xff) * 8;
    lVar4 = *(long *)(lVar2 + 0x210);
    plVar3 = (long *)(lVar2 + 0x210);
    if (lVar4 == 0) {
      *plVar1 = 0;
      lVar2 = *plVar3;
      *plVar3 = 0;
    }
    else {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      lVar2 = *plVar1;
      *plVar1 = lVar4;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      lVar2 = *plVar3;
      *plVar3 = 0;
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  lVar4 = *plVar1;
  lVar2 = *param_4;
  local_58 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_68 = *param_6;
  if (local_68 == 0) {
    FUN_008df2a0(param_1,lVar4,param_3 & 0xffffffff,&local_58,param_5,&local_68);
  }
  else {
    plVar3 = (long *)(local_68 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_008df2a0(param_1,lVar4,param_3 & 0xffffffff,&local_58,param_5,&local_68);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_68 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    local_58 = 0;
  }
  FUN_009140f0(param_1 + (param_2 & 0xff) * 0x38 + 8,*plVar1);
  return;
}


