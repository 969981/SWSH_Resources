/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c49210; name: FUN_00c49210
 */


void FUN_00c49210(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 *local_1a0;
  code *local_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  long *local_180;
  undefined4 local_178;
  long local_170;
  undefined1 *local_120;
  code *local_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  long *local_100;
  undefined4 local_f8;
  long local_f0;
  long local_98;
  undefined4 local_90 [2];
  undefined8 *local_88;
  undefined8 uStack_80;
  char local_78 [4];
  undefined8 local_74;
  undefined8 local_6c;
  
  if ((param_1[0xd] != 0) &&
     (puVar7 = *(undefined8 **)(param_1[0xd] + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar7)(puVar7);
    lVar5 = FUN_00be66c0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        FUN_00c1cec0(&local_120,puVar7 + -10);
        goto joined_r0x00c492dc;
      }
    }
  }
  FUN_00c1cec0(&local_120,0);
joined_r0x00c492dc:
  if ((local_120 != (undefined1 *)0x0) &&
     (puVar7 = *(undefined8 **)(local_120 + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar7)(puVar7);
    lVar5 = FUN_00c1bbc0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        FUN_00bdc2d0(local_78,puVar7 + -10);
        goto joined_r0x00c493ec;
      }
    }
  }
  FUN_00bdc2d0(local_78,0);
joined_r0x00c493ec:
  if (local_120 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
    local_120 = (undefined1 *)0x0;
  }
  if (local_78[0] == '\0') {
    *(undefined4 *)(param_1 + 0x11) = param_4;
    return;
  }
  if ((char)param_1[0x15] == '\0') {
LAB_00c49448:
    *(undefined4 *)(param_1 + 0x11) = param_4;
    return;
  }
  *(undefined8 *)((long)param_1 + 0x90c) = local_6c;
  *(undefined8 *)((long)param_1 + 0x904) = local_74;
  if ((char)param_1[0x120] == '\0') {
    *(undefined1 *)(param_1 + 0x120) = 1;
    lVar5 = param_1[0xd];
  }
  else {
    lVar5 = param_1[0xd];
  }
  if ((lVar5 != 0) && (puVar7 = *(undefined8 **)(lVar5 + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar7)(puVar7);
    lVar5 = FUN_00be66c0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        FUN_00c1cec0(&local_120,puVar7 + -10);
        goto joined_r0x00c49404;
      }
    }
  }
  FUN_00c1cec0(&local_120,0);
joined_r0x00c49404:
  if ((local_120 != (undefined1 *)0x0) &&
     (puVar7 = *(undefined8 **)(local_120 + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar7)(puVar7);
    lVar5 = FUN_00c1bbc0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        iVar3 = FUN_00bdc320(puVar7 + -10);
        goto joined_r0x00c49640;
      }
    }
  }
  iVar3 = FUN_00bdc320(0);
joined_r0x00c49640:
  if (local_120 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
    local_120 = (undefined1 *)0x0;
  }
  if (iVar3 == 2) {
    plVar4 = param_1 + 0x122;
    *(undefined1 *)((long)param_1 + 0x90c) = param_5;
  }
  else {
    if (iVar3 != 1) goto LAB_00c49448;
    *(undefined1 *)((long)param_1 + 0x904) = param_5;
    plVar4 = param_1 + 0x121;
  }
  *(int *)plVar4 = (int)param_1[0x16];
  local_90[0] = 0;
  uStack_80 = 0x10;
  local_88 = (undefined8 *)((long)param_1 + 0x904);
  (**(code **)(*param_1 + 0x10))(&local_98,param_1);
  lVar5 = local_98;
  if (local_98 == 0) {
    lVar8 = 0;
  }
  else {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x10))();
    lVar8 = local_98;
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x10))();
      bVar1 = false;
      goto LAB_00c494c8;
    }
  }
  bVar1 = true;
LAB_00c494c8:
  local_110 = (undefined1 *)0x0;
  puStack_108 = (undefined1 *)0x0;
  local_f0 = lVar5;
  local_120 = (undefined1 *)0x0;
  local_118 = (code *)0x0;
  local_100 = param_1;
  local_f8 = param_3;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_120 = &LAB_00c4aa60;
  local_118 = FUN_00c4ab80;
  local_110 = &LAB_00c4abc0;
  puStack_108 = &LAB_00c4abf0;
  local_190 = (undefined1 *)0x0;
  puStack_188 = (undefined1 *)0x0;
  local_1a0 = (undefined1 *)0x0;
  local_198 = (code *)0x0;
  local_180 = param_1;
  local_178 = param_4;
  local_170 = lVar8;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  local_1a0 = &LAB_00c4ac20;
  local_198 = FUN_00c4ac50;
  local_190 = &LAB_00c4ac90;
  puStack_188 = &LAB_00c4acc0;
  uVar6 = FUN_01299050(1,local_90,&local_120,&local_1a0);
  pcVar2 = local_198;
  if (local_198 != (code *)0x0) {
    local_190 = (undefined1 *)0x0;
    puStack_188 = (undefined1 *)0x0;
    local_1a0 = (undefined1 *)0x0;
    local_198 = (code *)0x0;
    (*pcVar2)(&local_180);
  }
  pcVar2 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = (undefined1 *)0x0;
    puStack_108 = (undefined1 *)0x0;
    local_120 = (undefined1 *)0x0;
    local_118 = (code *)0x0;
    (*pcVar2)(&local_100);
  }
  if ((uVar6 & 1) == 0) {
    param_2 = param_4;
  }
  *(undefined4 *)(param_1 + 0x11) = param_2;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
  }
  return;
}


