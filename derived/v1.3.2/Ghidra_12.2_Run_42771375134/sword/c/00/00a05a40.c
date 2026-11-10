/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a05a40; name: FUN_00a05a40
 */


void FUN_00a05a40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  uVar2 = FUN_00ff93a0();
  FUN_00ff86a0(&local_38,uVar2,*(undefined4 *)(param_1 + 0x5e0));
  if (local_38 != 0) {
    lVar5 = *(long *)(local_38 + 0x60);
    if (lVar5 == 0) {
      plVar3 = (long *)(local_38 + 0x48);
      pcVar4 = *(code **)(*plVar3 + 0x18);
    }
    else {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))((long *)(lVar5 + 0x48));
      if ((local_38 != 0) && ((**(code **)(*(long *)(local_38 + 0x48) + 0x18))(), lVar5 == 0)) {
        return;
      }
      plVar3 = (long *)(lVar5 + 0x48);
      lVar1 = param_1 + 0x100;
      local_40 = lVar5;
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_008c4e70(lVar1,&DAT_02153778,&local_40,param_1 + 0x5e8,10);
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        local_40 = 0;
      }
      local_48 = lVar5;
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar3);
      FUN_008c4e70(lVar1,&DAT_02153780,&local_48,param_1 + 0x5f0,10);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      local_50 = lVar5;
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar3);
      FUN_008c4e70(lVar1,&DAT_02153788,&local_50,param_1 + 0x5f8,10);
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
        local_50 = 0;
      }
      local_58 = lVar5;
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar3);
      FUN_008c4e70(lVar1,&DAT_02153790,&local_58,param_1 + 0x688,10);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      pcVar4 = *(code **)(*plVar3 + 0x18);
    }
    (*pcVar4)(plVar3);
  }
  return;
}


