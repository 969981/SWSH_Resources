/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ff650; name: FUN_011ff650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_011ff650(long param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long alStack_1f0 [12];
  undefined1 *local_190;
  code *local_188;
  code *local_180;
  undefined1 *local_178;
  long alStack_170 [12];
  undefined1 *local_110;
  code *local_108;
  code *local_100;
  undefined1 *local_f8;
  long alStack_f0 [13];
  undefined4 local_84;
  long local_80;
  long *local_78;
  long local_70 [2];
  
  lVar6 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (lVar6 == 0) {
    if (_DAT_00000070 != 0) {
      return 0;
    }
  }
  else {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))((long *)(lVar6 + 0x48));
    FUN_01127680(local_70,lVar6);
    lVar9 = *(long *)(local_70[0] + 0x70);
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    }
    if (lVar9 != 0) {
      uVar8 = 0;
      goto LAB_011ffb20;
    }
  }
  local_70[0] = *(long *)(param_1 + 0x58);
  local_78 = (long *)0x1d077eb;
  lVar9 = FUN_01203310(&local_80,local_70[0],local_70,&local_78);
  if (lVar9 == 0) {
    uVar8 = 0;
  }
  else {
    plVar7 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    local_84 = 0;
    FUN_011fe920(&local_80,lVar9,&local_84);
    FUN_011ffd30(&local_78,local_80);
    plVar10 = local_78;
    local_100 = FUN_01208040;
    local_110 = &LAB_01208010;
    local_108 = FUN_01208030;
    local_f8 = &LAB_01208050;
    alStack_f0[0] = param_1;
    iVar3 = FUN_007dc9a0(local_78);
    if (iVar3 == 0) {
      pcVar5 = (code *)plVar10[0x25];
      if (pcVar5 != (code *)0x0) {
        plVar10[0x26] = 0;
        plVar10[0x27] = 0;
        plVar10[0x24] = 0;
        plVar10[0x25] = 0;
        (*pcVar5)(plVar10 + 0x28);
      }
      if (local_100 != (code *)0x0) {
        (*local_100)(alStack_f0,plVar10 + 0x28);
        plVar10[0x27] = (long)local_f8;
        plVar10[0x25] = (long)local_108;
        plVar10[0x26] = (long)local_100;
        plVar10[0x24] = (long)local_110;
      }
LAB_011ff7f0:
      (**(code **)(plVar10[9] + 0x10))();
    }
    else if (plVar10 != (long *)0x0) goto LAB_011ff7f0;
    local_180 = FUN_01208090;
    local_190 = &LAB_01208060;
    local_188 = FUN_01208080;
    local_178 = &LAB_012080a0;
    alStack_170[0] = param_1;
    iVar3 = FUN_007dc9a0(plVar10);
    if (iVar3 == 0) {
      pcVar5 = (code *)plVar10[0x45];
      if (pcVar5 != (code *)0x0) {
        plVar10[0x46] = 0;
        plVar10[0x47] = 0;
        plVar10[0x44] = 0;
        plVar10[0x45] = 0;
        (*pcVar5)(plVar10 + 0x48);
      }
      if (local_180 != (code *)0x0) {
        (*local_180)(alStack_170,plVar10 + 0x48);
        plVar10[0x47] = (long)local_178;
        plVar10[0x45] = (long)local_188;
        plVar10[0x46] = (long)local_180;
        plVar10[0x44] = (long)local_190;
      }
LAB_011ff898:
      (**(code **)(plVar10[9] + 0x10))();
    }
    else if (plVar10 != (long *)0x0) goto LAB_011ff898;
    alStack_1f0[0] = param_1;
    iVar3 = FUN_007dc9a0(plVar10);
    if (iVar3 == 0) {
      pcVar5 = (code *)plVar10[0x35];
      if (pcVar5 != (code *)0x0) {
        plVar10[0x36] = 0;
        plVar10[0x37] = 0;
        plVar10[0x34] = 0;
        plVar10[0x35] = 0;
        (*pcVar5)(plVar10 + 0x38);
      }
      FUN_01208180(alStack_1f0,plVar10 + 0x38);
      plVar10[0x37] = (long)&LAB_01208190;
      plVar10[0x35] = (long)FUN_01208170;
      plVar10[0x36] = (long)FUN_01208180;
      plVar10[0x34] = (long)&LAB_012080b0;
LAB_011ff94c:
      plVar11 = plVar10 + 9;
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_007dcc80(plVar10);
      (**(code **)(plVar10[9] + 0x10))(plVar11);
      bVar1 = false;
    }
    else {
      if (plVar10 != (long *)0x0) goto LAB_011ff94c;
      FUN_007dcc80(0);
      bVar1 = true;
    }
    (**(code **)(*plVar10 + 0x10))(local_70,plVar10);
    if (*(long *)(param_1 + 0x138) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x138) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    lVar2 = local_70[0];
    local_70[0] = 0;
    *(long *)(param_1 + 0x138) = lVar2;
    plVar10 = plVar10 + 9;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    if (!bVar1) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    FUN_01208170(alStack_1f0);
    if (!bVar1) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    pcVar5 = local_188;
    if (local_188 != (code *)0x0) {
      local_180 = (code *)0x0;
      local_178 = (undefined1 *)0x0;
      local_190 = (undefined1 *)0x0;
      local_188 = (code *)0x0;
      (*pcVar5)(alStack_170);
    }
    if (!bVar1) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    pcVar5 = local_108;
    if (local_108 != (code *)0x0) {
      local_100 = (code *)0x0;
      local_f8 = (undefined1 *)0x0;
      local_110 = (undefined1 *)0x0;
      local_108 = (code *)0x0;
      (*pcVar5)(alStack_f0);
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(local_78[9] + 0x18))();
      local_78 = (long *)0x0;
    }
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    *(undefined8 *)(param_1 + 0x80) = 0x400000001;
    if (lVar6 == 0) {
      local_70[0] = 0;
    }
    else {
      FUN_01127680(local_70,lVar6);
    }
    lVar2 = local_70[0];
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))(plVar7);
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))(plVar7);
    lVar4 = *(long *)(lVar2 + 0x70);
    *(long *)(lVar2 + 0x70) = lVar9;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
      local_70[0] = 0;
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
    uVar8 = 1;
  }
  if (lVar6 == 0) {
    return uVar8;
  }
LAB_011ffb20:
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return uVar8;
}


