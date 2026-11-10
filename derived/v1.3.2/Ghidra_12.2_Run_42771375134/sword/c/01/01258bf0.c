/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01258bf0; name: FUN_01258bf0
 */


/* WARNING: Removing unreachable block (ram,0x012592d8) */
/* WARNING: Removing unreachable block (ram,0x01259368) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01258bf0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long alStack_2c0 [12];
  undefined1 *local_260;
  code *local_258;
  code *local_250;
  undefined1 *local_248;
  undefined1 local_240 [96];
  undefined1 *local_1e0;
  code *local_1d8;
  code *local_1d0;
  undefined1 *local_1c8;
  long local_1c0 [13];
  long local_158;
  long local_150;
  undefined4 local_148;
  undefined4 local_144;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined1 *local_110;
  code *local_108;
  code *local_100;
  undefined1 *local_f8;
  long local_f0 [13];
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *puStack_68;
  long local_60;
  long local_58;
  char *local_50;
  long local_48;
  
  puVar2 = PTR_DAT_02710880;
  lVar9 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (lVar9 == 0) {
    if (_DAT_00000078 != 0) {
      return 0;
    }
  }
  else {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    FUN_01127680(&local_70,lVar9);
    lVar12 = *(long *)(local_70 + 0x78);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    }
    if (lVar12 != 0) {
      uVar10 = 0;
      goto LAB_01259500;
    }
  }
  lVar12 = *(long *)(*(long *)PTR_DAT_02710540 + 200);
  FUN_0122b4d0(&local_58,lVar12,param_1);
  FUN_0122b4d0(&local_60,lVar12,param_2);
  iVar5 = FUN_011faad0(*(undefined8 *)PTR_DAT_02710940);
  uVar6 = FUN_012092f0(*(undefined8 *)puVar2);
  local_70 = DAT_02688108;
  puStack_68 = PTR_DAT_02688110;
  local_50 = "RequestRecoverConnection";
  local_48 = lVar12;
  lVar12 = FUN_01203310(&local_78,lVar12,&local_48,&local_50);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  if ((iVar5 < 3) && (((uVar6 ^ 1) & 1) == 0)) {
    FUN_01259540(&local_78,lVar12);
    FUN_011ffd30(&local_50,local_78);
    pcVar3 = local_50;
    if (lVar9 == 0) {
      local_88 = 0;
    }
    else {
      FUN_01127680(&local_88,lVar9);
    }
    (**(code **)(**(long **)(local_88 + 0x80) + 0x10))(&local_48);
    local_80 = local_48;
    FUN_0122c210(&local_48,pcVar3,&local_80);
    lVar4 = local_48;
    local_f0[0] = local_58;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    }
    local_100 = FUN_0125ec90;
    local_110 = &LAB_0125ec10;
    local_108 = FUN_0125ec50;
    local_f8 = &LAB_0125ecb0;
    iVar5 = FUN_007dc9a0(lVar4);
    if (iVar5 == 0) {
      pcVar8 = *(code **)(lVar4 + 0x128);
      if (pcVar8 != (code *)0x0) {
        *(undefined8 *)(lVar4 + 0x130) = 0;
        *(undefined8 *)(lVar4 + 0x138) = 0;
        *(undefined8 *)(lVar4 + 0x120) = 0;
        *(undefined8 *)(lVar4 + 0x128) = 0;
        (*pcVar8)(lVar4 + 0x140);
      }
      if (local_100 != (code *)0x0) {
        (*local_100)(local_f0,lVar4 + 0x140);
        *(undefined1 **)(lVar4 + 0x138) = local_f8;
        *(code **)(lVar4 + 0x128) = local_108;
        *(code **)(lVar4 + 0x130) = local_100;
        *(undefined8 *)(lVar4 + 0x120) = local_110;
      }
LAB_01258f90:
      plVar11 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    else if (lVar4 != 0) goto LAB_01258f90;
    pcVar8 = local_108;
    if (local_108 != (code *)0x0) {
      local_100 = (code *)0x0;
      local_f8 = (undefined1 *)0x0;
      local_110 = (undefined1 *)0x0;
      local_108 = (code *)0x0;
      (*pcVar8)(local_f0);
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
    }
    if (local_50 != (char *)0x0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = (char *)0x0;
    }
    lVar4 = local_140;
    lVar7 = 0;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
      lVar4 = local_140;
      lVar7 = local_78;
    }
  }
  else {
    FUN_012596c0(&local_140,lVar12);
    local_144 = 0;
    FUN_011fe920(&local_138,local_140,&local_144);
    FUN_011ffd30(&local_130,local_138);
    FUN_01258770(&local_128,local_130);
    FUN_012588f0(&local_120,local_128);
    FUN_01258a70(&local_118,local_120);
    FUN_01259840(&local_88,local_118);
    FUN_012599c0(&local_80,local_88,&local_70);
    FUN_01259b40(&local_78,local_80);
    local_148 = 0;
    FUN_01259cc0(&local_50,local_78,&local_148);
    pcVar3 = local_50;
    if (lVar9 == 0) {
      local_158 = 0;
    }
    else {
      FUN_01127680(&local_158,lVar9);
    }
    (**(code **)(**(long **)(local_158 + 0x80) + 0x10))(&local_48);
    local_150 = local_48;
    FUN_0122c210(&local_48,pcVar3,&local_150);
    lVar4 = local_48;
    local_1c0[0] = local_58;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    }
    local_1d0 = FUN_01262490;
    local_1e0 = &LAB_01262410;
    local_1d8 = FUN_01262450;
    local_1c8 = &LAB_012624b0;
    iVar5 = FUN_007dc9a0(lVar4);
    if (iVar5 == 0) {
      pcVar8 = *(code **)(lVar4 + 0x128);
      if (pcVar8 != (code *)0x0) {
        *(undefined8 *)(lVar4 + 0x130) = 0;
        *(undefined8 *)(lVar4 + 0x138) = 0;
        *(undefined8 *)(lVar4 + 0x120) = 0;
        *(undefined8 *)(lVar4 + 0x128) = 0;
        (*pcVar8)(lVar4 + 0x140);
      }
      if (local_1d0 != (code *)0x0) {
        (*local_1d0)(local_1c0,lVar4 + 0x140);
        *(undefined1 **)(lVar4 + 0x138) = local_1c8;
        *(code **)(lVar4 + 0x128) = local_1d8;
        *(code **)(lVar4 + 0x130) = local_1d0;
        *(undefined8 *)(lVar4 + 0x120) = local_1e0;
      }
LAB_0125909c:
      plVar11 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    else if (lVar4 != 0) goto LAB_0125909c;
    pcVar8 = local_1d8;
    if (local_1d8 != (code *)0x0) {
      local_1d0 = (code *)0x0;
      local_1c8 = (undefined1 *)0x0;
      local_1e0 = (undefined1 *)0x0;
      local_1d8 = (code *)0x0;
      (*pcVar8)(local_1c0);
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (local_150 != 0) {
      (**(code **)(*(long *)(local_150 + 0x48) + 0x18))();
      local_150 = 0;
    }
    if (local_158 != 0) {
      (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
      local_158 = 0;
    }
    if (local_50 != (char *)0x0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = (char *)0x0;
    }
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
    }
    if (local_118 != 0) {
      (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
      local_118 = 0;
    }
    if (local_120 != 0) {
      (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
      local_120 = 0;
    }
    if (local_128 != 0) {
      (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
      local_128 = 0;
    }
    if (local_130 != 0) {
      (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
      local_130 = 0;
    }
    if (local_138 != 0) {
      (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
      local_138 = 0;
    }
    lVar4 = 0;
    lVar7 = local_78;
    if (local_140 != 0) {
      (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
      local_140 = 0;
      lVar4 = local_140;
      lVar7 = local_78;
    }
  }
  local_78 = lVar7;
  local_140 = lVar4;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
  }
  local_250 = FUN_01262510;
  local_260 = &LAB_012624c0;
  local_258 = FUN_012624d0;
  local_248 = &LAB_01262530;
  iVar5 = FUN_007dc9a0(lVar12);
  if (iVar5 == 0) {
    pcVar8 = *(code **)(lVar12 + 0x228);
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(lVar12 + 0x230) = 0;
      *(undefined8 *)(lVar12 + 0x238) = 0;
      *(undefined8 *)(lVar12 + 0x220) = 0;
      *(undefined8 *)(lVar12 + 0x228) = 0;
      (*pcVar8)(lVar12 + 0x240);
    }
    if (local_250 != (code *)0x0) {
      (*local_250)(local_240,lVar12 + 0x240);
      *(undefined1 **)(lVar12 + 0x238) = local_248;
      *(code **)(lVar12 + 0x228) = local_258;
      *(code **)(lVar12 + 0x230) = local_250;
      *(undefined8 *)(lVar12 + 0x220) = local_260;
    }
LAB_0125932c:
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  else if (lVar12 != 0) goto LAB_0125932c;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  alStack_2c0[0] = lVar9;
  iVar5 = FUN_007dc9a0(lVar12);
  if (iVar5 == 0) {
    pcVar8 = *(code **)(lVar12 + 0x1a8);
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(lVar12 + 0x1b0) = 0;
      *(undefined8 *)(lVar12 + 0x1b8) = 0;
      *(undefined8 *)(lVar12 + 0x1a0) = 0;
      *(undefined8 *)(lVar12 + 0x1a8) = 0;
      (*pcVar8)(lVar12 + 0x1c0);
    }
    FUN_012625e0(alStack_2c0,lVar12 + 0x1c0);
    *(undefined1 **)(lVar12 + 0x1b8) = &LAB_01262600;
    *(code **)(lVar12 + 0x1a8) = FUN_012625a0;
    *(code **)(lVar12 + 0x1b0) = FUN_012625e0;
    *(undefined8 *)(lVar12 + 0x1a0) = &LAB_01262540;
LAB_012593a0:
    plVar11 = (long *)(lVar12 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_007dcc80(lVar12);
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))(plVar11);
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))(plVar11);
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))(plVar11);
    bVar1 = false;
  }
  else {
    if (lVar12 != 0) goto LAB_012593a0;
    FUN_007dcc80(0);
    bVar1 = true;
  }
  FUN_012625a0(alStack_2c0);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
  }
  pcVar8 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (code *)0x0;
    local_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar8)(local_240);
  }
  if (lVar9 == 0) {
    lVar4 = 0;
  }
  else {
    FUN_01127680(&local_48,lVar9);
    lVar4 = local_48;
  }
  local_48 = lVar4;
  if (!bVar1) {
    plVar11 = (long *)(lVar12 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  lVar7 = *(long *)(lVar4 + 0x78);
  *(long *)(lVar4 + 0x78) = lVar12;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  if (!bVar1) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  uVar10 = 1;
  if (lVar9 == 0) {
    return 1;
  }
LAB_01259500:
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  return uVar10;
}


