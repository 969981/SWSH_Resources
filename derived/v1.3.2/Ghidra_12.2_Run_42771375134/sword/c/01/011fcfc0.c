/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fcfc0; name: FUN_011fcfc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_011fcfc0(long param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5,
            undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long alStack_320 [12];
  undefined1 *local_2c0;
  code *local_2b8;
  code *local_2b0;
  undefined1 *local_2a8;
  long alStack_2a0 [12];
  undefined1 *local_240;
  code *local_238;
  code *local_230;
  undefined1 *local_228;
  long alStack_220 [12];
  undefined1 *local_1c0;
  code *local_1b8;
  code *local_1b0;
  undefined1 *local_1a8;
  long alStack_1a0 [13];
  undefined4 local_134;
  long local_130;
  long *local_128;
  long local_120;
  long local_118;
  char local_110;
  undefined4 local_10c;
  char local_108;
  undefined8 local_104;
  char local_fc;
  undefined4 local_f8;
  char local_f4;
  long local_f0;
  char local_e8;
  undefined4 local_e4;
  char local_e0;
  undefined8 local_dc;
  char local_d4;
  undefined4 local_d0;
  char local_cc;
  long local_c8;
  char local_c0;
  undefined4 local_bc;
  char local_b8;
  undefined8 local_b4;
  char local_ac;
  undefined4 local_a8;
  char local_a4;
  long local_a0;
  long local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78 [3];
  
  if (*param_3 == 0) {
    lVar5 = *(long *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = 0;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
    lVar5 = *param_4;
  }
  else {
    plVar12 = *(long **)(param_1 + 0x58);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar12;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    plVar6 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x90,8);
    if (plVar6 == (long *)0x0) {
      (**(code **)(*plVar12 + 0xb8))(plVar12);
    }
    FUN_00883c20(plVar6,*(undefined8 *)(param_1 + 0x58));
    plVar6[1] = (long)plVar12;
    plVar6[2] = (long)plVar6;
    plVar6[3] = 0x90;
    plVar6[4] = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    if (plVar6 != (long *)0x0) {
      (**(code **)(plVar6[9] + 0x10))();
    }
    if (*(long *)(param_1 + 0x120) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x120) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x120) = 0;
    }
    *(long **)(param_1 + 0x120) = plVar6;
    (**(code **)(*plVar6 + 0x68))(plVar6,*param_3);
    lVar5 = *param_4;
  }
  if (lVar5 != 0) {
    lVar5 = FUN_01200800(&local_120,*(undefined8 *)(param_1 + 0x58));
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x128) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x128) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x128) = 0;
    }
    *(long *)(param_1 + 0x128) = lVar5;
    memcpy((void *)(lVar5 + 0x60),(void *)*param_4,0x188);
  }
  lVar5 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (lVar5 == 0) {
    if (_DAT_00000070 != 0) {
      return 0;
    }
  }
  else {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))((long *)(lVar5 + 0x48));
    FUN_01127680(&local_120,lVar5);
    lVar10 = *(long *)(local_120 + 0x70);
    if (local_120 != 0) {
      (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
    }
    if (lVar10 != 0) {
      uVar9 = 0;
      goto LAB_011fd1ec;
    }
  }
  if (((*(long *)(param_1 + 0x138) == 0) || (*(int *)(*(long *)(param_1 + 0x138) + 0x54) == 0)) &&
     (*(int *)(param_1 + 0x84) == 0)) {
    local_120 = *(long *)(param_1 + 0x58);
    local_78[0] = "StartRandomMatching";
    lVar10 = FUN_01200bb0(&local_128,local_120,&local_120,local_78);
    if (lVar10 == 0) goto LAB_011fd1e0;
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    local_120 = *param_2;
    local_118 = param_2[1];
    local_110 = '\0';
    if ((char)param_2[2] != '\0') {
      local_10c = *(undefined4 *)((long)param_2 + 0x14);
      local_108 = (char)param_2[3] != '\0';
      if ((bool)local_108) {
        local_104 = *(undefined8 *)((long)param_2 + 0x1c);
      }
      local_110 = '\x01';
    }
    local_fc = '\0';
    if (*(char *)((long)param_2 + 0x24) != '\0') {
      local_f8 = (undefined4)param_2[5];
      local_f4 = *(char *)((long)param_2 + 0x2c) != '\0';
      if ((bool)local_f4) {
        local_f0 = param_2[6];
      }
      local_fc = '\x01';
    }
    local_e8 = '\0';
    if ((char)param_2[7] != '\0') {
      local_e4 = *(undefined4 *)((long)param_2 + 0x3c);
      local_e0 = (char)param_2[8] != '\0';
      if ((bool)local_e0) {
        local_dc = *(undefined8 *)((long)param_2 + 0x44);
      }
      local_e8 = '\x01';
    }
    local_d4 = '\0';
    if (*(char *)((long)param_2 + 0x4c) != '\0') {
      local_d0 = (undefined4)param_2[10];
      local_cc = *(char *)((long)param_2 + 0x54) != '\0';
      if ((bool)local_cc) {
        local_c8 = param_2[0xb];
      }
      local_d4 = '\x01';
    }
    local_c0 = '\0';
    if ((char)param_2[0xc] != '\0') {
      local_bc = *(undefined4 *)((long)param_2 + 100);
      local_b8 = (char)param_2[0xd] != '\0';
      if ((bool)local_b8) {
        local_b4 = *(undefined8 *)((long)param_2 + 0x6c);
      }
      local_c0 = '\x01';
    }
    local_ac = '\0';
    if (*(char *)((long)param_2 + 0x74) != '\0') {
      local_a8 = (undefined4)param_2[0xf];
      local_a4 = *(char *)((long)param_2 + 0x7c) != '\0';
      if ((bool)local_a4) {
        local_a0 = param_2[0x10];
      }
      local_ac = '\x01';
    }
    local_98 = param_2[0x11];
    local_90 = (undefined2)param_2[0x12];
    local_134 = 0;
    local_88 = param_5;
    local_80 = param_6;
    FUN_011fdba0(&local_130,lVar10,&local_134);
    FUN_011fdd20(&local_128,local_130,&local_120);
    plVar6 = local_128;
    local_1b0 = FUN_01203140;
    local_1c0 = &LAB_01203110;
    local_1b8 = FUN_01203130;
    local_1a8 = &LAB_01203150;
    alStack_1a0[0] = param_1;
    iVar4 = FUN_007dc9a0(local_128);
    if (iVar4 == 0) {
      pcVar8 = (code *)plVar6[0x25];
      if (pcVar8 != (code *)0x0) {
        plVar6[0x26] = 0;
        plVar6[0x27] = 0;
        plVar6[0x24] = 0;
        plVar6[0x25] = 0;
        (*pcVar8)(plVar6 + 0x28);
      }
      if (local_1b0 != (code *)0x0) {
        (*local_1b0)(alStack_1a0,plVar6 + 0x28);
        plVar6[0x27] = (long)local_1a8;
        plVar6[0x25] = (long)local_1b8;
        plVar6[0x26] = (long)local_1b0;
        plVar6[0x24] = (long)local_1c0;
      }
LAB_011fd4a0:
      (**(code **)(plVar6[9] + 0x10))();
    }
    else if (plVar6 != (long *)0x0) goto LAB_011fd4a0;
    local_230 = FUN_012031b0;
    local_240 = &LAB_01203160;
    local_238 = FUN_012031a0;
    local_228 = &LAB_012031c0;
    alStack_220[0] = param_1;
    iVar4 = FUN_007dc9a0(plVar6);
    if (iVar4 == 0) {
      pcVar8 = (code *)plVar6[0x45];
      if (pcVar8 != (code *)0x0) {
        plVar6[0x46] = 0;
        plVar6[0x47] = 0;
        plVar6[0x44] = 0;
        plVar6[0x45] = 0;
        (*pcVar8)(plVar6 + 0x48);
      }
      if (local_230 != (code *)0x0) {
        (*local_230)(alStack_220,plVar6 + 0x48);
        plVar6[0x47] = (long)local_228;
        plVar6[0x45] = (long)local_238;
        plVar6[0x46] = (long)local_230;
        plVar6[0x44] = (long)local_240;
      }
LAB_011fd54c:
      (**(code **)(plVar6[9] + 0x10))();
    }
    else if (plVar6 != (long *)0x0) goto LAB_011fd54c;
    local_2b0 = FUN_01203200;
    local_2c0 = &LAB_012031d0;
    local_2b8 = FUN_012031f0;
    local_2a8 = &LAB_01203210;
    alStack_2a0[0] = param_1;
    iVar4 = FUN_007dc9a0(plVar6);
    if (iVar4 == 0) {
      pcVar8 = (code *)plVar6[0x55];
      if (pcVar8 != (code *)0x0) {
        plVar6[0x56] = 0;
        plVar6[0x57] = 0;
        plVar6[0x54] = 0;
        plVar6[0x55] = 0;
        (*pcVar8)(plVar6 + 0x58);
      }
      if (local_2b0 != (code *)0x0) {
        (*local_2b0)(alStack_2a0,plVar6 + 0x58);
        plVar6[0x57] = (long)local_2a8;
        plVar6[0x55] = (long)local_2b8;
        plVar6[0x56] = (long)local_2b0;
        plVar6[0x54] = (long)local_2c0;
      }
LAB_011fd5f4:
      (**(code **)(plVar6[9] + 0x10))();
    }
    else if (plVar6 != (long *)0x0) goto LAB_011fd5f4;
    alStack_320[0] = param_1;
    iVar4 = FUN_007dc9a0(plVar6);
    if (iVar4 == 0) {
      pcVar8 = (code *)plVar6[0x35];
      if (pcVar8 != (code *)0x0) {
        plVar6[0x36] = 0;
        plVar6[0x37] = 0;
        plVar6[0x34] = 0;
        plVar6[0x35] = 0;
        (*pcVar8)(plVar6 + 0x38);
      }
      FUN_012032f0(alStack_320,plVar6 + 0x38);
      plVar6[0x37] = (long)&LAB_01203300;
      plVar6[0x35] = (long)FUN_012032e0;
      plVar6[0x36] = (long)FUN_012032f0;
      plVar6[0x34] = (long)&LAB_01203220;
LAB_011fd6a8:
      plVar11 = plVar6 + 9;
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_007dcc80(plVar6);
      (**(code **)(plVar6[9] + 0x10))(plVar11);
      bVar2 = false;
    }
    else {
      if (plVar6 != (long *)0x0) goto LAB_011fd6a8;
      FUN_007dcc80(0);
      bVar2 = true;
    }
    (**(code **)(*plVar6 + 0x10))(local_78,plVar6);
    if (*(long *)(param_1 + 0x138) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x138) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    pcVar3 = local_78[0];
    local_78[0] = (char *)0x0;
    *(char **)(param_1 + 0x138) = pcVar3;
    plVar6 = plVar6 + 9;
    (**(code **)(*plVar6 + 0x18))(plVar6);
    if (!bVar2) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    FUN_012032e0(alStack_320);
    if (!bVar2) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    pcVar8 = local_2b8;
    if (local_2b8 != (code *)0x0) {
      local_2b0 = (code *)0x0;
      local_2a8 = (undefined1 *)0x0;
      local_2c0 = (undefined1 *)0x0;
      local_2b8 = (code *)0x0;
      (*pcVar8)(alStack_2a0);
    }
    if (!bVar2) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    pcVar8 = local_238;
    if (local_238 != (code *)0x0) {
      local_230 = (code *)0x0;
      local_228 = (undefined1 *)0x0;
      local_240 = (undefined1 *)0x0;
      local_238 = (code *)0x0;
      (*pcVar8)(alStack_220);
    }
    if (!bVar2) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    pcVar8 = local_1b8;
    if (local_1b8 != (code *)0x0) {
      local_1b0 = (code *)0x0;
      local_1a8 = (undefined1 *)0x0;
      local_1c0 = (undefined1 *)0x0;
      local_1b8 = (code *)0x0;
      (*pcVar8)(alStack_1a0);
    }
    if (local_128 != (long *)0x0) {
      (**(code **)(local_128[9] + 0x18))();
      local_128 = (long *)0x0;
    }
    if (local_130 != 0) {
      (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
      local_130 = 0;
    }
    if (lVar5 == 0) {
      local_78[0] = (char *)0x0;
    }
    else {
      FUN_01127680(local_78,lVar5);
    }
    pcVar3 = local_78[0];
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))(plVar12);
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))(plVar12);
    lVar7 = *(long *)(pcVar3 + 0x70);
    *(long *)(pcVar3 + 0x70) = lVar10;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    (**(code **)(*plVar12 + 0x18))(plVar12);
    if (local_78[0] != (char *)0x0) {
      (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
      local_78[0] = (char *)0x0;
    }
    *(undefined8 *)(param_1 + 0x80) = 0x100000001;
    lVar10 = 0;
    lVar7 = param_2[1];
    *(long *)(param_1 + 0x88) = *param_2;
    *(long *)(param_1 + 0x90) = lVar7;
    do {
      while( true ) {
        lVar7 = param_1 + lVar10;
        cVar1 = *(char *)((long)param_2 + lVar10 + 0x10);
        if (*(char *)(lVar7 + 0x98) == '\0') break;
        if (cVar1 == '\0') {
          if (*(char *)(lVar7 + 0xa0) != '\0') {
            *(undefined1 *)(lVar7 + 0xa0) = 0;
          }
          *(undefined1 *)(lVar7 + 0x98) = 0;
        }
        else {
          *(undefined4 *)(lVar7 + 0x9c) = *(undefined4 *)((long)param_2 + lVar10 + 0x14);
          cVar1 = *(char *)((long)param_2 + lVar10 + 0x18);
          if (*(char *)(lVar7 + 0xa0) == '\0') {
            if (cVar1 != '\0') {
              *(undefined8 *)(lVar7 + 0xa4) = *(undefined8 *)((long)param_2 + lVar10 + 0x1c);
              *(undefined1 *)(lVar7 + 0xa0) = 1;
            }
          }
          else if (cVar1 == '\0') {
            *(undefined1 *)(lVar7 + 0xa0) = 0;
          }
          else {
            *(undefined8 *)(lVar7 + 0xa4) = *(undefined8 *)((long)param_2 + lVar10 + 0x1c);
          }
        }
joined_r0x011fd930:
        lVar10 = lVar10 + 0x14;
        if (lVar10 == 0x78) goto LAB_011fd968;
      }
      if (cVar1 == '\0') goto joined_r0x011fd930;
      *(undefined4 *)(lVar7 + 0x9c) = *(undefined4 *)((long)param_2 + lVar10 + 0x14);
      *(undefined1 *)(lVar7 + 0xa0) = 0;
      if (*(char *)((long)param_2 + lVar10 + 0x18) != '\0') {
        *(undefined8 *)(lVar7 + 0xa4) = *(undefined8 *)((long)param_2 + lVar10 + 0x1c);
        *(undefined1 *)(lVar7 + 0xa0) = 1;
      }
      *(undefined1 *)(lVar7 + 0x98) = 1;
      lVar10 = lVar10 + 0x14;
    } while (lVar10 != 0x78);
LAB_011fd968:
    lVar10 = param_2[0x11];
    *(short *)(param_1 + 0x118) = (short)param_2[0x12];
    *(long *)(param_1 + 0x110) = lVar10;
    FUN_011fdea0(param_1);
    if (local_ac != '\0') {
      if (local_a4 != '\0') {
        local_a4 = '\0';
      }
      local_ac = '\0';
    }
    if (local_c0 != '\0') {
      if (local_b8 != '\0') {
        local_b8 = '\0';
      }
      local_c0 = '\0';
    }
    if (local_d4 != '\0') {
      if (local_cc != '\0') {
        local_cc = '\0';
      }
      local_d4 = '\0';
    }
    if (local_e8 != '\0') {
      if (local_e0 != '\0') {
        local_e0 = '\0';
      }
      local_e8 = '\0';
    }
    if (local_fc != '\0') {
      if (local_f4 != '\0') {
        local_f4 = '\0';
      }
      local_fc = '\0';
    }
    if (local_110 != '\0') {
      if (local_108 != '\0') {
        local_108 = '\0';
      }
      local_110 = '\0';
    }
    (**(code **)(*plVar12 + 0x18))(plVar12);
    uVar9 = 1;
  }
  else {
LAB_011fd1e0:
    uVar9 = 0;
  }
  if (lVar5 == 0) {
    return uVar9;
  }
LAB_011fd1ec:
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return uVar9;
}


