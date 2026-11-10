/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1e220; name: FUN_00a1e220
 */


void FUN_00a1e220(long param_1)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long local_b0 [12];
  long local_50;
  long local_48;
  long local_40;
  undefined8 uStack_38;
  
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x100) + (ulong)*(uint *)(param_1 + 0x120) * 0x28;
  local_48 = *(long *)(param_1 + 0x168);
  local_40 = param_1;
  uStack_38 = uVar7;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  FUN_008c4e70(uVar7,param_1 + 0x128,&local_48,lVar8,10);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  FUN_00a1e3c0(&local_40,*(undefined8 *)(param_1 + 0x130),lVar8);
  iVar1 = *(int *)(param_1 + 0x120);
  uVar6 = *(ulong *)(param_1 + 0x108);
  uVar5 = (ulong)(iVar1 + 1);
  uVar2 = 0;
  if (uVar6 != 0) {
    uVar2 = uVar5 / uVar6;
  }
  lVar8 = uVar5 - uVar2 * uVar6;
  iVar4 = (int)lVar8;
  *(int *)(param_1 + 0x120) = iVar4;
  if (iVar1 == iVar4) {
    FUN_00ffd010(uVar7,param_1 + 0x148);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x100) + lVar8 * 0x28;
    local_50 = *(long *)(param_1 + 0x168);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
    }
    FUN_008c4e70(uVar7,param_1 + 0x138,&local_50,lVar8,10);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    FUN_00a1e3c0(&local_40,*(undefined8 *)(param_1 + 0x140),lVar8);
    local_d0 = &LAB_00a1e6d0;
    local_c8 = FUN_00a1e6f0;
    local_c0 = &LAB_00a1e700;
    local_b8 = &LAB_00a1e710;
    local_b0[0] = param_1;
    FUN_00ffd120(uVar7,param_1 + 0x150,&local_d0);
    pcVar3 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined1 *)0x0;
      local_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar3)(local_b0);
    }
  }
  return;
}


