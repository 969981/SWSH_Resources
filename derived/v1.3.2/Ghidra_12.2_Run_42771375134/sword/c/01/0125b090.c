/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0125b090; name: FUN_0125b090
 */


/* WARNING: Removing unreachable block (ram,0x0125b578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0125b090(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,uint param_5)

{
  char *pcVar1;
  bool bVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long alStack_250 [12];
  undefined1 *local_1f0;
  code *local_1e8;
  code *local_1e0;
  undefined1 *local_1d8;
  undefined1 local_1d0 [96];
  undefined1 *local_170;
  code *local_168;
  code *local_160;
  undefined1 *local_158;
  long local_150 [13];
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined4 local_c4;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *puStack_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  char *local_58;
  
  lVar9 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  local_60 = param_1;
  if (lVar9 == 0) {
    if (_DAT_00000060 != 0) {
      return 0;
    }
  }
  else {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    FUN_01127680(&local_80,lVar9);
    lVar12 = *(long *)(local_80 + 0x60);
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    }
    if (lVar12 != 0) {
      uVar10 = 0;
      goto LAB_0125b884;
    }
  }
  lVar12 = *(long *)(*(long *)PTR_DAT_02710540 + 200);
  FUN_0122b4d0(&local_68,lVar12,param_2);
  FUN_0122b4d0(&local_70,lVar12,param_3);
  local_58 = "RequestLocalConnection";
  local_80 = lVar12;
  lVar12 = FUN_01203310(&local_a8,lVar12,&local_80,&local_58);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  local_80 = DAT_02688108;
  puStack_78 = PTR_DAT_02688110;
  if ((param_4 & 1) == 0) {
    FUN_01259540(&local_90,lVar12);
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
      local_90 = 0;
    }
LAB_0125b240:
    if ((param_5 & 1) != 0) goto LAB_0125b244;
LAB_0125b1dc:
    cVar4 = FUN_007a9cb0();
    if (cVar4 != '\0') goto LAB_0125b244;
    local_58 = (char *)CONCAT44(local_58._4_4_,1);
    FUN_0125a910(&local_98,lVar12,&local_58);
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      local_98 = 0;
    }
LAB_0125b360:
    if ((char)local_60 != '\0') goto LAB_0125b368;
LAB_0125b330:
    local_58 = (char *)((ulong)local_58 & 0xffffffff00000000);
    FUN_011fe920(&local_e8,lVar12,&local_58);
    if (local_e8 != 0) {
      (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
      local_e8 = 0;
    }
LAB_0125b408:
    if (lVar9 == 0) goto LAB_0125b3fc;
LAB_0125b40c:
    FUN_01127680(&local_b0,lVar9);
  }
  else {
    FUN_012596c0(&local_88,lVar12);
    if (local_88 == 0) goto LAB_0125b240;
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
    if ((param_5 & 1) == 0) goto LAB_0125b1dc;
LAB_0125b244:
    local_c4 = 0;
    FUN_011fe920(&local_c0,lVar12,&local_c4);
    FUN_011ffd30(&local_b8,local_c0);
    FUN_01258770(&local_b0,local_b8);
    FUN_012588f0(&local_a8,local_b0);
    FUN_01258a70(&local_58,local_a8);
    FUN_012599c0(&local_a0,local_58,&local_80);
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    if (local_58 != (char *)0x0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = (char *)0x0;
    }
    if (local_a8 != (char *)0x0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
      local_a8 = (char *)0x0;
    }
    if (local_b0 != 0) {
      (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
      local_b0 = 0;
    }
    if (local_b8 != 0) {
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
      local_b8 = 0;
    }
    if (local_c0 == 0) goto LAB_0125b360;
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = 0;
    if ((char)local_60 == '\0') goto LAB_0125b330;
LAB_0125b368:
    FUN_01259b40(&local_d0,lVar12);
    if (local_d0 != 0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
      local_d0 = 0;
    }
    uVar6 = FUN_011f69b0(*(undefined8 *)PTR_DAT_0271cba8);
    if ((uVar6 & 1) != 0) {
      local_58 = (char *)((ulong)local_58 & 0xffffffff00000000);
      FUN_011fe920(&local_d8,lVar12,&local_58);
      if (local_d8 != 0) {
        (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
        local_d8 = 0;
      }
    }
    FUN_01259cc0(&local_e0,lVar12,(ulong)&local_60 | 4);
    if (local_e0 == 0) goto LAB_0125b408;
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = 0;
    if (lVar9 != 0) goto LAB_0125b40c;
LAB_0125b3fc:
    local_b0 = 0;
  }
  (**(code **)(**(long **)(local_b0 + 0x80) + 0x10))(&local_58);
  local_a8 = local_58;
  FUN_0122c210(&local_58,lVar12,&local_a8);
  pcVar3 = local_58;
  local_150[0] = local_68;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  local_160 = FUN_01266080;
  local_170 = &LAB_01266030;
  local_168 = FUN_01266040;
  local_158 = &LAB_012660a0;
  iVar5 = FUN_007dc9a0(pcVar3);
  if (iVar5 == 0) {
    pcVar8 = *(code **)(pcVar3 + 0x128);
    pcVar1 = pcVar3 + 0x120;
    if (pcVar8 != (code *)0x0) {
      pcVar3[0x130] = '\0';
      pcVar3[0x131] = '\0';
      pcVar3[0x132] = '\0';
      pcVar3[0x133] = '\0';
      pcVar3[0x134] = '\0';
      pcVar3[0x135] = '\0';
      pcVar3[0x136] = '\0';
      pcVar3[0x137] = '\0';
      pcVar3[0x138] = '\0';
      pcVar3[0x139] = '\0';
      pcVar3[0x13a] = '\0';
      pcVar3[0x13b] = '\0';
      pcVar3[0x13c] = '\0';
      pcVar3[0x13d] = '\0';
      pcVar3[0x13e] = '\0';
      pcVar3[0x13f] = '\0';
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar3[0x128] = '\0';
      pcVar3[0x129] = '\0';
      pcVar3[0x12a] = '\0';
      pcVar3[299] = '\0';
      pcVar3[300] = '\0';
      pcVar3[0x12d] = '\0';
      pcVar3[0x12e] = '\0';
      pcVar3[0x12f] = '\0';
      (*pcVar8)(pcVar3 + 0x140);
    }
    if (local_160 != (code *)0x0) {
      (*local_160)(local_150,pcVar3 + 0x140);
      *(undefined1 **)(pcVar3 + 0x138) = local_158;
      *(code **)(pcVar3 + 0x128) = local_168;
      *(code **)(pcVar3 + 0x130) = local_160;
      *(undefined1 **)pcVar1 = local_170;
    }
LAB_0125b5cc:
    (**(code **)(*(long *)(pcVar3 + 0x48) + 0x10))();
  }
  else if (pcVar3 != (char *)0x0) goto LAB_0125b5cc;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
  }
  local_1e0 = FUN_01266100;
  local_1f0 = &LAB_012660b0;
  local_1e8 = FUN_012660c0;
  local_1d8 = &LAB_01266120;
  iVar5 = FUN_007dc9a0(pcVar3);
  if (iVar5 == 0) {
    pcVar8 = *(code **)(pcVar3 + 0x228);
    pcVar1 = pcVar3 + 0x220;
    if (pcVar8 != (code *)0x0) {
      pcVar3[0x230] = '\0';
      pcVar3[0x231] = '\0';
      pcVar3[0x232] = '\0';
      pcVar3[0x233] = '\0';
      pcVar3[0x234] = '\0';
      pcVar3[0x235] = '\0';
      pcVar3[0x236] = '\0';
      pcVar3[0x237] = '\0';
      pcVar3[0x238] = '\0';
      pcVar3[0x239] = '\0';
      pcVar3[0x23a] = '\0';
      pcVar3[0x23b] = '\0';
      pcVar3[0x23c] = '\0';
      pcVar3[0x23d] = '\0';
      pcVar3[0x23e] = '\0';
      pcVar3[0x23f] = '\0';
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar3[0x228] = '\0';
      pcVar3[0x229] = '\0';
      pcVar3[0x22a] = '\0';
      pcVar3[0x22b] = '\0';
      pcVar3[0x22c] = '\0';
      pcVar3[0x22d] = '\0';
      pcVar3[0x22e] = '\0';
      pcVar3[0x22f] = '\0';
      (*pcVar8)(pcVar3 + 0x240);
    }
    if (local_1e0 != (code *)0x0) {
      (*local_1e0)(local_1d0,pcVar3 + 0x240);
      *(undefined1 **)(pcVar3 + 0x238) = local_1d8;
      *(code **)(pcVar3 + 0x228) = local_1e8;
      *(code **)(pcVar3 + 0x230) = local_1e0;
      *(undefined1 **)pcVar1 = local_1f0;
    }
LAB_0125b638:
    (**(code **)(*(long *)(pcVar3 + 0x48) + 0x10))();
  }
  else if (pcVar3 != (char *)0x0) goto LAB_0125b638;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  alStack_250[0] = lVar9;
  iVar5 = FUN_007dc9a0(pcVar3);
  if (iVar5 == 0) {
    pcVar8 = *(code **)(pcVar3 + 0x1a8);
    pcVar1 = pcVar3 + 0x1a0;
    if (pcVar8 != (code *)0x0) {
      pcVar3[0x1b0] = '\0';
      pcVar3[0x1b1] = '\0';
      pcVar3[0x1b2] = '\0';
      pcVar3[0x1b3] = '\0';
      pcVar3[0x1b4] = '\0';
      pcVar3[0x1b5] = '\0';
      pcVar3[0x1b6] = '\0';
      pcVar3[0x1b7] = '\0';
      pcVar3[0x1b8] = '\0';
      pcVar3[0x1b9] = '\0';
      pcVar3[0x1ba] = '\0';
      pcVar3[0x1bb] = '\0';
      pcVar3[0x1bc] = '\0';
      pcVar3[0x1bd] = '\0';
      pcVar3[0x1be] = '\0';
      pcVar3[0x1bf] = '\0';
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar3[0x1a8] = '\0';
      pcVar3[0x1a9] = '\0';
      pcVar3[0x1aa] = '\0';
      pcVar3[0x1ab] = '\0';
      pcVar3[0x1ac] = '\0';
      pcVar3[0x1ad] = '\0';
      pcVar3[0x1ae] = '\0';
      pcVar3[0x1af] = '\0';
      (*pcVar8)(pcVar3 + 0x1c0);
    }
    FUN_012661d0(alStack_250,pcVar3 + 0x1c0);
    *(undefined1 **)(pcVar3 + 0x1b8) = &LAB_012661f0;
    *(code **)(pcVar3 + 0x1a8) = FUN_01266190;
    *(code **)(pcVar3 + 0x1b0) = FUN_012661d0;
    *(undefined1 **)pcVar1 = &LAB_01266130;
LAB_0125b6a0:
    plVar11 = (long *)(pcVar3 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_007dcc80(pcVar3);
    (**(code **)(*(long *)(pcVar3 + 0x48) + 0x10))(plVar11);
    (**(code **)(*(long *)(pcVar3 + 0x48) + 0x18))(plVar11);
    bVar2 = false;
  }
  else {
    if (pcVar3 != (char *)0x0) goto LAB_0125b6a0;
    FUN_007dcc80(0);
    bVar2 = true;
  }
  FUN_01266190(alStack_250);
  if (!bVar2) {
    (**(code **)(*(long *)(pcVar3 + 0x48) + 0x18))();
  }
  pcVar8 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (code *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar8)(local_1d0);
  }
  if (!bVar2) {
    (**(code **)(*(long *)(pcVar3 + 0x48) + 0x18))();
  }
  pcVar8 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (code *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar8)(local_150);
  }
  if (local_58 != (char *)0x0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = (char *)0x0;
  }
  if (local_a8 != (char *)0x0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = (char *)0x0;
  }
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = 0;
  }
  if (lVar9 == 0) {
    pcVar1 = (char *)0x0;
  }
  else {
    FUN_01127680(&local_58,lVar9);
    pcVar1 = local_58;
  }
  local_58 = pcVar1;
  if (pcVar3 != (char *)0x0) {
    plVar11 = (long *)(pcVar3 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  lVar7 = *(long *)(pcVar1 + 0x60);
  *(char **)(pcVar1 + 0x60) = pcVar3;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  FUN_012ae6d0(*(undefined8 *)(pcVar1 + 0x80),0);
  if (pcVar3 != (char *)0x0) {
    (**(code **)(*(long *)(pcVar3 + 0x48) + 0x18))();
  }
  if (local_58 != (char *)0x0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = (char *)0x0;
  }
  if (pcVar3 != (char *)0x0) {
    (**(code **)(*(long *)(pcVar3 + 0x48) + 0x18))(pcVar3 + 0x48);
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  uVar10 = 1;
  if (lVar9 == 0) {
    return 1;
  }
LAB_0125b884:
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  return uVar10;
}


