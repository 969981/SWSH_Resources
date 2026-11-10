/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa9fa0; name: FUN_00aa9fa0
 */


void FUN_00aa9fa0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_90;
  long local_88;
  long local_80 [2];
  char *local_70;
  undefined8 local_68;
  long local_60 [3];
  long local_48;
  long local_40;
  long local_38;
  
  if ((param_1[0x98] != 0) && (*(int *)(param_1[0x98] + 0x54) != 0)) {
    lVar1 = *(long *)(param_1[0x78] + 0x528);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    local_38 = param_1[0x98];
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(param_1[0x78] + 0x3f8);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(lVar2 + 0x58);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_40 = lVar4;
    FUN_00c7a130(lVar1,&local_38,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    }
    lVar1 = FUN_00a89ad0(*(undefined8 *)(param_1[0x78] + 0x5b8),local_80 + 4);
    local_80[1] = 0xf6c50b34bda243c3;
    local_70 = "ba_drone_move";
    local_68 = 0xd;
    FUN_006cf0a0(local_80 + 4,local_80 + 1);
    FUN_00aaa240(param_1,local_80 + 4,1);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    FUN_00aaa430(local_80 + 4,param_1);
    lVar2 = local_60[0];
    FUN_007270a0(local_60[0],0x40);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      local_60[0] = 0;
    }
    FUN_00aaa430(&local_88,param_1);
    local_90 = *(long *)(lVar1 + 0x400);
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
    }
    FUN_00da16f0(local_80,&local_88,&local_90,1);
    if (local_80[0] != 0) {
      (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
      local_80[0] = 0;
    }
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
      local_90 = 0;
    }
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
    }
    FUN_00aaa660(param_1,0);
    FUN_00aaa430(local_80 + 4,param_1);
    lVar1 = local_60[0];
    FUN_00727800(local_60[0],1);
    if (lVar1 != 0) {
      plVar3 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      local_60[0] = 0;
    }
    *(undefined1 *)(param_1 + 0x99) = 1;
    (**(code **)(*param_1 + 0x198))(param_1,0);
  }
  return;
}


