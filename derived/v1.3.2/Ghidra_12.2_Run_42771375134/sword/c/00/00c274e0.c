/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c274e0; name: FUN_00c274e0
 */


void FUN_00c274e0(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
                 )

{
  bool bVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 *puVar10;
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
  long *local_88;
  undefined8 uStack_80;
  char local_78 [4];
  long local_74;
  long local_6c;
  
  if ((param_1[0xd] != 0) &&
     (puVar8 = *(undefined8 **)(param_1[0xd] + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar8)(puVar8);
    lVar4 = FUN_00be66c0();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        FUN_00c1cec0(&local_120,puVar8 + -10);
        goto joined_r0x00c275ac;
      }
    }
  }
  FUN_00c1cec0(&local_120,0);
joined_r0x00c275ac:
  if ((local_120 != (undefined1 *)0x0) &&
     (puVar8 = *(undefined8 **)(local_120 + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar8)(puVar8);
    lVar4 = FUN_00c1bbc0();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        FUN_00bdc2d0(local_78,puVar8 + -10);
        goto joined_r0x00c27870;
      }
    }
  }
  FUN_00bdc2d0(local_78,0);
joined_r0x00c27870:
  if (local_120 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
    local_120 = (undefined1 *)0x0;
  }
  if (local_78[0] == '\0') {
    *(undefined4 *)(param_1 + 0x13) = param_4;
    return;
  }
  local_88 = param_1 + 0x15;
  *local_88 = local_74;
  param_1[0x16] = local_6c;
  if (param_5 == 2) {
    uVar7 = 0;
    if ((char)param_1[0x22c] != '\0') {
      uVar7 = 3;
    }
    *(undefined1 *)(param_1 + 0x16) = uVar7;
  }
  else {
    if (param_5 != 1) {
      *(undefined4 *)(param_1 + 0x13) = param_4;
      return;
    }
    uVar7 = 0;
    if ((char)param_1[0x121] != '\0') {
      uVar7 = 3;
    }
    *(undefined1 *)(param_1 + 0x15) = uVar7;
  }
  local_90[0] = 0;
  uStack_80 = 0x10;
  (**(code **)(*param_1 + 0x10))(&local_98,param_1);
  lVar4 = local_98;
  if (local_98 == 0) {
    lVar9 = 0;
  }
  else {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x10))();
    lVar9 = local_98;
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x10))();
      bVar1 = false;
      goto LAB_00c276a4;
    }
  }
  bVar1 = true;
LAB_00c276a4:
  local_110 = (undefined1 *)0x0;
  puStack_108 = (undefined1 *)0x0;
  local_f0 = lVar4;
  local_120 = (undefined1 *)0x0;
  local_118 = (code *)0x0;
  local_100 = param_1;
  local_f8 = param_3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_120 = &LAB_00c29950;
  local_118 = FUN_00c29a90;
  local_110 = &LAB_00c29ad0;
  puStack_108 = &LAB_00c29b00;
  local_190 = (undefined1 *)0x0;
  puStack_188 = (undefined1 *)0x0;
  local_1a0 = (undefined1 *)0x0;
  local_198 = (code *)0x0;
  local_180 = param_1;
  local_178 = param_4;
  local_170 = lVar9;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  local_1a0 = &LAB_00c29b30;
  local_198 = FUN_00c29b60;
  local_190 = &LAB_00c29ba0;
  puStack_188 = &LAB_00c29bd0;
  uVar5 = FUN_01299050(1,local_90,&local_120,&local_1a0);
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
  puVar10 = *(undefined1 **)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (puVar10 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar10 + 0x48) + 0x10))();
  }
  local_120 = puVar10;
  lVar6 = FUN_00fe2800(&local_120);
  FUN_012ae720(*(undefined8 *)(lVar6 + 0x80));
  if (local_120 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
    local_120 = (undefined1 *)0x0;
  }
  if ((uVar5 & 1) == 0) {
    param_2 = param_4;
  }
  *(undefined4 *)(param_1 + 0x13) = param_2;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
  }
  return;
}


