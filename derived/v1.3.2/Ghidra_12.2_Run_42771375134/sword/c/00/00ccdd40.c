/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ccdd40; name: FUN_00ccdd40
 */


void FUN_00ccdd40(long param_1,undefined8 *param_2,char param_3)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined1 *local_190;
  code *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  long alStack_170 [12];
  undefined8 local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90 [3];
  long local_78;
  long local_70 [2];
  
  lVar10 = *(long *)(param_1 + 0x2b0);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(lVar10 + 0x2e0);
  lVar1 = param_1 + 0x100;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  puVar3 = PTR_DAT_0271c800;
  lVar12 = (long)param_3;
  puVar13 = PTR_DAT_0271c800 + lVar12 * 0x88;
  lVar6 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),puVar13 + 8);
  lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar13 + 0x20);
  iVar5 = FUN_0077d480(*param_2);
  if (iVar5 == 0) {
    local_70[0] = *(long *)(param_1 + 0x6c8);
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
    }
    local_90[0] = 0x59549ed01e8a7dc;
    FUN_008c4e70(lVar1,puVar13,local_70,local_90,10);
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
      local_70[0] = 0;
    }
    lVar8 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar3 + lVar12 * 0x88 + 0x10);
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
    FUN_00ffd010(lVar1,puVar3 + lVar12 * 0x88 + 0x38);
    FUN_00ffd010(lVar1,puVar3 + lVar12 * 0x88 + 0x30);
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
  }
  else {
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | *(byte *)((long)param_2 + 0xe);
    FUN_00ffd010(lVar1,puVar3 + lVar12 * 0x88 + 0x28);
    if (*(char *)((long)param_2 + 0xe) != '\0') {
      FUN_006cf0a0(local_90,&DAT_02643128);
      FUN_016d3620(local_90);
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
    }
    uVar14 = *(undefined8 *)(param_1 + 0x6c8);
    local_90[0] = 0xac6c4dc50f4135ab;
    lVar7 = *(long *)(lVar10 + 0x2e8);
    if (lVar7 == 0) {
      FUN_0077eb10(uVar14,local_90,0);
    }
    else {
      plVar15 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0077eb10(uVar14,local_90,lVar7);
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    FUN_014c9110(lVar11,0,*param_2,*(undefined1 *)((long)param_2 + 0xc),
                 *(undefined1 *)((long)param_2 + 0xd));
    FUN_0167cce0(lVar10,puVar13,10);
    lVar7 = *(long *)(param_1 + 0x528);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    local_108 = (code *)0x0;
    FUN_0168e370(lVar7,(int)param_3,*(undefined4 *)(param_2 + 1),0,&local_110);
    pcVar4 = local_108;
    if (local_108 != (code *)0x0) {
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = 0;
      local_108 = (code *)0x0;
      (*pcVar4)(&local_f0);
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    puVar3 = PTR_DAT_0271c800;
    if (*(long *)(param_1 + 0x2b0) != 0) {
      puVar13 = PTR_DAT_0271c800 + lVar12 * 0x88 + 0x30;
      uVar9 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),puVar13);
      if ((uVar9 & 1) == 0) {
        FUN_00ffd430(lVar1,puVar13);
      }
    }
    lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar3 + lVar12 * 0x88 + 0x18);
    if ((*(byte *)(lVar7 + 0x58) & 1) != 0) {
      local_180 = &LAB_00cd0160;
      local_190 = &LAB_00cd0130;
      local_188 = FUN_00cd0150;
      local_178 = &LAB_00cd0170;
      alStack_170[0] = lVar6;
      FUN_00ffd120(lVar1,puVar3 + lVar12 * 0x88 + 0x40,&local_190);
      pcVar4 = local_188;
      bVar2 = local_188 != (code *)0x0;
      local_188 = (code *)0x0;
      if (bVar2) {
        local_180 = (undefined1 *)0x0;
        local_178 = (undefined1 *)0x0;
        local_190 = (undefined1 *)0x0;
        local_188 = (code *)0x0;
        (*pcVar4)(alStack_170);
      }
    }
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  return;
}


