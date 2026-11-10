/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01259e40; name: FUN_01259e40
 */


/* WARNING: Removing unreachable block (ram,0x0125a66c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01259e40(int param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  bool bVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined1 uVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  char *pcVar11;
  long lVar12;
  long alStack_2b0 [12];
  undefined1 *local_250;
  code *local_248;
  code *local_240;
  undefined1 *local_238;
  long local_230 [12];
  undefined1 *local_1d0;
  code *local_1c8;
  code *local_1c0;
  undefined1 *local_1b8;
  long local_1b0 [13];
  long local_148;
  long local_140;
  undefined4 local_134;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  char *local_100;
  undefined *local_f8;
  undefined1 *local_f0;
  code *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  long local_d0;
  long lStack_c8;
  char *local_70;
  long local_68;
  long local_60;
  char *local_58;
  char *local_48;
  
  lVar8 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (lVar8 == 0) {
    if (_DAT_00000060 != 0) {
      return 0;
    }
  }
  else {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))((long *)(lVar8 + 0x48));
    FUN_01127680(&local_100,lVar8);
    lVar12 = *(long *)(local_100 + 0x60);
    if (local_100 != (char *)0x0) {
      (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
    }
    if (lVar12 != 0) {
      uVar9 = 0;
      goto LAB_0125a8bc;
    }
  }
  pcVar11 = *(char **)(*(long *)PTR_DAT_02710540 + 200);
  FUN_0122b4d0(&local_60,pcVar11,param_2);
  FUN_0122b4d0(&local_68,pcVar11,param_3);
  cVar4 = FUN_007a9cb0();
  if ((param_1 != 0 && cVar4 == '\x02') || (param_1 == 0 && cVar4 == '\x01')) {
    local_48 = "RequestInternetConnection";
    local_100 = pcVar11;
    lVar12 = FUN_01203310(&local_58,pcVar11,&local_100,&local_48);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    local_108 = CONCAT44(local_108._4_4_,1);
    FUN_0125a910(&local_48,lVar12,&local_108);
    pcVar11 = local_48;
    if (lVar8 == 0) {
      local_70 = (char *)0x0;
    }
    else {
      FUN_01127680(&local_70,lVar8);
    }
    (**(code **)(**(long **)(local_70 + 0x80) + 0x10))(&local_100);
    local_58 = local_100;
    FUN_0122c210(&local_100,pcVar11,&local_58);
    pcVar11 = local_100;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    lVar3 = local_60;
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
    }
    lStack_c8 = lVar3;
    local_e0 = FUN_01263200;
    local_d8 = &LAB_01263260;
    local_f0 = &LAB_01263140;
    local_e8 = FUN_012631b0;
    local_d0 = lVar8;
    iVar5 = FUN_007dc9a0(pcVar11);
    if (iVar5 == 0) {
      pcVar7 = *(code **)(pcVar11 + 0x1a8);
      pcVar1 = pcVar11 + 0x1a0;
      if (pcVar7 != (code *)0x0) {
        pcVar11[0x1b0] = '\0';
        pcVar11[0x1b1] = '\0';
        pcVar11[0x1b2] = '\0';
        pcVar11[0x1b3] = '\0';
        pcVar11[0x1b4] = '\0';
        pcVar11[0x1b5] = '\0';
        pcVar11[0x1b6] = '\0';
        pcVar11[0x1b7] = '\0';
        pcVar11[0x1b8] = '\0';
        pcVar11[0x1b9] = '\0';
        pcVar11[0x1ba] = '\0';
        pcVar11[0x1bb] = '\0';
        pcVar11[0x1bc] = '\0';
        pcVar11[0x1bd] = '\0';
        pcVar11[0x1be] = '\0';
        pcVar11[0x1bf] = '\0';
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        pcVar11[0x1a8] = '\0';
        pcVar11[0x1a9] = '\0';
        pcVar11[0x1aa] = '\0';
        pcVar11[0x1ab] = '\0';
        pcVar11[0x1ac] = '\0';
        pcVar11[0x1ad] = '\0';
        pcVar11[0x1ae] = '\0';
        pcVar11[0x1af] = '\0';
        (*pcVar7)(pcVar11 + 0x1c0);
      }
      if (local_e0 != (code *)0x0) {
        (*local_e0)(&local_d0,pcVar11 + 0x1c0);
        *(undefined1 **)(pcVar11 + 0x1b8) = local_d8;
        *(code **)(pcVar11 + 0x1a8) = local_e8;
        *(code **)(pcVar11 + 0x1b0) = local_e0;
        *(undefined1 **)pcVar1 = local_f0;
      }
LAB_0125a42c:
      plVar10 = (long *)(pcVar11 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_007dcc80(pcVar11);
      (**(code **)(*(long *)(pcVar11 + 0x48) + 0x10))(plVar10);
      (**(code **)(*(long *)(pcVar11 + 0x48) + 0x18))(plVar10);
      pcVar7 = local_e8;
    }
    else {
      if (pcVar11 != (char *)0x0) goto LAB_0125a42c;
      FUN_007dcc80(0);
      pcVar7 = local_e8;
    }
    local_e8 = pcVar7;
    if (pcVar7 != (code *)0x0) {
      local_e0 = (code *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar7)(&local_d0);
    }
    if (local_100 != (char *)0x0) {
      (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
      local_100 = (char *)0x0;
    }
    if (local_58 != (char *)0x0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = (char *)0x0;
    }
    if (local_70 != (char *)0x0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = (char *)0x0;
    }
    if (local_48 != (char *)0x0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = (char *)0x0;
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    if (lVar8 == 0) {
      pcVar1 = (char *)0x0;
    }
    else {
      FUN_01127680(&local_100,lVar8);
      pcVar1 = local_100;
    }
    local_100 = pcVar1;
    if (pcVar11 != (char *)0x0) {
      plVar10 = (long *)(pcVar11 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    lVar12 = *(long *)(pcVar1 + 0x60);
    *(char **)(pcVar1 + 0x60) = pcVar11;
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
    }
    FUN_012ae6d0(*(undefined8 *)(pcVar1 + 0x80),0);
    if (pcVar11 != (char *)0x0) {
      (**(code **)(*(long *)(pcVar11 + 0x48) + 0x18))();
    }
    if (local_100 != (char *)0x0) {
      (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
      local_100 = (char *)0x0;
    }
    pcVar1 = local_58;
    if (pcVar11 != (char *)0x0) {
      (**(code **)(*(long *)(pcVar11 + 0x48) + 0x18))(pcVar11 + 0x48);
      pcVar1 = local_58;
    }
  }
  else {
    uVar6 = 1;
    if (param_1 != 0) {
      uVar6 = 2;
    }
    local_100 = (char *)CONCAT71(local_100._1_7_,uVar6);
    local_f8 = &DAT_021689c4;
    local_58 = "RequestInternetConnection";
    local_48 = pcVar11;
    lVar12 = FUN_01203310(&local_70,pcVar11,&local_48,&local_58);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    FUN_01259540(&local_130,lVar12);
    local_134 = 0;
    FUN_011fe920(&local_128,local_130,&local_134);
    FUN_011ffd30(&local_120,local_128);
    FUN_012588f0(&local_118,local_120);
    FUN_01258a70(&local_110,local_118);
    FUN_0125aa90(&local_108,local_110,&local_100);
    FUN_012599c0(&local_70,local_108,&local_100);
    FUN_0125ac10(&local_48,local_70);
    FUN_0125ad90(&local_58,local_48);
    if (local_48 != (char *)0x0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = (char *)0x0;
    }
    if (local_70 != (char *)0x0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = (char *)0x0;
    }
    if (local_108 != 0) {
      (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
      local_108 = 0;
    }
    if (local_110 != 0) {
      (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
      local_110 = 0;
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
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    if (param_1 == 0) {
      FUN_01258770(&local_148,local_58);
      if (local_148 != 0) {
        (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
        local_148 = 0;
      }
LAB_0125a1ac:
      if (lVar8 == 0) goto LAB_0125a110;
LAB_0125a1b4:
      pcVar11 = local_58;
      FUN_01127680(&local_108,lVar8);
    }
    else {
      FUN_0125af10(&local_140);
      if (local_140 == 0) goto LAB_0125a1ac;
      (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
      local_140 = 0;
      if (lVar8 != 0) goto LAB_0125a1b4;
LAB_0125a110:
      local_108 = 0;
      pcVar11 = local_58;
    }
    (**(code **)(**(long **)(local_108 + 0x80) + 0x10))(&local_48);
    local_70 = local_48;
    FUN_0122c210(&local_48,pcVar11,&local_70);
    pcVar11 = local_48;
    local_1b0[0] = local_60;
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
    }
    local_1c0 = FUN_01265eb0;
    local_1d0 = &LAB_01265e60;
    local_1c8 = FUN_01265e70;
    local_1b8 = &LAB_01265ed0;
    iVar5 = FUN_007dc9a0(pcVar11);
    if (iVar5 == 0) {
      pcVar7 = *(code **)(pcVar11 + 0x128);
      pcVar1 = pcVar11 + 0x120;
      if (pcVar7 != (code *)0x0) {
        pcVar11[0x130] = '\0';
        pcVar11[0x131] = '\0';
        pcVar11[0x132] = '\0';
        pcVar11[0x133] = '\0';
        pcVar11[0x134] = '\0';
        pcVar11[0x135] = '\0';
        pcVar11[0x136] = '\0';
        pcVar11[0x137] = '\0';
        pcVar11[0x138] = '\0';
        pcVar11[0x139] = '\0';
        pcVar11[0x13a] = '\0';
        pcVar11[0x13b] = '\0';
        pcVar11[0x13c] = '\0';
        pcVar11[0x13d] = '\0';
        pcVar11[0x13e] = '\0';
        pcVar11[0x13f] = '\0';
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        pcVar11[0x128] = '\0';
        pcVar11[0x129] = '\0';
        pcVar11[0x12a] = '\0';
        pcVar11[299] = '\0';
        pcVar11[300] = '\0';
        pcVar11[0x12d] = '\0';
        pcVar11[0x12e] = '\0';
        pcVar11[0x12f] = '\0';
        (*pcVar7)(pcVar11 + 0x140);
      }
      if (local_1c0 != (code *)0x0) {
        (*local_1c0)(local_1b0,pcVar11 + 0x140);
        *(undefined1 **)(pcVar11 + 0x138) = local_1b8;
        *(code **)(pcVar11 + 0x128) = local_1c8;
        *(code **)(pcVar11 + 0x130) = local_1c0;
        *(undefined1 **)pcVar1 = local_1d0;
      }
LAB_0125a368:
      (**(code **)(*(long *)(pcVar11 + 0x48) + 0x10))();
    }
    else if (pcVar11 != (char *)0x0) goto LAB_0125a368;
    lVar12 = local_68;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    local_230[0] = lVar12;
    local_240 = FUN_01265f30;
    local_250 = &LAB_01265ee0;
    local_248 = FUN_01265ef0;
    local_238 = &LAB_01265f50;
    iVar5 = FUN_007dc9a0(pcVar11);
    if (iVar5 == 0) {
      pcVar7 = *(code **)(pcVar11 + 0x228);
      pcVar1 = pcVar11 + 0x220;
      if (pcVar7 != (code *)0x0) {
        pcVar11[0x230] = '\0';
        pcVar11[0x231] = '\0';
        pcVar11[0x232] = '\0';
        pcVar11[0x233] = '\0';
        pcVar11[0x234] = '\0';
        pcVar11[0x235] = '\0';
        pcVar11[0x236] = '\0';
        pcVar11[0x237] = '\0';
        pcVar11[0x238] = '\0';
        pcVar11[0x239] = '\0';
        pcVar11[0x23a] = '\0';
        pcVar11[0x23b] = '\0';
        pcVar11[0x23c] = '\0';
        pcVar11[0x23d] = '\0';
        pcVar11[0x23e] = '\0';
        pcVar11[0x23f] = '\0';
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        pcVar11[0x228] = '\0';
        pcVar11[0x229] = '\0';
        pcVar11[0x22a] = '\0';
        pcVar11[0x22b] = '\0';
        pcVar11[0x22c] = '\0';
        pcVar11[0x22d] = '\0';
        pcVar11[0x22e] = '\0';
        pcVar11[0x22f] = '\0';
        (*pcVar7)(pcVar11 + 0x240);
      }
      if (local_240 != (code *)0x0) {
        (*local_240)(local_230,pcVar11 + 0x240);
        *(undefined1 **)(pcVar11 + 0x238) = local_238;
        *(code **)(pcVar11 + 0x228) = local_248;
        *(code **)(pcVar11 + 0x230) = local_240;
        *(undefined1 **)pcVar1 = local_250;
      }
LAB_0125a5f0:
      (**(code **)(*(long *)(pcVar11 + 0x48) + 0x10))();
    }
    else if (pcVar11 != (char *)0x0) goto LAB_0125a5f0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    alStack_2b0[0] = lVar8;
    iVar5 = FUN_007dc9a0(pcVar11);
    if (iVar5 == 0) {
      pcVar7 = *(code **)(pcVar11 + 0x1a8);
      pcVar1 = pcVar11 + 0x1a0;
      if (pcVar7 != (code *)0x0) {
        pcVar11[0x1b0] = '\0';
        pcVar11[0x1b1] = '\0';
        pcVar11[0x1b2] = '\0';
        pcVar11[0x1b3] = '\0';
        pcVar11[0x1b4] = '\0';
        pcVar11[0x1b5] = '\0';
        pcVar11[0x1b6] = '\0';
        pcVar11[0x1b7] = '\0';
        pcVar11[0x1b8] = '\0';
        pcVar11[0x1b9] = '\0';
        pcVar11[0x1ba] = '\0';
        pcVar11[0x1bb] = '\0';
        pcVar11[0x1bc] = '\0';
        pcVar11[0x1bd] = '\0';
        pcVar11[0x1be] = '\0';
        pcVar11[0x1bf] = '\0';
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        pcVar11[0x1a8] = '\0';
        pcVar11[0x1a9] = '\0';
        pcVar11[0x1aa] = '\0';
        pcVar11[0x1ab] = '\0';
        pcVar11[0x1ac] = '\0';
        pcVar11[0x1ad] = '\0';
        pcVar11[0x1ae] = '\0';
        pcVar11[0x1af] = '\0';
        (*pcVar7)(pcVar11 + 0x1c0);
      }
      FUN_01266000(alStack_2b0,pcVar11 + 0x1c0);
      *(undefined1 **)(pcVar11 + 0x1b8) = &LAB_01266020;
      *(code **)(pcVar11 + 0x1a8) = FUN_01265fc0;
      *(code **)(pcVar11 + 0x1b0) = FUN_01266000;
      *(undefined1 **)pcVar1 = &LAB_01265f60;
LAB_0125a6d0:
      plVar10 = (long *)(pcVar11 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_007dcc80(pcVar11);
      (**(code **)(*(long *)(pcVar11 + 0x48) + 0x10))(plVar10);
      (**(code **)(*(long *)(pcVar11 + 0x48) + 0x18))(plVar10);
      bVar2 = false;
    }
    else {
      if (pcVar11 != (char *)0x0) goto LAB_0125a6d0;
      FUN_007dcc80(0);
      bVar2 = true;
    }
    FUN_01265fc0(alStack_2b0);
    if (!bVar2) {
      (**(code **)(*(long *)(pcVar11 + 0x48) + 0x18))();
    }
    pcVar7 = local_248;
    if (local_248 != (code *)0x0) {
      local_240 = (code *)0x0;
      local_238 = (undefined1 *)0x0;
      local_250 = (undefined1 *)0x0;
      local_248 = (code *)0x0;
      (*pcVar7)(local_230);
    }
    if (!bVar2) {
      (**(code **)(*(long *)(pcVar11 + 0x48) + 0x18))();
    }
    pcVar7 = local_1c8;
    if (local_1c8 != (code *)0x0) {
      local_1c0 = (code *)0x0;
      local_1b8 = (undefined1 *)0x0;
      local_1d0 = (undefined1 *)0x0;
      local_1c8 = (code *)0x0;
      (*pcVar7)(local_1b0);
    }
    if (local_48 != (char *)0x0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = (char *)0x0;
    }
    if (local_70 != (char *)0x0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = (char *)0x0;
    }
    if (local_108 != 0) {
      (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
      local_108 = 0;
    }
    if (lVar8 == 0) {
      pcVar1 = (char *)0x0;
    }
    else {
      FUN_01127680(&local_48,lVar8);
      pcVar1 = local_48;
    }
    local_48 = pcVar1;
    if (pcVar11 != (char *)0x0) {
      plVar10 = (long *)(pcVar11 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    lVar12 = *(long *)(pcVar1 + 0x60);
    *(char **)(pcVar1 + 0x60) = pcVar11;
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
    }
    FUN_012ae6d0(*(undefined8 *)(pcVar1 + 0x80),0);
    if (pcVar11 != (char *)0x0) {
      (**(code **)(*(long *)(pcVar11 + 0x48) + 0x18))();
    }
    if (local_48 != (char *)0x0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = (char *)0x0;
    }
    if (pcVar11 != (char *)0x0) {
      (**(code **)(*(long *)(pcVar11 + 0x48) + 0x18))(pcVar11 + 0x48);
    }
    pcVar1 = (char *)0x0;
    if (local_58 != (char *)0x0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = (char *)0x0;
      pcVar1 = local_58;
    }
  }
  local_58 = pcVar1;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (lVar8 == 0) {
    return 1;
  }
  uVar9 = 1;
LAB_0125a8bc:
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  return uVar9;
}


