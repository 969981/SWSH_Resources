/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de61c0; name: FUN_00de61c0
 */


undefined8
FUN_00de61c0(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
            undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_58;
  long local_50;
  long local_48;
  
  local_48 = *param_3;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  local_50 = *param_4;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  local_58 = *param_5;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  uVar2 = FUN_00dbd5f0(param_1,param_2,&local_48,&local_50,&local_58,param_6,param_7);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (((*(long *)(param_1 + 0x410) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x410) + 0x60), lVar3 != 0)) &&
     (uVar2 = FUN_00a8cbe0(lVar3), (uVar2 & 1) != 0)) {
    lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
    if (lVar4 == 0) {
      FUN_01067480(0,lVar3 + -0x50);
      iVar1 = *(int *)(param_1 + 0x4d0);
      goto joined_r0x00de6314;
    }
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_01067480(lVar4,lVar3 + -0x50);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  iVar1 = *(int *)(param_1 + 0x4d0);
joined_r0x00de6314:
  if (iVar1 == 2) {
    FUN_00db4000(param_1,param_1 + 0x4e0,param_1 + 0x4f0,param_1 + 0x500,4);
  }
  else if (iVar1 == 1) {
    FUN_00db3ef0(*(undefined4 *)(param_1 + 0x510),param_1,param_1 + 0x4e0,4);
  }
  return 1;
}


