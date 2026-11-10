/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c36f60; name: FUN_00c36f60
 */


void FUN_00c36f60(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  long *local_1d0;
  undefined4 local_1c8;
  long local_1c0;
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  long *local_150;
  undefined4 local_148;
  long local_140;
  undefined4 local_e8 [2];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 local_c8;
  undefined4 local_c4;
  long local_c0;
  undefined8 uStack_b8;
  long local_b0;
  char local_a8 [8];
  long local_a0;
  undefined4 local_98;
  char local_94;
  undefined1 auStack_92 [8];
  char local_8a;
  undefined1 auStack_88 [8];
  char local_80;
  undefined1 auStack_7e [14];
  undefined4 local_70;
  undefined1 local_6b;
  
  if ((param_1[0xd] != 0) &&
     (puVar8 = *(undefined8 **)(param_1[0xd] + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar8)(puVar8);
    lVar4 = FUN_00be66c0();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        FUN_00c1cec0(&local_170,puVar8 + -10);
        goto joined_r0x00c370b4;
      }
    }
  }
  FUN_00c1cec0(&local_170,0);
joined_r0x00c370b4:
  if (local_170 == (undefined1 *)0x0) {
LAB_00c370b8:
    *(undefined4 *)(param_1 + 0x11) = param_4;
    return;
  }
  puVar8 = *(undefined8 **)(local_170 + 0x60);
  if (puVar8 != (undefined8 *)0x0) {
    plVar3 = (long *)(**(code **)*puVar8)(puVar8);
    lVar4 = FUN_00c1bbc0();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        puVar8 = puVar8 + -10;
        goto joined_r0x00c370e4;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
joined_r0x00c370e4:
  if (local_170 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
    local_170 = (undefined1 *)0x0;
  }
  if ((puVar8 == (undefined8 *)0x0) || (FUN_00bdc720(local_a8,puVar8), local_a8[0] == '\0'))
  goto LAB_00c370b8;
  (**(code **)(*param_1 + 0x10))(&local_b0,param_1);
  lVar4 = local_b0;
  if (local_b0 == 0) {
    lVar9 = 0;
  }
  else {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x10))();
    lVar9 = local_b0;
    if (local_b0 != 0) {
      (**(code **)(*(long *)(local_b0 + 0x48) + 0x10))();
      bVar1 = false;
      goto LAB_00c370f4;
    }
  }
  bVar1 = true;
LAB_00c370f4:
  plVar3 = (long *)param_1[1];
  lVar5 = (**(code **)(*plVar3 + 0x10))(plVar3,0x644,8);
  lVar7 = param_1[0x12e];
  param_1[0x12e] = lVar5;
  if (lVar7 != 0) {
    (**(code **)(*(long *)param_1[0x12f] + 0x18))
              ((long *)param_1[0x12f],lVar7,param_1[0x130],param_1[0x131]);
    lVar5 = param_1[0x12e];
  }
  param_1[0x12f] = (long)plVar3;
  param_1[0x130] = 0x644;
  param_1[0x131] = 8;
  FUN_009fe660(local_a0,lVar5);
  FUN_017cbe80(auStack_e0);
  FUN_017cbe80(auStack_d8);
  FUN_017cbe80(auStack_d0);
  local_e8[0] = local_98;
  local_1f0 = (undefined1 *)FUN_00be0420(auStack_92);
  FUN_017cc100(&local_170,&local_1f0);
  FUN_017cbf30(auStack_e0,&local_170);
  local_1f0 = (undefined1 *)FUN_00be0420(auStack_88);
  FUN_017cc100(&local_170,&local_1f0);
  FUN_017cbf30(auStack_d8,&local_170);
  local_1f0 = (undefined1 *)FUN_00be0420(auStack_7e);
  FUN_017cc100(&local_170,&local_1f0);
  FUN_017cbf30(auStack_d0,&local_170);
  local_c8 = local_6b;
  local_c4 = local_70;
  local_c0 = param_1[0x12e];
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_140 = lVar4;
  uStack_b8 = 0x644;
  local_150 = param_1;
  local_148 = param_3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_170 = &LAB_00c38170;
  local_168 = FUN_00c38220;
  local_160 = &LAB_00c38260;
  puStack_158 = &LAB_00c38290;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_1f0 = (undefined1 *)0x0;
  local_1e8 = (code *)0x0;
  local_1d0 = param_1;
  local_1c8 = param_4;
  local_1c0 = lVar9;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  local_1f0 = &LAB_00c382c0;
  local_1e8 = FUN_00c38330;
  local_1e0 = &LAB_00c38370;
  puStack_1d8 = &LAB_00c383a0;
  uVar6 = FUN_0122b900(local_e8,&local_170,&local_1f0);
  pcVar2 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar2)(&local_1d0);
  }
  pcVar2 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar2)(&local_150);
  }
  puVar10 = *(undefined1 **)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (puVar10 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar10 + 0x48) + 0x10))();
  }
  local_170 = puVar10;
  lVar5 = FUN_00fe2800(&local_170);
  FUN_012ae720(*(undefined8 *)(lVar5 + 0x80));
  if (local_170 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
    local_170 = (undefined1 *)0x0;
  }
  if ((uVar6 & 1) == 0) {
    param_2 = param_4;
  }
  *(undefined4 *)(param_1 + 0x11) = param_2;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = 0;
  }
  if (local_a8[0] == '\0') {
    return;
  }
  if (local_80 != '\0') {
    local_80 = '\0';
  }
  if (local_8a != '\0') {
    local_8a = '\0';
  }
  if (local_94 != '\0') {
    local_94 = '\0';
  }
  if (local_a0 == 0) {
    return;
  }
  (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
  return;
}


