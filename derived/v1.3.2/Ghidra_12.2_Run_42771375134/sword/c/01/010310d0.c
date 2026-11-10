/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010310d0; name: FUN_010310d0
 */


void FUN_010310d0(long *param_1,undefined4 param_2,undefined4 param_3,long *param_4,long *param_5,
                 undefined4 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_60;
  long local_58;
  long local_48;
  
  uVar1 = FUN_01031c50(param_1[0xc]);
  if ((uVar1 & 1) != 0) {
    lVar4 = param_1[0xc];
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined4 *)(lVar4 + 0x28) = 0;
    if (*(long *)(lVar4 + 0x30) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar4 + 0x30) + 0x48) + 0x18))();
      *(undefined8 *)(lVar4 + 0x30) = 0;
    }
    *(undefined8 *)(lVar4 + 0x30) = 0;
    if (*(long *)(lVar4 + 0x38) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar4 + 0x38) + 0x48) + 0x18))();
      *(undefined8 *)(lVar4 + 0x38) = 0;
    }
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined4 *)(param_1[0xc] + 0x20) = param_6;
    *(undefined4 *)(param_1[0xc] + 0x24) = param_2;
    *(undefined4 *)(param_1[0xc] + 0x28) = param_3;
    lVar3 = param_1[0xc];
    lVar4 = *param_4;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(lVar3 + 0x30);
    *(long *)(lVar3 + 0x30) = lVar4;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    lVar3 = param_1[0xc];
    lVar4 = *param_5;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(lVar3 + 0x38);
    *(long *)(lVar3 + 0x38) = lVar4;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(undefined1 *)(param_1[0xc] + 0x18) = 1;
    if ((*(long *)param_1[0xc] != 0) && (*(int *)(*(long *)param_1[0xc] + 0x54) != 0)) {
      if (*(long *)param_1[0xc] == 0) {
        local_48 = 0;
      }
      else {
        FUN_01031a00(&local_48);
      }
      lVar4 = local_48;
      (**(code **)(*param_1 + 0x10))(&local_60,param_1);
      local_58 = local_60;
      local_60 = 0;
      FUN_0102e0e0(lVar4,&local_58);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      }
    }
  }
  return;
}


