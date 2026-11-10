/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa88f0; name: FUN_00aa88f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00aa88f0(long param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined1 *puVar10;
  char cVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  char *pcVar16;
  code **ppcVar17;
  code *pcVar18;
  byte *pbVar19;
  long *plVar20;
  undefined8 uVar21;
  uint *puVar22;
  long *plVar23;
  long *plVar24;
  undefined8 uVar25;
  long local_150;
  long local_148;
  undefined8 local_140;
  code *local_138;
  code *local_130;
  undefined1 *puStack_128;
  long local_120;
  undefined8 local_118;
  code *local_110;
  code *pcStack_108;
  code *local_100;
  undefined1 *puStack_f8;
  long local_f0;
  undefined4 local_e8;
  ulong local_b8;
  byte *pbStack_b0;
  size_t local_a8;
  long local_a0;
  code *local_98;
  code *local_90;
  code *local_88;
  undefined1 *local_80;
  long local_78;
  undefined4 local_70;
  
  if (7 < *(uint *)(param_1 + 0x10)) {
    return;
  }
  lVar13 = *(long *)(param_1 + 8);
  plVar20 = *(long **)(lVar13 + 0x298);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    if (*(char *)(param_1 + 0x34) != '\0') {
      return;
    }
    uVar12 = 1;
    break;
  case 1:
    uVar4 = *(uint *)(param_1 + (long)*(int *)(param_1 + 0x30) * 4 + 0x14);
    if (uVar4 == 0xff) {
      plVar23 = (long *)0x0;
    }
    else {
      plVar23 = *(long **)(lVar13 + (ulong)uVar4 * 8 + 0x548);
      if (plVar23 != (long *)0x0) {
        (**(code **)(plVar23[9] + 0x10))();
      }
    }
    uVar15 = (**(code **)(*plVar23 + 400))(plVar23);
    if (((uVar15 & 1) == 0) || (uVar15 = FUN_00ad2d90(plVar23), (uVar15 & 1) == 0)) {
switchD_00aa8dc8_caseD_0:
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x10) = 6;
      goto joined_r0x00aa9590;
    }
    (**(code **)(**(long **)(param_1 + 8) + 0x7f8))(*(long **)(param_1 + 8),uVar4);
    uVar12 = FUN_008e19f0();
    cVar11 = FUN_00ad59f0(plVar23);
    switch(uVar12) {
    case 0:
      goto switchD_00aa8dc8_caseD_0;
    case 1:
      if (cVar11 == '\0') {
        FUN_00a8e040(&local_140,"bin/battle/waza/particle/es005/es005_paralysis.ptcl");
      }
      else {
        FUN_00a75320(&local_140,"bin/battle/waza/particle/es005/es005_g_paralysis.ptcl");
      }
      break;
    case 2:
      if (cVar11 == '\0') {
        pcVar16 = "bin/battle/waza/particle/es001/es001_nemuri.ptcl";
        goto LAB_00aa90e4;
      }
      pcVar16 = "bin/battle/waza/particle/es001/es001_g_nemuri.ptcl";
LAB_00aa8f38:
      FUN_00a8a290(&local_140,pcVar16);
      break;
    case 3:
      if (cVar11 == '\0') {
        FUN_00aa6ea0(&local_140,"bin/battle/waza/particle/es004/es004_ice.ptcl");
      }
      else {
        FUN_00a8dc70(&local_140,"bin/battle/waza/particle/es004/es004_g_ice.ptcl");
      }
      break;
    case 4:
      if (cVar11 != '\0') {
        pcVar16 = "bin/battle/waza/particle/es003/es003_g_fire.ptcl";
        goto LAB_00aa90e4;
      }
      FUN_00a9fec0(&local_140,"bin/battle/waza/particle/es003/es003_fire.ptcl");
      break;
    default:
      if (cVar11 != '\0') {
        pcVar16 = "bin/battle/waza/particle/es002/es002_g_poison.ptcl";
        goto LAB_00aa8f38;
      }
      pcVar16 = "bin/battle/waza/particle/es002/es002_poison.ptcl";
LAB_00aa90e4:
      FUN_00aa0670(&local_140,pcVar16);
    }
    lVar13 = local_120;
    puVar10 = puStack_128;
    pcVar18 = local_130;
    pcVar2 = local_138;
    pcVar9 = local_140;
    ppcVar17 = (code **)PTR_PTR_02710928;
    uVar12 = (undefined4)local_118;
    local_120 = 0;
    if (puStack_128 == (undefined1 *)0x0) {
      local_70 = 0;
      local_98 = (code *)0x0;
      local_90 = (code *)0xcbf29ce484222645;
      local_88 = (code *)&DAT_01d38550;
      local_80 = (undefined1 *)0x0;
      ppcVar17 = &local_88;
      local_78 = 0;
      uVar21 = *(undefined8 *)(param_1 + 8);
    }
    else {
      pcVar1 = (code *)PTR_PTR_02710928;
      if (local_140 != (code *)0x0) {
        pcVar1 = local_140 + 0x60;
      }
      local_140 = *(code **)pcVar1;
      FUN_00a8d290(&local_98,&local_140,&DAT_01d38550,(ulong)local_118 & 0xffffffff);
      uVar21 = *(undefined8 *)(param_1 + 8);
      if (local_80 == (undefined1 *)0x0) {
        ppcVar17 = &local_88;
      }
      else if (local_98 != (code *)0x0) {
        ppcVar17 = (code **)(local_98 + 0x60);
      }
    }
    pcVar16 = strrchr((char *)*ppcVar17,0x2f);
    pbStack_b0 = (byte *)0x0;
    if (pcVar16 != (char *)0x0) {
      pbStack_b0 = (byte *)(pcVar16 + 1);
    }
    local_a8 = strlen((char *)pbStack_b0);
    bVar6 = *pbStack_b0;
    local_b8 = 0xcbf29ce484222645;
    if (bVar6 != 0) {
      local_b8 = 0xcbf29ce484222645;
      pbVar19 = pbStack_b0;
      do {
        pbVar19 = pbVar19 + 1;
        local_b8 = (local_b8 ^ bVar6) * 0x100000001b3;
        bVar6 = *pbVar19;
      } while (bVar6 != 0);
    }
    local_a0 = 0;
    FUN_00a69d70(&local_140,uVar21,&local_b8);
    if ((local_80 != (undefined1 *)0x0) && (local_98 != (code *)0x0)) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    }
    local_98 = (code *)0x0;
    local_90 = (code *)0xcbf29ce484222645;
    local_88 = (code *)&DAT_01d38550;
    local_80 = (undefined1 *)0x0;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    }
    local_78 = local_120;
    local_90 = local_138;
    local_88 = local_130;
    local_120 = 0;
    local_80 = puStack_128;
    local_70 = (undefined4)local_118;
    if (puStack_128 == (undefined1 *)0x0) {
      local_98 = local_140;
    }
    else {
      if (local_98 != (code *)0x0) {
        (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      }
      local_98 = local_140;
    }
    local_140 = (code *)0x0;
    local_138 = (code *)0xcbf29ce484222645;
    local_130 = (code *)&DAT_01d38550;
    puStack_128 = (undefined1 *)0x0;
    if (local_120 != 0) {
      (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
    }
    local_120 = 0;
    local_118 = (long *)((ulong)local_118._4_4_ << 0x20);
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    FUN_006dccd0(&local_140,*(undefined8 *)PTR_DAT_02710788,1,&local_98,0,plVar20,0);
    if (*(long *)(param_1 + 0x48) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x48) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    lVar14 = (long)local_140;
    *(code **)(param_1 + 0x48) = local_140;
    if (local_140 != (code *)0x0) {
      plVar24 = (long *)((long)local_140 + 0x48);
      (**(code **)(*plVar24 + 0x10))(plVar24);
      if ((*(long *)(param_1 + 0x50) != 0) || (*(long *)(param_1 + 0xd0) != 0)) {
        FUN_006e1e70(lVar14,param_1 + 0x40,1);
      }
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    if (pcVar9 != (code *)0x0 && puVar10 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(pcVar9 + 0x48) + 0x10))();
    }
    local_110 = pcVar9;
    pcStack_108 = pcVar2;
    local_100 = pcVar18;
    puStack_f8 = puVar10;
    local_f0 = lVar13;
    local_e8 = uVar12;
    pcVar2 = pcVar9;
    if (puVar10 != (undefined1 *)0x0) {
      pcVar2 = (code *)0x0;
    }
    local_140 = FUN_00aa95c0;
    local_138 = FUN_00aa96f0;
    local_130 = FUN_00aa9770;
    puStack_128 = &LAB_00aa9880;
    pcVar18 = *(code **)(param_1 + 0x58);
    local_120 = param_1;
    local_118 = plVar20;
    if (pcVar18 == (code *)0x0) {
LAB_00aa9468:
      (*local_130)(&local_120,param_1 + 0x70);
      *(undefined1 **)(param_1 + 0x68) = puStack_128;
      *(code **)(param_1 + 0x58) = local_138;
      *(code **)(param_1 + 0x60) = local_130;
      *(long *)(param_1 + 0x50) = (long)local_140;
    }
    else {
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(long *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      (*pcVar18)(param_1 + 0x70);
      if (local_130 != (code *)0x0) goto LAB_00aa9468;
    }
    lVar14 = *(long *)(param_1 + 0x48);
    if (lVar14 != 0) {
      plVar20 = (long *)(lVar14 + 0x48);
      (**(code **)(*plVar20 + 0x10))(plVar20);
      FUN_006e1e70(lVar14,param_1 + 0x40,1);
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
    pcVar18 = local_138;
    if (local_138 != (code *)0x0) {
      local_130 = (code *)0x0;
      puStack_128 = (undefined1 *)0x0;
      local_140 = (code *)0x0;
      local_138 = (code *)0x0;
      (*pcVar18)(&local_120);
    }
    if ((puVar10 != (undefined1 *)0x0) && (pcVar2 != (code *)0x0)) {
      (**(code **)(*(long *)(pcVar2 + 0x48) + 0x18))(pcVar2 + 0x48);
    }
    if ((local_80 != (undefined1 *)0x0) && (local_98 != (code *)0x0)) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    }
    local_98 = (code *)0x0;
    local_90 = (code *)0xcbf29ce484222645;
    local_88 = (code *)&DAT_01d38550;
    local_80 = (undefined1 *)0x0;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 2;
    if (pcVar9 != (code *)0x0 && puVar10 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(pcVar9 + 0x48) + 0x18))(pcVar9 + 0x48);
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
joined_r0x00aa9590:
    if (plVar23 == (long *)0x0) {
      return;
    }
    (**(code **)(plVar23[9] + 0x18))(plVar23 + 9);
    return;
  case 2:
    if (*(long *)(param_1 + 0x158) == 0) {
      return;
    }
    if (*(char *)(*(long *)(param_1 + 0x158) + 0x170) == '\0') {
      return;
    }
    local_98 = (code *)0x0;
    local_90 = (code *)0x0;
    FUN_00a66750(lVar13,&local_98);
    puVar8 = PTR_DAT_027108b8;
    puVar7 = PTR_DAT_02710860;
    puVar22 = *(uint **)(*(long *)(*(long *)PTR_DAT_027108b8 + 0x388) + 400);
    uVar4 = *puVar22;
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_00aa9598:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar20;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    lVar14 = (**(code **)(*plVar20 + 0x10))(plVar20,0x4d0,0x10);
    if (lVar14 == 0) {
      (**(code **)(*plVar20 + 0xb8))(plVar20);
    }
    FUN_00adc840(lVar14,*(undefined8 *)(param_1 + 8),plVar20,&local_98,(long)puVar22 + (ulong)uVar4)
    ;
    *(long **)(lVar14 + 8) = plVar20;
    *(long *)(lVar14 + 0x10) = lVar14;
    *(undefined8 *)(lVar14 + 0x18) = 0x4d0;
    *(undefined8 *)(lVar14 + 0x20) = 0x10;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x260) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x260) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x260) = 0;
    }
    *(long *)(param_1 + 0x260) = lVar14;
    FUN_00adc890(lVar14,param_1 + 0x150,0,0,0);
    puVar22 = *(uint **)(*(long *)(*(long *)puVar8 + 0x388) + 400);
    uVar4 = *puVar22;
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00aa9598;
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar20;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    lVar14 = (**(code **)(*plVar20 + 0x10))(plVar20,0x4d0,0x10);
    if (lVar14 == 0) {
      (**(code **)(*plVar20 + 0xb8))(plVar20);
    }
    FUN_00adc840(lVar14,*(undefined8 *)(param_1 + 8),plVar20,&local_98,(long)puVar22 + (ulong)uVar4)
    ;
    *(long **)(lVar14 + 8) = plVar20;
    *(long *)(lVar14 + 0x10) = lVar14;
    *(undefined8 *)(lVar14 + 0x18) = 0x4d0;
    *(undefined8 *)(lVar14 + 0x20) = 0x10;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x268) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x268) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x268) = 0;
    }
    *(long *)(param_1 + 0x268) = lVar14;
    FUN_00adc890(lVar14,param_1 + 0x150,0,0,1);
    (**(code **)(**(long **)(param_1 + 8) + 0x7f8))
              (*(long **)(param_1 + 8),
               *(undefined4 *)(param_1 + 0x14 + (long)*(int *)(param_1 + 0x30) * 4));
    uVar12 = FUN_008e19f0();
    uVar4 = *(uint *)(param_1 + 0x14 + (long)*(int *)(param_1 + 0x30) * 4);
    if ((uVar4 == 0xff) ||
       (lVar13 = *(long *)(*(long *)(param_1 + 8) + (ulong)uVar4 * 8 + 0x548), lVar13 == 0)) {
      cVar11 = FUN_00ad59f0(0);
    }
    else {
      plVar20 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar20 + 0x10))(plVar20);
      cVar11 = FUN_00ad59f0(lVar13);
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
    uVar21 = _DAT_01d4b700;
    local_130 = (code *)0x0;
    puStack_128 = (undefined1 *)0x0;
    uVar5 = *(undefined4 *)(param_1 + (long)*(int *)(param_1 + 0x30) * 4 + 0x14);
    local_140 = (code *)CONCAT44(uVar5,uVar5);
    local_120 = 100;
    local_118 = (long *)0x101010001010000;
    switch(uVar12) {
    case 1:
      local_130 = (code *)0x0;
      puStack_128 = (undefined1 *)0x0;
      uVar12 = 5;
      if (cVar11 == '\0') {
        uVar12 = 0xf;
      }
      break;
    case 2:
      if (cVar11 == '\0') {
        puStack_128 = (undefined1 *)_UNK_01d4b318;
        local_130 = (code *)_DAT_01d4b310;
        lVar13 = *(long *)(param_1 + 0x260);
        *(undefined8 *)(lVar13 + 0xd8) = _UNK_01d4b708;
        *(undefined8 *)(lVar13 + 0xd0) = uVar21;
        *(undefined1 *)(lVar13 + 0xc0) = 1;
      }
      else {
        local_118 = (long *)0x101010001010100;
      }
      uVar12 = 6;
      break;
    case 3:
      local_130 = (code *)0x0;
      puStack_128 = (undefined1 *)0x0;
      if (cVar11 == '\0') {
        uVar21 = _DAT_01d4a090;
        uVar25 = _UNK_01d4a098;
LAB_00aa8f84:
        puStack_128 = (undefined1 *)0x0;
        local_130 = (code *)0x0;
        lVar13 = *(long *)(param_1 + 0x260);
        *(undefined1 *)(lVar13 + 0xc0) = 1;
        *(undefined8 *)(lVar13 + 0xd8) = uVar25;
        *(undefined8 *)(lVar13 + 0xd0) = uVar21;
        goto LAB_00aa8fd0;
      }
      uVar12 = 0;
      local_118 = (long *)0x101010001010100;
      break;
    case 4:
      if (cVar11 == '\0') {
        uVar21 = _DAT_01d4a870;
        uVar25 = _UNK_01d4a878;
        goto LAB_00aa8f84;
      }
LAB_00aa8ef8:
      puStack_128 = (undefined1 *)0x0;
      local_130 = (code *)0x0;
      uVar12 = 5;
      break;
    default:
      if (cVar11 != '\0') goto LAB_00aa8ef8;
      puStack_128 = (undefined1 *)_UNK_01d4b6f8;
      local_130 = (code *)_DAT_01d4b6f0;
LAB_00aa8fd0:
      uVar12 = 0xf;
    }
    local_138 = (code *)CONCAT44(local_138._4_4_,uVar12);
    lVar14 = *(long *)(param_1 + 0x260);
    lVar13 = *(long *)(param_1 + 0x268);
    *(undefined8 *)(lVar13 + 0xd8) = *(undefined8 *)(lVar14 + 0xd8);
    *(undefined8 *)(lVar13 + 0xd0) = *(undefined8 *)(lVar14 + 0xd0);
    *(undefined1 *)(lVar13 + 0xc0) = 1;
    uVar21 = *(undefined8 *)(param_1 + 8);
    local_148 = *(long *)(param_1 + 0x260);
    if (local_148 != 0) {
      (**(code **)(*(long *)(local_148 + 0x48) + 0x10))();
    }
    FUN_00a80d50(uVar21,&local_148,0,&local_140,0);
    if (local_148 != 0) {
      (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
      local_148 = 0;
    }
    uVar21 = *(undefined8 *)(param_1 + 8);
    local_150 = *(long *)(param_1 + 0x268);
    if (local_150 != 0) {
      (**(code **)(*(long *)(local_150 + 0x48) + 0x10))();
    }
    FUN_00a80d50(uVar21,&local_150,0,&local_140,0);
    if (local_150 != 0) {
      (**(code **)(*(long *)(local_150 + 0x48) + 0x18))();
    }
    uVar12 = 4;
    *(undefined4 *)(param_1 + 0x38) = 0;
    break;
  case 3:
    iVar3 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar3 + 1;
    if (iVar3 < 0x50) {
      return;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_00adca50(*(undefined8 *)(param_1 + 0x260));
    FUN_00adca50(*(undefined8 *)(param_1 + 0x268));
    lVar13 = *(long *)(param_1 + 0x260);
    *(undefined8 *)(param_1 + 0x260) = 0;
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
    }
    lVar13 = *(long *)(param_1 + 0x268);
    *(undefined8 *)(param_1 + 0x268) = 0;
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
    }
    if (*(long *)(param_1 + 0x158) == 0) {
      *(undefined8 *)(param_1 + 0x158) = 0;
    }
    else {
      FUN_006e2100(*(long *)(param_1 + 0x158),param_1 + 0x150);
      lVar13 = *(long *)(param_1 + 0x158);
      *(undefined8 *)(param_1 + 0x158) = 0;
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
      }
    }
    uVar12 = 5;
    break;
  case 4:
    lVar13 = *(long *)(*(long *)(param_1 + 0x260) + 0x4b8);
    if (lVar13 == 0) {
      FUN_007946a0(0,1);
      lVar13 = *(long *)(*(long *)(param_1 + 0x268) + 0x4b8);
      if (lVar13 != 0) goto LAB_00aa8994;
LAB_00aa8e08:
      FUN_007946a0(0,1);
    }
    else {
      plVar20 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar20 + 0x10))(plVar20);
      FUN_007946a0(lVar13,1);
      (**(code **)(*plVar20 + 0x18))(plVar20);
      lVar13 = *(long *)(*(long *)(param_1 + 0x268) + 0x4b8);
      if (lVar13 == 0) goto LAB_00aa8e08;
LAB_00aa8994:
      plVar20 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar20 + 0x10))(plVar20);
      FUN_007946a0(lVar13,1);
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
    uVar12 = 3;
    break;
  case 5:
    FUN_008d4280(&local_140,plVar20);
    uVar15 = FUN_008d42a0(&local_140,0);
    if ((uVar15 & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    goto LAB_00aa8d44;
  case 6:
    iVar3 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar3 + 1;
    if (0x4f < iVar3) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x10) = 7;
    }
    if (*(char *)(param_1 + 0x34) == '\0') {
      return;
    }
LAB_00aa8d44:
    uVar12 = 7;
    break;
  case 7:
    iVar3 = 0;
    if (*(int *)(param_1 + 0x30) < 6) {
      iVar3 = *(int *)(param_1 + 0x30) + 1;
    }
    *(int *)(param_1 + 0x30) = iVar3;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar12;
  return;
}


