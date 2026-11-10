/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01399f90; name: FUN_01399f90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01399f90(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong local_40;
  undefined8 uStack_38;
  
  FUN_0139a3a0(param_1 + 0x80);
  if (*(int *)(param_1 + 0x100) != 0) {
    FUN_0139a6e0(&local_40,param_1);
    if (*(long *)(param_1 + 0x6a0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x6a0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x6a0) = 0;
    }
    uVar2 = local_40;
    *(ulong *)(param_1 + 0x6a0) = local_40;
    uVar1 = FUN_0139b950(&local_40,*(undefined8 *)(local_40 + 8),param_2 + 0x610);
    if (uVar1 != 0) {
      (**(code **)(*(long *)(uVar1 + 0x48) + 0x10))();
    }
    local_40 = uVar1;
    FUN_006d9640(uVar2,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    FUN_00794370(uVar1,param_2 + 0x3f0);
    uStack_38 = _UNK_01d4acd8;
    local_40 = _DAT_01d4acd0;
    FUN_00794650(uVar1,&local_40);
    lVar4 = *(long *)(param_1 + 0x6a0);
    uVar2 = FUN_0139ba40(&local_40,*(undefined8 *)(lVar4 + 8));
    if (uVar2 != 0) {
      (**(code **)(*(long *)(uVar2 + 0x48) + 0x10))();
    }
    local_40 = uVar2;
    FUN_006d9640(lVar4,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
  }
  FUN_0139a6e0(&local_40,param_1);
  if (*(long *)(param_1 + 0x6a8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6a8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6a8) = 0;
  }
  uVar2 = local_40;
  *(ulong *)(param_1 + 0x6a8) = local_40;
  local_40 = local_40 & 0xffffffff00000000;
  FUN_0139bb20(uVar2,*(undefined8 *)(uVar2 + 8),&local_40);
  FUN_0139a6e0(&local_40,param_1);
  if (*(long *)(param_1 + 0x6b0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6b0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6b0) = 0;
  }
  uVar2 = local_40;
  *(ulong *)(param_1 + 0x6b0) = local_40;
  local_40 = CONCAT44(local_40._4_4_,1);
  FUN_0139bb20(uVar2,*(undefined8 *)(uVar2 + 8),&local_40);
  FUN_0139a6e0(&local_40,param_1);
  if (*(long *)(param_1 + 0x6b8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6b8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6b8) = 0;
  }
  uVar2 = local_40;
  *(ulong *)(param_1 + 0x6b8) = local_40;
  local_40 = CONCAT44(local_40._4_4_,2);
  FUN_0139bb20(uVar2,*(undefined8 *)(uVar2 + 8),&local_40);
  FUN_0139a6e0(&local_40,param_1);
  if (*(long *)(param_1 + 0x6c0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6c0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6c0) = 0;
  }
  uVar2 = local_40;
  *(ulong *)(param_1 + 0x6c0) = local_40;
  local_40 = CONCAT44(local_40._4_4_,3);
  FUN_0139bb20(uVar2,*(undefined8 *)(uVar2 + 8),&local_40);
  FUN_0139a6e0(&local_40,param_1);
  if (*(long *)(param_1 + 0x6c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6c8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6c8) = 0;
  }
  uVar2 = local_40;
  *(ulong *)(param_1 + 0x6c8) = local_40;
  local_40 = CONCAT44(local_40._4_4_,4);
  FUN_0139bb20(uVar2,*(undefined8 *)(uVar2 + 8),&local_40);
  FUN_0139a6e0(&local_40,param_1);
  if (*(long *)(param_1 + 0x6d0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6d0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6d0) = 0;
  }
  uVar2 = local_40;
  *(ulong *)(param_1 + 0x6d0) = local_40;
  local_40 = CONCAT44(local_40._4_4_,5);
  FUN_0139bb20(uVar2,*(undefined8 *)(uVar2 + 8),&local_40);
  FUN_0139a6e0(&local_40,param_1);
  if (*(long *)(param_1 + 0x6d8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6d8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6d8) = 0;
  }
  uVar2 = local_40;
  *(ulong *)(param_1 + 0x6d8) = local_40;
  local_40 = CONCAT44(local_40._4_4_,6);
  FUN_0139bb20(uVar2,*(undefined8 *)(uVar2 + 8),&local_40);
  FUN_0139a6e0(&local_40,param_1);
  if (*(long *)(param_1 + 0x6e0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6e0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6e0) = 0;
  }
  uVar2 = local_40;
  *(ulong *)(param_1 + 0x6e0) = local_40;
  local_40 = CONCAT44(local_40._4_4_,7);
  FUN_0139bb20(uVar2,*(undefined8 *)(uVar2 + 8),&local_40);
  FUN_0139a6e0(&local_40,param_1);
  if (*(long *)(param_1 + 0x6e8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6e8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6e8) = 0;
  }
  uVar2 = local_40;
  *(ulong *)(param_1 + 0x6e8) = local_40;
  local_40 = CONCAT44(local_40._4_4_,8);
  FUN_0139bb20(uVar2,*(undefined8 *)(uVar2 + 8),&local_40);
  FUN_0139a6e0(&local_40,param_1);
  if (*(long *)(param_1 + 0x6f0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6f0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6f0) = 0;
  }
  uVar2 = local_40;
  *(ulong *)(param_1 + 0x6f0) = local_40;
  local_40 = CONCAT44(local_40._4_4_,9);
  FUN_0139bb20(uVar2,*(undefined8 *)(uVar2 + 8),&local_40);
  lVar4 = FUN_0139ab20(param_1,param_2 + 0x610);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x808);
  *(long *)(param_1 + 0x808) = lVar4;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    lVar4 = *(long *)(param_1 + 0x808);
  }
  FUN_00794370(lVar4,param_2 + 0x500);
  uStack_38 = _UNK_01d4b0c8;
  local_40 = _DAT_01d4b0c0;
  FUN_00794650(*(undefined8 *)(param_1 + 0x808),&local_40);
  return;
}


