/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0134b5f0; name: FUN_0134b5f0
 */


void FUN_0134b5f0(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long local_38;
  
  FUN_01346e80();
  FUN_012e8a50(&local_38);
  if (local_38 != 0) {
    lVar2 = FUN_01316cd0(local_38,0);
    FUN_012ecab0(&local_80);
    plVar3 = (long *)FUN_013187f0(local_80);
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    plVar1 = (long *)plVar3[1];
    for (plVar3 = (long *)*plVar3; plVar3 != plVar1; plVar3 = plVar3 + 8) {
      local_78 = plVar3[1];
      local_80 = *plVar3;
      local_58 = plVar3[5];
      local_68 = plVar3[3];
      local_70 = plVar3[2];
      lStack_60 = plVar3[4];
      local_50 = plVar3[6];
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
      }
      if (local_80 == lVar2) {
        uVar4 = FUN_01346f20(param_1);
        FUN_0131cb00(uVar4,0);
        FUN_01347140(param_1,&local_70,1);
        if (local_50 != 0) {
          (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
          local_50 = 0;
        }
        break;
      }
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
        local_50 = 0;
      }
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return;
}


