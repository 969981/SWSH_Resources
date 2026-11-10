/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7eaf0; name: FUN_00d7eaf0
 */


void FUN_00d7eaf0(long param_1,char *param_2,char *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long local_68;
  long local_60;
  long local_58;
  long local_50 [2];
  long local_38;
  
  FUN_01036e20(*(undefined8 *)(param_1 + 0x660));
  FUN_00d70930(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0));
  lVar3 = *(long *)(param_1 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar3 + 0x2e8);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  if (*param_2 != '\0') {
    local_50[1] = 0x5064c88bbd7d3d3a;
    FUN_0077eb10(local_38,local_50 + 1,lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x660);
    local_50[0] = lVar1;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    FUN_01036db0(uVar2,3,0,local_50);
    if (local_50[0] != 0) {
      (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
      local_50[0] = 0;
    }
  }
  if (*param_3 != '\0') {
    local_50[1] = 0x5064c38bbd7d34bb;
    FUN_0077eb10(local_38,local_50 + 1,lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x660);
    local_58 = lVar1;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    FUN_01036db0(uVar2,2,2,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
  }
  local_50[1] = 0x5064c28bbd7d3308;
  FUN_0077eb10(local_38,local_50 + 1,lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x660);
  local_60 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_01036db0(uVar2,1,3,&local_60);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  local_50[1] = 0x5064c58bbd7d3821;
  FUN_0077eb10(local_38,local_50 + 1,lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x660);
  local_68 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_01036db0(uVar2,0,1,&local_68);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


