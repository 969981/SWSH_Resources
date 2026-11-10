/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144c9b0; name: FUN_0144c9b0
 */


void FUN_0144c9b0(undefined8 param_1,undefined4 param_2,long *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long local_60;
  long local_58;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_02710798;
  lVar7 = *(long *)PTR_DAT_02710798;
  lVar8 = *(long *)(lVar7 + 0x268);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    lVar7 = *(long *)puVar3;
  }
  lVar7 = *(long *)(lVar7 + 0x220);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar4 = FUN_0152d900(lVar8,param_2);
  uVar2 = *(undefined1 *)(lVar4 + 2);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_3;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*param_3 + 0x10))(param_3,0xb8,8);
  if (lVar5 == 0) {
    (**(code **)(*param_3 + 0xb8))(param_3);
  }
  FUN_00866110(lVar5,param_3);
  *(long **)(lVar5 + 8) = param_3;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0xb8;
  *(undefined8 *)(lVar5 + 0x20) = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  plVar1 = (long *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  local_48 = 0;
  if (lVar5 == 0) {
    while( true ) {
      local_58 = 0;
      uVar6 = FUN_0152d9e0(lVar8,uVar2,&local_58);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if ((uVar6 & 1) == 0) break;
      local_60 = 0;
      FUN_01506770(lVar7,&local_60,param_3,(long)&local_48 + 4,&local_48);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
    }
  }
  else {
    while( true ) {
      local_58 = lVar5;
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar1);
      uVar6 = FUN_0152d9e0(lVar8,uVar2,&local_58);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if ((uVar6 & 1) == 0) break;
      local_60 = lVar5;
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar1);
      FUN_01506770(lVar7,&local_60,param_3,(long)&local_48 + 4,&local_48);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
    }
  }
  if (lVar5 != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return;
}


