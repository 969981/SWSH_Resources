/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c3d020; name: FUN_00c3d020
 */


void FUN_00c3d020(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  long *local_150;
  undefined4 local_148;
  long local_140;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  long *local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  long local_b8;
  long local_70 [2];
  
  (**(code **)(*param_1 + 0x10))(local_70);
  lVar3 = local_70[0];
  if (local_70[0] == 0) {
    lVar6 = 0;
LAB_00c3d0a4:
    bVar1 = true;
  }
  else {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
    lVar6 = local_70[0];
    if (local_70[0] == 0) goto LAB_00c3d0a4;
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
    bVar1 = false;
  }
  lVar4 = FUN_007ad1c0(*(undefined8 *)PTR_DAT_02716748);
  if (lVar4 != 0) {
    uVar8 = *(undefined8 *)(lVar4 + 0x10);
    local_e0 = (undefined1 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    local_b8 = lVar3;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    local_d0 = param_1;
    uStack_c8 = param_6;
    local_c0 = param_3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_f0 = &LAB_00c3ffa0;
    local_e8 = FUN_00c3ffe0;
    local_e0 = &LAB_00c40020;
    puStack_d8 = &LAB_00c40050;
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    local_150 = param_1;
    local_148 = param_4;
    local_140 = lVar6;
    if (!bVar1) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    local_170 = &LAB_00c40080;
    local_168 = FUN_00c400b0;
    local_160 = &LAB_00c400f0;
    puStack_158 = &LAB_00c40120;
    uVar5 = FUN_01230520(param_5,uVar8,&local_f0,&local_170);
    pcVar2 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = (undefined1 *)0x0;
      puStack_158 = (undefined1 *)0x0;
      local_170 = (undefined1 *)0x0;
      local_168 = (code *)0x0;
      (*pcVar2)(&local_150);
    }
    pcVar2 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      puStack_d8 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar2)(&local_d0);
    }
    puVar7 = *(undefined1 **)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
    if (puVar7 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(puVar7 + 0x48) + 0x10))();
    }
    local_f0 = puVar7;
    lVar4 = FUN_00fe2800(&local_f0);
    FUN_012ae720(*(undefined8 *)(lVar4 + 0x80));
    if (local_f0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
      local_f0 = (undefined1 *)0x0;
    }
    if ((uVar5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x13) = param_2;
      goto joined_r0x00c3d21c;
    }
  }
  *(undefined4 *)(param_1 + 0x13) = param_4;
joined_r0x00c3d21c:
  if (!bVar1) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  return;
}


