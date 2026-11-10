/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01426430; name: FUN_01426430
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01426430(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *local_260;
  code *local_258;
  code *local_250;
  undefined1 *puStack_248;
  undefined1 auStack_240 [96];
  undefined8 local_1e0 [3];
  long local_1c8;
  undefined1 *local_1c0;
  code *local_1b8;
  code *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 auStack_1a0 [104];
  long local_138;
  undefined1 *local_130;
  code *local_128;
  code *local_120;
  undefined1 *local_118;
  long alStack_110 [12];
  undefined1 *local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  if (*(int *)(param_1 + 0x6d8) == 2) {
    return;
  }
  if (*(char *)(param_1 + 0x6c0) != '\0') {
    nn::os::GetSystemTick();
    lVar4 = nn::os::ConvertToTimeSpan();
    lVar4 = lVar4 - *(long *)(param_1 + 0x6b0);
    *(long *)(param_1 + 0x6b8) = lVar4;
    *(double *)(param_1 + 0x6c8) =
         *(double *)(param_1 + 0x6c8) +
         *(double *)(param_1 + 0x6d0) * ((double)lVar4 / DAT_01cd50a0);
    nn::os::GetSystemTick();
    uVar5 = nn::os::ConvertToTimeSpan();
    *(undefined8 *)(param_1 + 0x6b0) = uVar5;
  }
  local_b0 = &LAB_01426e00;
  local_a8 = FUN_01426f10;
  local_a0 = FUN_01426f20;
  local_98 = &LAB_01426f30;
  iVar2 = *(int *)(param_1 + 0x6d8);
  local_130 = &LAB_01426f40;
  local_128 = FUN_01427060;
  local_120 = FUN_01427070;
  local_118 = &LAB_01427080;
  alStack_110[0] = param_1;
  alStack_90[0] = param_1;
  if (iVar2 == 0) {
    lVar4 = local_1c8;
    pcVar3 = local_128;
    if ((float)*(double *)(param_1 + 0x6c8) <= *(float *)PTR_DAT_02729ac0) goto joined_r0x01426798;
    *(undefined4 *)(param_1 + 0x6d8) = 1;
    FUN_01425e60(&local_138,&DAT_0269f5f8,&DAT_0269f5c8,&DAT_0269f760);
    puVar1 = (undefined8 *)PTR_DAT_02710920;
    if (local_138 != 0) {
      puVar1 = (undefined8 *)(local_138 + 0x58);
    }
    local_1e0[0] = *puVar1;
    local_1b0 = (code *)0x0;
    puStack_1a8 = (undefined1 *)0x0;
    local_1c0 = (undefined1 *)0x0;
    local_1b8 = (code *)0x0;
    if (local_a0 != (code *)0x0) {
      (*local_a0)(alStack_90,auStack_1a0);
      local_1b0 = local_a0;
      puStack_1a8 = local_98;
      local_1c0 = local_b0;
      local_1b8 = local_a8;
    }
    FUN_00ffd120(param_1 + 0x100,local_1e0,&local_1c0);
    pcVar3 = local_1b8;
    if (local_1b8 != (code *)0x0) {
      local_1b0 = (code *)0x0;
      puStack_1a8 = (undefined1 *)0x0;
      local_1c0 = (undefined1 *)0x0;
      local_1b8 = (code *)0x0;
      (*pcVar3)(auStack_1a0);
    }
    if (local_138 != 0) {
      (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
      local_138 = 0;
    }
    FUN_006cf0a0(local_1e0,(ulong)(*(int *)(param_1 + 0x5d0) == 0x4f0) * 0x18 + 0x269f8b0);
    FUN_012d6d40(local_1e0);
    if (local_1c8 != 0) {
      (**(code **)(*(long *)(local_1c8 + 0x48) + 0x18))();
      local_1c8 = 0;
    }
    iVar2 = *(int *)(param_1 + 0x6d8);
  }
  lVar4 = local_1c8;
  pcVar3 = local_128;
  if ((iVar2 == 1) && (*(float *)(PTR_DAT_02729ac0 + 4) < (float)*(double *)(param_1 + 0x6c8))) {
    *(undefined4 *)(param_1 + 0x6d8) = 2;
    FUN_01425e60(&local_138,&DAT_0269f5f8,&DAT_0269f5e0,&DAT_0269f760);
    puVar1 = (undefined8 *)PTR_DAT_02710920;
    if (local_138 != 0) {
      puVar1 = (undefined8 *)(local_138 + 0x58);
    }
    local_1e0[0] = *puVar1;
    local_250 = (code *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    if (local_120 != (code *)0x0) {
      (*local_120)(alStack_110,auStack_240);
      local_250 = local_120;
      puStack_248 = local_118;
      local_260 = local_130;
      local_258 = local_128;
    }
    FUN_00ffd120(param_1 + 0x100,local_1e0,&local_260);
    pcVar3 = local_258;
    if (local_258 != (code *)0x0) {
      local_250 = (code *)0x0;
      puStack_248 = (undefined1 *)0x0;
      local_260 = (undefined1 *)0x0;
      local_258 = (code *)0x0;
      (*pcVar3)(auStack_240);
    }
    if (local_138 != 0) {
      (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
      local_138 = 0;
    }
    if (*(char *)(param_1 + 0x6c0) != '\0') {
      nn::os::GetSystemTick();
      lVar4 = nn::os::ConvertToTimeSpan();
      *(long *)(param_1 + 0x6b8) = lVar4 - *(long *)(param_1 + 0x6b0);
      *(undefined1 *)(param_1 + 0x6c0) = 0;
    }
    FUN_006cf0a0(local_1e0,(ulong)(*(int *)(param_1 + 0x5d0) == 0x4f0) * 0x18 + 0x269f8b0);
    FUN_012d6d40(local_1e0);
    lVar4 = 0;
    pcVar3 = local_128;
    if (local_1c8 != 0) {
      (**(code **)(*(long *)(local_1c8 + 0x48) + 0x18))();
      local_1c8 = 0;
      lVar4 = local_1c8;
      pcVar3 = local_128;
    }
  }
joined_r0x01426798:
  local_1c8 = lVar4;
  local_128 = pcVar3;
  if (pcVar3 != (code *)0x0) {
    local_120 = (code *)0x0;
    local_118 = (undefined1 *)0x0;
    local_130 = (undefined1 *)0x0;
    local_128 = (code *)0x0;
    (*pcVar3)(alStack_110);
  }
  pcVar3 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar3)(alStack_90);
  }
  return;
}


