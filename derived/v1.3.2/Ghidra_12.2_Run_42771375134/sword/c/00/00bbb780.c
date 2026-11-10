/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbb780; name: FUN_00bbb780
 */


void FUN_00bbb780(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  FUN_00bb4f40();
  if (*(int *)(param_1 + 0x68c) == 2) {
    FUN_00bb94c0(param_1,param_1 + 0x6c8);
    lVar1 = *(long *)(param_1 + 0x4c0);
  }
  else {
    FUN_00ffdc80(param_1 + 0x100,"poke_panel");
    local_38 = (undefined8 *)FUN_016b8190();
    switch(*(undefined4 *)(param_1 + 0x5cc)) {
    case 0:
      FUN_00bbba00(param_1,&local_38);
      lVar1 = *(long *)(param_1 + 0x4c0);
      break;
    case 1:
      FUN_00bbc160(param_1,&local_38);
      lVar1 = *(long *)(param_1 + 0x4c0);
      break;
    case 2:
    case 4:
      FUN_00bbc7e0(param_1,&local_38);
      lVar1 = *(long *)(param_1 + 0x4c0);
      break;
    default:
      FUN_00bbcd10(param_1,&local_38);
      lVar1 = *(long *)(param_1 + 0x4c0);
    }
  }
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (*(long *)(lVar1 + 0x58) != 0) {
      plVar2 = (long *)(*(long *)(lVar1 + 0x58) + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      lVar1 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
      }
      local_38 = &local_28;
      local_30 = 0xe2c06acab97c29c2;
      local_28 = 0;
      FUN_01037340(lVar1,&local_38,0);
      uVar3 = local_28;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
      }
    }
  }
  FUN_016b2d70(uVar3,1);
  return;
}


