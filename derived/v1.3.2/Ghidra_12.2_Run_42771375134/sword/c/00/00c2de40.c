/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c2de40; name: FUN_00c2de40
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00c2de40(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 *local_960;
  code *local_958;
  undefined1 *local_950;
  undefined1 *puStack_948;
  long *local_940;
  undefined4 local_938;
  long local_930;
  long local_8e0;
  undefined *local_8d8;
  undefined1 local_8d0;
  undefined8 local_8c8;
  undefined4 local_8c0;
  undefined8 *local_8b8;
  undefined8 *local_8b0;
  undefined8 uStack_8a8;
  undefined1 *local_8a0;
  code *local_898;
  undefined1 *local_890;
  undefined1 *puStack_888;
  long *local_880;
  undefined4 local_878;
  undefined4 uStack_874;
  long local_870;
  
  if ((param_1[0xd] != 0) &&
     (puVar10 = *(undefined8 **)(param_1[0xd] + 0x60), puVar10 != (undefined8 *)0x0)) {
    plVar6 = (long *)(**(code **)*puVar10)(puVar10);
    lVar7 = FUN_00be66c0();
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)lVar7) {
        FUN_00c1cec0(&local_960,puVar10 + -10);
        goto joined_r0x00c2df18;
      }
    }
  }
  FUN_00c1cec0(&local_960,0);
joined_r0x00c2df18:
  if ((local_960 != (undefined1 *)0x0) &&
     (puVar10 = *(undefined8 **)(local_960 + 0x60), puVar10 != (undefined8 *)0x0)) {
    plVar6 = (long *)(**(code **)*puVar10)(puVar10);
    if (((*PTR_DAT_0271b788 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0271b788), iVar5 != 0)) {
      uVar8 = FUN_00bd9700();
      *(undefined8 *)PTR_DAT_0271b790 = uVar8;
      __cxa_guard_release(PTR_DAT_0271b788);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)PTR_DAT_0271b790) {
        puVar10 = puVar10 + -10;
        goto LAB_00c2df20;
      }
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_00c2df20:
  FUN_00bd9f00(&local_8a0,puVar10);
  uVar4 = local_8a0._0_4_;
  if (local_960 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_960 + 0x48) + 0x18))();
    local_960 = (undefined1 *)0x0;
  }
  if ((param_1[0xd] != 0) &&
     (puVar10 = *(undefined8 **)(param_1[0xd] + 0x60), puVar10 != (undefined8 *)0x0)) {
    plVar6 = (long *)(**(code **)*puVar10)(puVar10);
    lVar7 = FUN_00be66c0();
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)lVar7) {
        FUN_00c1cec0(&local_8a0,puVar10 + -10);
        goto joined_r0x00c2dff8;
      }
    }
  }
  FUN_00c1cec0(&local_8a0,0);
joined_r0x00c2dff8:
  if ((local_8a0 != (undefined1 *)0x0) &&
     (puVar10 = *(undefined8 **)(local_8a0 + 0x60), puVar10 != (undefined8 *)0x0)) {
    plVar6 = (long *)(**(code **)*puVar10)(puVar10);
    if (((*PTR_DAT_0271b788 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0271b788), iVar5 != 0)) {
      uVar8 = FUN_00bd9700();
      *(undefined8 *)PTR_DAT_0271b790 = uVar8;
      __cxa_guard_release(PTR_DAT_0271b788);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)PTR_DAT_0271b790) {
        uVar8 = FUN_00bd9f20(puVar10 + -10);
        goto joined_r0x00c2e238;
      }
    }
  }
  uVar8 = FUN_00bd9f20(0);
joined_r0x00c2e238:
  if (local_8a0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_8a0 + 0x48) + 0x18))();
    local_8a0 = (undefined1 *)0x0;
  }
  local_8b0 = (undefined8 *)0x0;
  uStack_8a8 = 0;
  local_8b8 = (undefined8 *)0x0;
  local_8d0 = 0;
  local_8d8 = PTR_DAT_0271bbf0 + 0x10;
  local_8c0 = uVar4;
  local_8c8 = uVar8;
  FUN_00c1c150(&local_8b8,&local_8d8);
  (**(code **)(*param_1 + 0x10))(&local_8e0,param_1);
  lVar7 = local_8e0;
  if (local_8e0 != 0) {
    (**(code **)(*(long *)(local_8e0 + 0x48) + 0x10))();
  }
  local_890 = (undefined1 *)0x0;
  puStack_888 = (undefined1 *)0x0;
  local_870 = lVar7;
  local_8a0 = (undefined1 *)0x0;
  local_898 = (code *)0x0;
  local_880 = param_1;
  local_878 = param_3;
  uStack_874 = param_4;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar2 = local_8e0;
  local_8a0 = &LAB_00c301d0;
  local_898 = FUN_00c30460;
  local_890 = &LAB_00c304a0;
  puStack_888 = &LAB_00c304d0;
  if (local_8e0 != 0) {
    (**(code **)(*(long *)(local_8e0 + 0x48) + 0x10))();
  }
  local_950 = (undefined1 *)0x0;
  puStack_948 = (undefined1 *)0x0;
  local_930 = lVar2;
  local_960 = (undefined1 *)0x0;
  local_958 = (code *)0x0;
  local_940 = param_1;
  local_938 = param_4;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_960 = &LAB_00c30500;
  local_958 = FUN_00c30530;
  local_950 = &LAB_00c30570;
  puStack_948 = &LAB_00c305a0;
  uVar9 = FUN_0122eb80(&local_8b8,&local_8a0,&local_960);
  pcVar1 = local_958;
  if (local_958 != (code *)0x0) {
    local_950 = (undefined1 *)0x0;
    puStack_948 = (undefined1 *)0x0;
    local_960 = (undefined1 *)0x0;
    local_958 = (code *)0x0;
    (*pcVar1)(&local_940);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  pcVar1 = local_898;
  if (local_898 != (code *)0x0) {
    local_890 = (undefined1 *)0x0;
    puStack_888 = (undefined1 *)0x0;
    local_8a0 = (undefined1 *)0x0;
    local_898 = (code *)0x0;
    (*pcVar1)(&local_880);
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if ((uVar9 & 1) == 0) {
    param_2 = param_4;
  }
  *(undefined4 *)(param_1 + 0x14) = param_2;
  if (local_8e0 != 0) {
    (**(code **)(*(long *)(local_8e0 + 0x48) + 0x18))();
    local_8e0 = 0;
  }
  puVar3 = local_8b8;
  puVar10 = local_8b0;
  if (local_8b8 != (undefined8 *)0x0) {
    while (puVar10 != puVar3) {
      puVar10 = puVar10 + -4;
      (**(code **)*puVar10)(puVar10);
    }
    local_8b0 = puVar3;
    FUN_017cd7a0(local_8b8);
  }
  return;
}


