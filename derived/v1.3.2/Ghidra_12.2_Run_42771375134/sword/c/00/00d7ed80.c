/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7ed80; name: FUN_00d7ed80
 */


void FUN_00d7ed80(long param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long local_58;
  long local_50;
  long local_48 [3];
  
  FUN_01036e20(*(undefined8 *)(param_1 + 0x660));
  FUN_00d70930(local_48 + 2,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0));
  lVar3 = *(long *)(param_1 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar3 + 0x2e8);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  if (*param_2 == '\0') {
    local_48[1] = 0x5064c98bbd7d3eed;
    FUN_0077eb10(local_48[2],local_48 + 1,lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x660);
    local_48[0] = lVar1;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    FUN_01036db0(uVar2,1,2,local_48);
    if (local_48[0] != 0) {
      (**(code **)(*(long *)(local_48[0] + 0x48) + 0x18))();
      local_48[0] = 0;
    }
  }
  else {
    local_48[1] = 0x5064c68bbd7d39d4;
    FUN_0077eb10(local_48[2],local_48 + 1,lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x660);
    local_50 = lVar1;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    FUN_01036db0(uVar2,1,2,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
  }
  local_48[1] = 0x5064c78bbd7d3b87;
  FUN_0077eb10(local_48[2],local_48 + 1,lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x660);
  local_58 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_01036db0(uVar2,0,3,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  if (local_48[2] != 0) {
    (**(code **)(*(long *)(local_48[2] + 0x48) + 0x18))();
  }
  return;
}


