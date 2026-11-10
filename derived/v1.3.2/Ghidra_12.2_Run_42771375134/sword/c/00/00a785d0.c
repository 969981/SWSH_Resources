/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a785d0; name: FUN_00a785d0
 */


void FUN_00a785d0(undefined8 param_1,long *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint param3;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  bool bVar13;
  undefined2 uVar14;
  char *pcVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  uint local_188;
  char cStack_184;
  char cStack_183;
  char cStack_182;
  char cStack_181;
  char local_180;
  char cStack_17f;
  char local_17e;
  undefined2 uStack_17d;
  char cStack_17b;
  char cStack_17a;
  char cStack_179;
  uint local_168 [2];
  char local_160 [8];
  char local_158 [8];
  undefined6 local_150;
  char cStack_14a;
  char cStack_149;
  undefined4 local_148;
  undefined2 uStack_144;
  char cStack_142;
  char cStack_141;
  undefined2 local_140;
  uint local_13e;
  undefined2 uStack_13a;
  undefined8 local_138;
  undefined1 local_130;
  
  cVar3 = param_3[0x1d];
  param3 = *(uint *)(param_3 + 4);
  iVar11 = *(int *)(param_3 + 0xc);
  cVar4 = param_3[0x1e];
  cVar5 = param_3[0x1c];
  uVar7 = thunk_FUN_008dd3c0(param3);
  iVar8 = FUN_00880b10(param3);
  uVar9 = (**(code **)(*param_2 + 0x728))(param_2,*param_3);
  if ((uVar9 == 0xff) || (lVar17 = param_2[(ulong)uVar9 + 0xa9], lVar17 == 0)) {
    cVar6 = FUN_00ad59f0(0);
  }
  else {
    plVar18 = (long *)(lVar17 + 0x48);
    (**(code **)(*plVar18 + 0x10))(plVar18);
    cVar6 = FUN_00ad59f0(lVar17);
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if (param3 == 0xa5) {
    if (cVar6 != '\0') {
      local_148 = 0x716573;
      local_158[0] = s_bin_battle_waza_sequence_eg777_b_01ce89d9[0x10];
      local_158[1] = s_bin_battle_waza_sequence_eg777_b_01ce89d9[0x11];
      local_158[2] = s_bin_battle_waza_sequence_eg777_b_01ce89d9[0x12];
      local_158[3] = s_bin_battle_waza_sequence_eg777_b_01ce89d9[0x13];
      local_158[4] = s_bin_battle_waza_sequence_eg777_b_01ce89d9[0x14];
      local_158[5] = s_bin_battle_waza_sequence_eg777_b_01ce89d9[0x15];
      local_158[6] = s_bin_battle_waza_sequence_eg777_b_01ce89d9[0x16];
      local_158[7] = s_bin_battle_waza_sequence_eg777_b_01ce89d9[0x17];
      local_150 = s_bin_battle_waza_sequence_eg777_b_01ce89d9._24_6_;
      cStack_14a = s_bin_battle_waza_sequence_eg777_b_01ce89d9[0x1e];
      cStack_149 = s_bin_battle_waza_sequence_eg777_b_01ce89d9[0x1f];
      local_168 = (uint  [2])s_bin_battle_waza_sequence_eg777_b_01ce89d9._0_8_;
      local_160[0] = s_bin_battle_waza_sequence_eg777_b_01ce89d9[8];
      local_160[1] = s_bin_battle_waza_sequence_eg777_b_01ce89d9[9];
      local_160[2] = s_bin_battle_waza_sequence_eg777_b_01ce89d9[10];
      local_160[3] = s_bin_battle_waza_sequence_eg777_b_01ce89d9[0xb];
      local_160[4] = s_bin_battle_waza_sequence_eg777_b_01ce89d9[0xc];
      local_160[5] = s_bin_battle_waza_sequence_eg777_b_01ce89d9[0xd];
      local_160[6] = s_bin_battle_waza_sequence_eg777_b_01ce89d9[0xe];
      local_160[7] = s_bin_battle_waza_sequence_eg777_b_01ce89d9[0xf];
      goto LAB_00a7927c;
    }
    if (cVar3 == '\0') goto LAB_00a7872c;
    pcVar15 = "bin/battle/waza/sequence/eg777_short.bseq";
LAB_00a78704:
    local_140 = 0x71;
    uVar16 = *(undefined8 *)(pcVar15 + 0x20);
    local_168 = *(uint (*) [2])pcVar15;
    local_148 = (undefined4)uVar16;
    uStack_144 = (undefined2)((ulong)uVar16 >> 0x20);
    cStack_142 = (char)((ulong)uVar16 >> 0x30);
    cStack_141 = (char)((ulong)uVar16 >> 0x38);
    local_160 = (char  [8])*(undefined8 *)(pcVar15 + 8);
LAB_00a7871c:
    local_158 = *(char (*) [8])(pcVar15 + 0x10);
    uVar16 = *(undefined8 *)(pcVar15 + 0x18);
    local_150 = (undefined6)uVar16;
    cStack_14a = (char)((ulong)uVar16 >> 0x30);
    cStack_149 = (char)((ulong)uVar16 >> 0x38);
    goto LAB_00a7927c;
  }
LAB_00a7872c:
  iVar10 = (**(code **)(*param_2 + 0x870))(param_2);
  if ((((uVar7 & 1) == 0 && iVar10 == 2) &&
      (lVar17 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar9), lVar17 != 0)) &&
     (uVar12 = FUN_008e0b50(), (uVar12 & 1) != 0)) {
    if (iVar8 != 0) {
      (**(code **)(*param_2 + 0x758))(param_2,param3,lVar17);
      iVar11 = FUN_009454b0();
      snprintf((char *)local_168,0x100,"bin/battle/waza/sequence/eg%03d_short.bseq",iVar11);
      goto LAB_00a7927c;
    }
    if (*(int *)(param_3 + 8) == 7) {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 1;
      }
      if (uVar9 == 0xff) {
        plVar18 = (long *)0x0;
      }
      else {
        plVar18 = (long *)param_2[(ulong)uVar9 + 0xa9];
        if (plVar18 != (long *)0x0) {
          (**(code **)(plVar18[9] + 0x10))();
        }
      }
      (**(code **)(*plVar18 + 0x220))(&local_188,plVar18);
      if (plVar18 != (long *)0x0) {
        (**(code **)(plVar18[9] + 0x18))(plVar18 + 9);
      }
      if (local_188 == 0x382) {
        local_168 = (uint  [2])s_bin_battle_waza_sequence_eg_powe_01d3e01f._0_8_;
        local_160[0] = s_bin_battle_waza_sequence_eg_powe_01d3e01f[8];
        local_160[1] = s_bin_battle_waza_sequence_eg_powe_01d3e01f[9];
        local_160[2] = s_bin_battle_waza_sequence_eg_powe_01d3e01f[10];
        local_160[3] = s_bin_battle_waza_sequence_eg_powe_01d3e01f[0xb];
        local_160[4] = s_bin_battle_waza_sequence_eg_powe_01d3e01f[0xc];
        local_160[5] = s_bin_battle_waza_sequence_eg_powe_01d3e01f[0xd];
        local_160[6] = s_bin_battle_waza_sequence_eg_powe_01d3e01f[0xe];
        local_160[7] = s_bin_battle_waza_sequence_eg_powe_01d3e01f[0xf];
        local_140 = s_bin_battle_waza_sequence_eg_powe_01d3e01f._40_2_;
        local_13e = s_bin_battle_waza_sequence_eg_powe_01d3e01f._42_4_;
        local_158[0] = s_bin_battle_waza_sequence_eg_powe_01d3e01f[0x10];
        local_158[1] = s_bin_battle_waza_sequence_eg_powe_01d3e01f[0x11];
        local_158[2] = s_bin_battle_waza_sequence_eg_powe_01d3e01f[0x12];
        local_158[3] = s_bin_battle_waza_sequence_eg_powe_01d3e01f[0x13];
        local_158[4] = s_bin_battle_waza_sequence_eg_powe_01d3e01f[0x14];
        local_158[5] = s_bin_battle_waza_sequence_eg_powe_01d3e01f[0x15];
        local_158[6] = s_bin_battle_waza_sequence_eg_powe_01d3e01f[0x16];
        local_158[7] = s_bin_battle_waza_sequence_eg_powe_01d3e01f[0x17];
        local_150 = s_bin_battle_waza_sequence_eg_powe_01d3e01f._24_6_;
        cStack_14a = s_bin_battle_waza_sequence_eg_powe_01d3e01f[0x1e];
        cStack_149 = s_bin_battle_waza_sequence_eg_powe_01d3e01f[0x1f];
        local_148 = s_bin_battle_waza_sequence_eg_powe_01d3e01f._32_4_;
        uStack_144 = s_bin_battle_waza_sequence_eg_powe_01d3e01f._36_2_;
        cStack_142 = s_bin_battle_waza_sequence_eg_powe_01d3e01f[0x26];
        cStack_141 = s_bin_battle_waza_sequence_eg_powe_01d3e01f[0x27];
        goto LAB_00a7927c;
      }
      pcVar15 = "bin/battle/waza/sequence/eg_power_up.bseq";
      goto LAB_00a78704;
    }
    pcVar15 = "bin/battle/waza/sequence/eg_state.bseq";
    local_168 = (uint  [2])s_bin_battle_waza_sequence_eg_stat_01d416c0._0_8_;
    local_148 = s_bin_battle_waza_sequence_eg_stat_01d416c0._32_4_;
    uStack_144 = s_bin_battle_waza_sequence_eg_stat_01d416c0._36_2_;
    cStack_142 = s_bin_battle_waza_sequence_eg_stat_01d416c0[0x26];
    local_160 = (char  [8])s_bin_battle_waza_sequence_eg_stat_01d416c0._8_8_;
    goto LAB_00a7871c;
  }
  lVar17 = FUN_009c5ff0(param_2);
  if (lVar17 != 0) {
    uVar16 = FUN_009c5ff0(param_2);
    uVar12 = FUN_008f35c0(uVar16,0x4000);
    if (((uVar12 & 1) != 0) &&
       (((param3 < 0x38 && ((1L << ((ulong)param3 & 0x3f) & 0x90200200000402U) != 0)) ||
        (param3 == 0x311)))) {
      snprintf((char *)local_168,0x100,"bin/battle/waza/sequence/ew%03d_fog_on.bseq",param3);
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 1;
      }
      goto LAB_00a7927c;
    }
  }
  if ((cVar5 != '\0') && (((uVar7 ^ 1) & 1) == 0)) {
    uVar7 = (**(code **)(*param_2 + 0x728))(param_2,(char)param_2[0x2ea]);
    uVar12 = FUN_00a7a1f0(param_2,uVar7,param3);
    if ((uVar12 & 1) == 0) {
      pcVar15 = "bin/battle/waza/sequence/eg%03d_shock.bseq";
LAB_00a78928:
      snprintf((char *)local_168,0x100,pcVar15,(ulong)param3);
      goto LAB_00a7927c;
    }
    if (uVar7 == 0xff) {
      plVar18 = (long *)0x0;
    }
    else {
      plVar18 = (long *)param_2[(ulong)uVar7 + 0xa9];
      if (plVar18 != (long *)0x0) {
        (**(code **)(plVar18[9] + 0x10))();
      }
    }
    (**(code **)(*plVar18 + 0x220))(local_168,plVar18);
    uVar7 = local_168[0];
    if (plVar18 != (long *)0x0) {
      (**(code **)(plVar18[9] + 0x18))(plVar18 + 9);
    }
    pcVar15 = "bin/battle/waza/sequence/eg%03d_%04d_shock.bseq";
LAB_00a78af4:
    snprintf((char *)local_168,0x100,pcVar15,(ulong)param3,(ulong)uVar7);
    goto LAB_00a7927c;
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = (**(code **)(*param_2 + 0x728))(param_2,(char)param_2[0x2ea]);
    if ((iVar8 == 0) || (uVar12 = FUN_00a7a1f0(param_2,uVar7,param3), (uVar12 & 1) == 0)) {
      pcVar15 = "bin/battle/waza/sequence/eg%03d.bseq";
      goto LAB_00a78928;
    }
    if (uVar7 == 0xff) {
      plVar18 = (long *)0x0;
    }
    else {
      plVar18 = (long *)param_2[(ulong)uVar7 + 0xa9];
      if (plVar18 != (long *)0x0) {
        (**(code **)(plVar18[9] + 0x10))();
      }
    }
    (**(code **)(*plVar18 + 0x220))(local_168,plVar18);
    uVar7 = local_168[0];
    if (plVar18 != (long *)0x0) {
      (**(code **)(plVar18[9] + 0x18))(plVar18 + 9);
    }
    pcVar15 = "bin/battle/waza/sequence/eg%03d_%04d.bseq";
    goto LAB_00a78af4;
  }
  if (iVar11 != 0) {
    if (iVar11 != 1) {
      bVar13 = false;
      goto switchD_00a789ec_caseD_37;
    }
    bVar13 = true;
    if ((int)param3 < 0x244) {
      if ((int)param3 < 0x99) {
        if (param3 != 0x49) {
          if (param3 != 0x78) goto switchD_00a789ec_caseD_37;
          goto LAB_00a78c4c;
        }
        if ((cVar4 == '\0') && (cVar6 != '\0')) {
          pcVar15 = "bin/battle/waza/sequence/eg_turn_inhale_at_g_df_nml.bseq";
LAB_00a78fd4:
          local_158 = *(char (*) [8])(pcVar15 + 0x10);
          uVar1 = *(undefined8 *)(pcVar15 + 0x18);
          local_168 = *(uint (*) [2])pcVar15;
          local_160 = *(char (*) [8])(pcVar15 + 8);
          local_130 = 0;
          local_138 = *(undefined8 *)(pcVar15 + 0x30);
          uVar16 = *(undefined8 *)(pcVar15 + 0x20);
          uVar2 = *(undefined8 *)(pcVar15 + 0x28);
          local_148 = (undefined4)uVar16;
          uStack_144 = (undefined2)((ulong)uVar16 >> 0x20);
          cStack_142 = (char)((ulong)uVar16 >> 0x30);
          cStack_141 = (char)((ulong)uVar16 >> 0x38);
          local_140 = (undefined2)uVar2;
          local_13e = (uint)((ulong)uVar2 >> 0x10);
          uStack_13a = (undefined2)((ulong)uVar2 >> 0x30);
          local_150 = (undefined6)uVar1;
          cStack_14a = (char)((ulong)uVar1 >> 0x30);
          cStack_149 = (char)((ulong)uVar1 >> 0x38);
          goto LAB_00a7927c;
        }
        if (cVar4 == '\0' || cVar6 == '\0') {
          if (cVar6 == '\0' && cVar4 != '\0') {
            pcVar15 = "bin/battle/waza/sequence/eg_turn_inhale_at_nml_df_g.bseq";
            goto LAB_00a78fd4;
          }
          bVar13 = true;
          goto joined_r0x00a78d98;
        }
        local_138 = CONCAT44(local_138._4_4_,0x716573);
        local_168 = (uint  [2])s_bin_battle_waza_sequence_eg_turn_01d14cd0._0_8_;
        local_160[0] = s_bin_battle_waza_sequence_eg_turn_01d14cd0[8];
        local_160[1] = s_bin_battle_waza_sequence_eg_turn_01d14cd0[9];
        local_160[2] = s_bin_battle_waza_sequence_eg_turn_01d14cd0[10];
        local_160[3] = s_bin_battle_waza_sequence_eg_turn_01d14cd0[0xb];
        local_160[4] = s_bin_battle_waza_sequence_eg_turn_01d14cd0[0xc];
        local_160[5] = s_bin_battle_waza_sequence_eg_turn_01d14cd0[0xd];
        local_160[6] = s_bin_battle_waza_sequence_eg_turn_01d14cd0[0xe];
        local_160[7] = s_bin_battle_waza_sequence_eg_turn_01d14cd0[0xf];
        local_148 = s_bin_battle_waza_sequence_eg_turn_01d14cd0._32_4_;
        uStack_144 = s_bin_battle_waza_sequence_eg_turn_01d14cd0._36_2_;
        cStack_142 = s_bin_battle_waza_sequence_eg_turn_01d14cd0[0x26];
        cStack_141 = s_bin_battle_waza_sequence_eg_turn_01d14cd0[0x27];
        local_140 = s_bin_battle_waza_sequence_eg_turn_01d14cd0._40_2_;
        local_13e = s_bin_battle_waza_sequence_eg_turn_01d14cd0._42_4_;
        uStack_13a = s_bin_battle_waza_sequence_eg_turn_01d14cd0._46_2_;
        uVar16 = s_bin_battle_waza_sequence_eg_turn_01d14cd0._24_8_;
        local_158 = (char  [8])s_bin_battle_waza_sequence_eg_turn_01d14cd0._16_8_;
        goto LAB_00a78e68;
      }
      if (param3 != 0x99) {
        if ((param3 != 0xf8) && (param3 != 0x161)) goto switchD_00a789ec_caseD_37;
        pcVar15 = "bin/battle/waza/sequence/ew%03d_attack.bseq";
        goto LAB_00a79258;
      }
LAB_00a78c4c:
      pcVar15 = "bin/battle/waza/sequence/ew%03d_bomb.bseq";
    }
    else {
      if (((0x18 < param3 - 0x244) || ((1 << (ulong)(param3 - 0x244 & 0x1f) & 0x1000003U) == 0)) &&
         (param3 != 0x2a6)) {
        if (param3 == 0x322) goto LAB_00a78c4c;
        goto switchD_00a789ec_caseD_37;
      }
      pcVar15 = "bin/battle/waza/sequence/ew%03d_field.bseq";
    }
    goto LAB_00a79258;
  }
  bVar13 = false;
  if ((int)param3 < 0x1b1) {
    if ((int)param3 < 0xbf) {
      switch(param3) {
      case 0x36:
      case 0x4c:
      case 0x5b:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x75:
      case 0x78:
      case 0x82:
      case 0x8f:
      case 0x99:
        break;
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x74:
      case 0x76:
      case 0x77:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x90:
      case 0x91:
      case 0x92:
      case 0x93:
      case 0x94:
      case 0x95:
      case 0x96:
      case 0x97:
      case 0x98:
        goto switchD_00a789ec_caseD_37;
      default:
        if ((param3 != 0xd) && (param3 != 0x13)) goto switchD_00a789ec_caseD_37;
      }
    }
    else {
      switch(param3) {
      case 0xbf:
      case 0xc9:
      case 0xdb:
      case 0xf0:
      case 0xf1:
      case 0xf8:
      case 0x102:
        break;
      case 0xc0:
      case 0xc1:
      case 0xc2:
      case 0xc3:
      case 0xc4:
      case 0xc5:
      case 0xc6:
      case 199:
      case 200:
      case 0xca:
      case 0xcb:
      case 0xcc:
      case 0xcd:
      case 0xce:
      case 0xcf:
      case 0xd0:
      case 0xd1:
      case 0xd2:
      case 0xd3:
      case 0xd4:
      case 0xd5:
      case 0xd6:
      case 0xd7:
      case 0xd8:
      case 0xd9:
      case 0xda:
      case 0xdc:
      case 0xdd:
      case 0xde:
      case 0xdf:
      case 0xe0:
      case 0xe1:
      case 0xe2:
      case 0xe3:
      case 0xe4:
      case 0xe5:
      case 0xe6:
      case 0xe7:
      case 0xe8:
      case 0xe9:
      case 0xea:
      case 0xeb:
      case 0xec:
      case 0xed:
      case 0xee:
      case 0xef:
      case 0xf2:
      case 0xf3:
      case 0xf4:
      case 0xf5:
      case 0xf6:
      case 0xf7:
      case 0xf9:
      case 0xfa:
      case 0xfb:
      case 0xfc:
      case 0xfd:
      case 0xfe:
      case 0xff:
      case 0x100:
      case 0x101:
        goto switchD_00a789ec_caseD_37;
      default:
        if (((0x32 < param3 - 0x154) ||
            ((1L << ((ulong)(param3 - 0x154) & 0x3f) & 0x4000004012001U) == 0)) && (param3 != 0x123)
           ) goto switchD_00a789ec_caseD_37;
      }
    }
    goto switchD_00a789ec_caseD_36;
  }
  switch(param3) {
  case 0x229:
  case 0x22a:
  case 0x231:
  case 0x234:
  case 0x236:
  case 0x242:
  case 0x244:
  case 0x245:
  case 0x24b:
  case 0x259:
  case 0x25b:
  case 0x25c:
  case 0x29d:
  case 0x2a6:
  case 0x2b6:
    goto switchD_00a789ec_caseD_36;
  case 0x22b:
  case 0x22c:
  case 0x22d:
  case 0x22e:
  case 0x22f:
  case 0x230:
  case 0x232:
  case 0x233:
  case 0x235:
  case 0x237:
  case 0x238:
  case 0x239:
  case 0x23a:
  case 0x23b:
  case 0x23c:
  case 0x23d:
  case 0x23e:
  case 0x23f:
  case 0x240:
  case 0x241:
  case 0x243:
  case 0x246:
  case 0x247:
  case 0x248:
  case 0x249:
  case 0x24a:
  case 0x24c:
  case 0x24d:
  case 0x24e:
  case 0x24f:
  case 0x250:
  case 0x251:
  case 0x252:
  case 0x253:
  case 0x254:
  case 0x255:
  case 0x256:
  case 599:
  case 600:
  case 0x25a:
  case 0x25d:
  case 0x25e:
  case 0x25f:
  case 0x260:
  case 0x261:
  case 0x262:
  case 0x263:
  case 0x264:
  case 0x265:
  case 0x266:
  case 0x267:
  case 0x268:
  case 0x269:
  case 0x26a:
  case 0x26b:
  case 0x26c:
  case 0x26d:
  case 0x26e:
  case 0x26f:
  case 0x270:
  case 0x271:
  case 0x272:
  case 0x273:
  case 0x274:
  case 0x275:
  case 0x276:
  case 0x277:
  case 0x278:
  case 0x279:
  case 0x27a:
  case 0x27b:
  case 0x27c:
  case 0x27d:
  case 0x27e:
  case 0x27f:
  case 0x280:
  case 0x281:
  case 0x282:
  case 0x283:
  case 0x284:
  case 0x285:
  case 0x286:
  case 0x287:
  case 0x288:
  case 0x289:
  case 0x28a:
  case 0x28b:
  case 0x28c:
  case 0x28d:
  case 0x28e:
  case 0x28f:
  case 0x290:
  case 0x291:
  case 0x292:
  case 0x293:
  case 0x294:
  case 0x295:
  case 0x296:
  case 0x297:
  case 0x298:
  case 0x299:
  case 0x29a:
  case 0x29b:
  case 0x29c:
  case 0x29e:
  case 0x29f:
  case 0x2a0:
  case 0x2a1:
  case 0x2a2:
  case 0x2a3:
  case 0x2a4:
  case 0x2a5:
  case 0x2a7:
  case 0x2a8:
  case 0x2a9:
  case 0x2aa:
  case 0x2ab:
  case 0x2ac:
  case 0x2ad:
  case 0x2ae:
  case 0x2af:
  case 0x2b0:
  case 0x2b1:
  case 0x2b2:
  case 0x2b3:
  case 0x2b4:
  case 0x2b5:
switchD_00a789ec_caseD_37:
joined_r0x00a78d98:
    if (cVar4 != '\0') {
      if (iVar11 == 0) {
        if ((int)param3 < 599) {
          if ((param3 != 0x51) && (param3 != 0x8b)) goto LAB_00a78a00;
        }
        else if ((param3 != 599) && (param3 != 0x32a)) {
          if (param3 != 0x317) goto LAB_00a78a00;
          goto LAB_00a78dc4;
        }
        goto LAB_00a78e48;
      }
LAB_00a78a00:
      if (!bVar13) goto LAB_00a78e04;
      if (0x117 < (int)param3) {
        if ((int)param3 < 0x1cf) {
          if ((int)param3 < 0x169) {
            if (param3 == 0x118) {
LAB_00a78f30:
              local_188 = s__barrierbreak_g_01ce533d._0_4_;
              cStack_184 = s__barrierbreak_g_01ce533d[4];
              cStack_183 = s__barrierbreak_g_01ce533d[5];
              cStack_182 = s__barrierbreak_g_01ce533d[6];
              cStack_181 = s__barrierbreak_g_01ce533d[7];
              local_180 = s__barrierbreak_g_01ce533d[8];
              cStack_17f = s__barrierbreak_g_01ce533d[9];
              local_17e = s__barrierbreak_g_01ce533d[10];
              uStack_17d = s__barrierbreak_g_01ce533d._11_2_;
              cStack_17b = s__barrierbreak_g_01ce533d[0xd];
              cStack_17a = s__barrierbreak_g_01ce533d[0xe];
              cStack_179 = s__barrierbreak_g_01ce533d[0xf];
              snprintf((char *)local_168,0x100,"bin/battle/waza/sequence/ew%03d%s.bseq",param3,
                       (char *)&local_188);
              goto LAB_00a7927c;
            }
            if (param3 == 0x148) goto LAB_00a78e14;
          }
          else if ((param3 == 0x169) || (param3 == 0x1cd)) goto LAB_00a78dc4;
LAB_00a78e04:
          if ((param3 != 0xae) || (iVar11 != 2)) goto LAB_00a78e38;
          goto LAB_00a78e14;
        }
        if ((int)param3 < 0x2a4) {
          if ((param3 == 0x1cf) || (param3 == 0x263)) goto LAB_00a78e14;
          goto LAB_00a78e04;
        }
        if (param3 != 0x2a4) {
          if (param3 == 0x2c2) goto LAB_00a78f30;
          if (param3 == 0x2c8) {
            local_188 = 0x6c6e6f5f;
            cStack_184 = 'y';
            cStack_183 = '_';
            cStack_182 = 'g';
            cStack_181 = '\0';
            snprintf((char *)local_168,0x100,"bin/battle/waza/sequence/ew%03d%s.bseq",0x2c8,
                     (char *)&local_188);
            goto LAB_00a7927c;
          }
          goto LAB_00a78e04;
        }
LAB_00a78dc4:
        pcVar15 = "bin/battle/waza/sequence/eg_heal.bseq";
        local_168 = (uint  [2])s_bin_battle_waza_sequence_eg_heal_01cdac63._0_8_;
        local_148 = s_bin_battle_waza_sequence_eg_heal_01cdac63._32_4_;
        uStack_144 = s_bin_battle_waza_sequence_eg_heal_01cdac63._36_2_;
        local_160 = (char  [8])s_bin_battle_waza_sequence_eg_heal_01cdac63._8_8_;
        goto LAB_00a78e60;
      }
      if ((int)param3 < 0xab) {
        if (((0x3f < param3 - 0x14) ||
            ((1L << ((ulong)(param3 - 0x14) & 0x3f) & 0x8000000000008001U) == 0)) &&
           (param3 != 0x80)) goto LAB_00a78e04;
LAB_00a78e14:
        pcVar15 = "bin/battle/waza/sequence/eg_turn_hit.bseq";
        local_140 = 0x71;
      }
      else {
        if ((int)param3 < 0xfa) {
          if (param3 != 0xab) {
            if (param3 == 0xae) goto LAB_00a78e48;
            goto LAB_00a78e04;
          }
          goto LAB_00a78e14;
        }
        if (param3 == 0xfa) goto LAB_00a78e14;
        if (param3 != 0x113) goto LAB_00a78e04;
        local_13e = local_13e & 0xffffff00;
        pcVar15 = "bin/battle/waza/sequence/eg_turn_heal.bseq";
        local_140 = 0x7165;
      }
      uVar16 = *(undefined8 *)(pcVar15 + 0x20);
      local_148 = (undefined4)uVar16;
      uStack_144 = (undefined2)((ulong)uVar16 >> 0x20);
      cStack_142 = (char)((ulong)uVar16 >> 0x30);
      cStack_141 = (char)((ulong)uVar16 >> 0x38);
      local_168 = *(uint (*) [2])pcVar15;
      local_160 = (char  [8])*(undefined8 *)(pcVar15 + 8);
LAB_00a78e60:
      uVar16 = *(undefined8 *)(pcVar15 + 0x18);
      local_158 = (char  [8])*(undefined8 *)(pcVar15 + 0x10);
LAB_00a78e68:
      local_150 = (undefined6)uVar16;
      cStack_14a = SUB81(uVar16,6);
      cStack_149 = SUB81(uVar16,7);
      goto LAB_00a7927c;
    }
LAB_00a78e38:
    if ((cVar3 != '\0') && (iVar8 == 0)) {
LAB_00a78e48:
      pcVar15 = "bin/battle/waza/sequence/eg_state.bseq";
      local_168 = (uint  [2])s_bin_battle_waza_sequence_eg_stat_01d416c0._0_8_;
      local_148 = s_bin_battle_waza_sequence_eg_stat_01d416c0._32_4_;
      uStack_144 = s_bin_battle_waza_sequence_eg_stat_01d416c0._36_2_;
      cStack_142 = s_bin_battle_waza_sequence_eg_stat_01d416c0[0x26];
      local_160 = (char  [8])s_bin_battle_waza_sequence_eg_stat_01d416c0._8_8_;
      goto LAB_00a78e60;
    }
    if (((0x26 < param3 - 0x2e8) || ((1L << ((ulong)(param3 - 0x2e8) & 0x3f) & 0x6000000001U) == 0))
       && (cVar3 != '\0')) {
      uVar16 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar9);
      (**(code **)(*param_2 + 0x758))(param_2,param3,uVar16);
      iVar11 = FUN_009454b0();
      snprintf((char *)local_168,0x100,"bin/battle/waza/sequence/eg%03d_short.bseq",iVar11);
      goto LAB_00a7927c;
    }
    if (!bVar13) goto switchD_00a78eb8_caseD_e;
    break;
  default:
    switch(param3) {
    case 0x1b1:
    case 0x1be:
    case 0x1d3:
    case 0x1d5:
    case 0x1d8:
    case 0x1de:
    case 0x1f5:
    case 0x1fb:
      break;
    case 0x1b2:
    case 0x1b3:
    case 0x1b4:
    case 0x1b5:
    case 0x1b6:
    case 0x1b7:
    case 0x1b8:
    case 0x1b9:
    case 0x1ba:
    case 0x1bb:
    case 0x1bc:
    case 0x1bd:
    case 0x1bf:
    case 0x1c0:
    case 0x1c1:
    case 0x1c2:
    case 0x1c3:
    case 0x1c4:
    case 0x1c5:
    case 0x1c6:
    case 0x1c7:
    case 0x1c8:
    case 0x1c9:
    case 0x1ca:
    case 0x1cb:
    case 0x1cc:
    case 0x1cd:
    case 0x1ce:
    case 0x1cf:
    case 0x1d0:
    case 0x1d1:
    case 0x1d2:
    case 0x1d4:
    case 0x1d6:
    case 0x1d7:
    case 0x1d9:
    case 0x1da:
    case 0x1db:
    case 0x1dc:
    case 0x1dd:
    case 0x1df:
    case 0x1e0:
    case 0x1e1:
    case 0x1e2:
    case 0x1e3:
    case 0x1e4:
    case 0x1e5:
    case 0x1e6:
    case 0x1e7:
    case 0x1e8:
    case 0x1e9:
    case 0x1ea:
    case 0x1eb:
    case 0x1ec:
    case 0x1ed:
    case 0x1ee:
    case 0x1ef:
    case 0x1f0:
    case 0x1f1:
    case 0x1f2:
    case 499:
    case 500:
    case 0x1f6:
    case 0x1f7:
    case 0x1f8:
    case 0x1f9:
    case 0x1fa:
      goto switchD_00a789ec_caseD_37;
    default:
      if ((0x2e < param3 - 0x2f4) ||
         ((1L << ((ulong)(param3 - 0x2f4) & 0x3f) & 0x500000000001U) == 0))
      goto switchD_00a789ec_caseD_37;
    }
    goto switchD_00a789ec_caseD_36;
  }
  bVar13 = false;
  switch(param3) {
  case 0xd:
  case 0x13:
  case 0x4c:
  case 0x5b:
  case 0x75:
  case 0x82:
  case 0x8f:
  case 0xf8:
  case 0x123:
  case 0x154:
  case 0x161:
  case 0x1d3:
  case 0x1fb:
  case 0x229:
  case 0x22a:
  case 0x236:
  case 0x259:
  case 0x29d:
  case 800:
    local_188 = 0x7474615f;
    cStack_184 = 'a';
    cStack_183 = 'c';
    cStack_182 = 'k';
    cStack_181 = '\0';
    goto LAB_00a79050;
  default:
    goto switchD_00a78eb8_caseD_e;
  case 0x12:
  case 0x2e:
  case 0x171:
  case 0x1fd:
  case 0x20d:
  case 0x32c:
    cStack_184 = 'k';
    local_188 = 0x6361625f;
    goto LAB_00a7904c;
  case 0x14:
  case 0x23:
  case 0x49:
  case 0x53:
  case 0x80:
  case 0xab:
  case 0xfa:
  case 0x113:
  case 0x148:
  case 0x1cf:
  case 0x263:
    cStack_184 = 'n';
    local_188 = 0x7275745f;
    goto LAB_00a7904c;
  case 0x78:
  case 0x99:
  case 0x322:
    cStack_184 = 'b';
    local_188 = 0x6d6f625f;
    goto LAB_00a7904c;
  case 0xae:
    local_188 = 0x6c6e6f5f;
    cStack_184 = 'y';
    cStack_183 = '_';
    cStack_182 = '1';
    cStack_181 = '\0';
    goto LAB_00a79050;
  case 0xb1:
  case 0x157:
  case 0x1cb:
  case 0x1cc:
  case 0x22e:
  case 0x22f:
  case 0x24f:
  case 0x250:
  case 0x295:
  case 0x2c0:
  case 0x2c8:
    cStack_184 = 'y';
    local_188 = 0x6c6e6f5f;
    goto LAB_00a7904c;
  case 0x108:
  case 0x2b2:
    local_188 = 0x6168635f;
    cStack_184 = 'r';
    cStack_183 = 'g';
    cStack_182 = 'e';
    cStack_181 = '\0';
    goto LAB_00a79050;
  case 0x118:
  case 0x2c2:
    pcVar15 = "_barrierbreak";
    local_180 = s__barrierbreak_01cefb4e[8];
    cStack_17f = s__barrierbreak_01cefb4e[9];
    local_17e = s__barrierbreak_01cefb4e[10];
    uStack_17d = s__barrierbreak_01cefb4e._11_2_;
    cStack_17b = s__barrierbreak_01cefb4e[0xd];
    break;
  case 0x137:
    uVar14 = 0x6e75;
    local_188 = 0x735f315f;
    goto LAB_00a79208;
  case 0x169:
  case 0x1cd:
  case 0x2a4:
    cStack_184 = 'l';
    local_188 = 0x6165685f;
LAB_00a7904c:
    cStack_183 = '\0';
    goto LAB_00a79050;
  case 0x222:
    pcVar15 = "_1_water";
    local_180 = '\0';
    break;
  case 0x244:
  case 0x245:
  case 0x25c:
  case 0x2a6:
    uVar14 = 0x646c;
    local_188 = 0x6569665f;
LAB_00a79208:
    cStack_182 = '\0';
    cStack_184 = (char)uVar14;
    cStack_183 = (char)((ushort)uVar14 >> 8);
    bVar13 = true;
    goto joined_r0x00a79218;
  case 0x252:
  case 0x26c:
  case 0x296:
  case 0x297:
  case 0x2af:
  case 0x2c1:
  case 0x2d0:
  case 0x2d1:
  case 0x2e8:
  case 0x2e9:
  case 0x2ef:
  case 0x30a:
  case 0x30c:
  case 0x30d:
  case 0x30e:
  case 0x30f:
  case 0x31a:
  case 0x31b:
  case 0x321:
  case 0x330:
  case 0x331:
  case 0x332:
  case 0x333:
  case 0x334:
  case 0x335:
  case 0x336:
  case 0x337:
  case 0x338:
  case 0x339:
  case 0x33a:
    local_17e = '\0';
    local_180 = 'l';
    cStack_17f = 'y';
    pcVar15 = "_poke_only";
    break;
  case 0x2c9:
  case 0x2ca:
    pcVar15 = "_1_poke_only";
    local_180 = s__1_poke_only_01cf9ba3[8];
    cStack_17f = s__1_poke_only_01cf9ba3[9];
    local_17e = s__1_poke_only_01cf9ba3[10];
    uStack_17d = s__1_poke_only_01cf9ba3._11_2_;
    break;
  case 0x31d:
    local_180 = 's';
    cStack_17f = '\0';
    pcVar15 = "_field_ps";
    break;
  case 0x324:
    local_180 = 'l';
    cStack_17f = '\0';
    pcVar15 = "_field_el";
    break;
  case 0x325:
    local_180 = 'r';
    cStack_17f = '\0';
    pcVar15 = "_field_gr";
  }
  uVar16 = *(undefined8 *)pcVar15;
  local_188 = (uint)uVar16;
  cStack_184 = (char)((ulong)uVar16 >> 0x20);
  cStack_183 = (char)((ulong)uVar16 >> 0x28);
  cStack_182 = (char)((ulong)uVar16 >> 0x30);
  cStack_181 = (char)((ulong)uVar16 >> 0x38);
LAB_00a79050:
  bVar13 = true;
switchD_00a78eb8_caseD_e:
joined_r0x00a79218:
  if (iVar11 == 4) {
    if (param3 == 0x325) {
      uVar14 = 0x73;
      pcVar15 = "_field_ps";
LAB_00a792ac:
      local_180 = (char)uVar14;
      cStack_17f = (char)((ushort)uVar14 >> 8);
      uVar16 = *(undefined8 *)pcVar15;
      local_188 = (uint)uVar16;
      cStack_184 = (char)((ulong)uVar16 >> 0x20);
      cStack_183 = (char)((ulong)uVar16 >> 0x28);
      cStack_182 = (char)((ulong)uVar16 >> 0x30);
      cStack_181 = (char)((ulong)uVar16 >> 0x38);
    }
    else if (param3 == 0x222) {
      local_188 = 0x345f;
LAB_00a792c8:
      cStack_183 = 'e';
      cStack_184 = 'c';
      local_188 = local_188 | 0x695f0000;
      cStack_182 = '\0';
    }
    else {
      if (param3 != 0x137) goto LAB_00a7924c;
      local_188 = 0x725f345f;
      cStack_184 = 'a';
      cStack_183 = 'i';
      cStack_182 = 'n';
      cStack_181 = '\0';
    }
LAB_00a792d4:
    snprintf((char *)local_168,0x100,"bin/battle/waza/sequence/ew%03d%s.bseq",param3,
             (char *)&local_188);
  }
  else {
    if (iVar11 == 3) {
      if ((int)param3 < 0x321) {
        if (param3 == 0x137) {
          local_188 = 0x735f335f;
          cStack_184 = 'a';
          cStack_183 = 'n';
          cStack_182 = 'd';
          cStack_181 = '\0';
        }
        else {
          if (param3 != 0x222) goto LAB_00a7911c;
          local_188 = 0x665f335f;
          cStack_184 = 'i';
          cStack_183 = 'r';
          cStack_182 = 'e';
          cStack_181 = '\0';
        }
      }
      else if (param3 == 0x321) {
        pcVar15 = "_but_poke_only";
        local_180 = s__but_poke_only_01d21b8f[8];
        cStack_17f = s__but_poke_only_01d21b8f[9];
        local_17e = s__but_poke_only_01d21b8f[10];
        uStack_17d = s__but_poke_only_01d21b8f._11_2_;
        cStack_17b = s__but_poke_only_01d21b8f[0xd];
        cStack_17a = s__but_poke_only_01d21b8f[0xe];
LAB_00a79160:
        uVar16 = *(undefined8 *)pcVar15;
        local_188 = (uint)uVar16;
        cStack_184 = (char)((ulong)uVar16 >> 0x20);
        cStack_183 = (char)((ulong)uVar16 >> 0x28);
        cStack_182 = (char)((ulong)uVar16 >> 0x30);
        cStack_181 = (char)((ulong)uVar16 >> 0x38);
      }
      else {
        if (param3 == 0x325) {
          uVar14 = 0x6c;
          pcVar15 = "_field_el";
          goto LAB_00a792ac;
        }
LAB_00a7911c:
        if (!bVar13) goto switchD_00a789ec_caseD_36;
      }
      goto LAB_00a792d4;
    }
    if (iVar11 == 2) {
      if ((int)param3 < 0x2c9) {
        if (param3 == 0xae) {
          local_17e = '\0';
          uVar14 = 0x6e72;
          pcVar15 = "_only_turn";
        }
        else {
          if (param3 == 0x137) {
            local_188 = 0x325f;
            goto LAB_00a792c8;
          }
          if (param3 != 0x222) goto LAB_00a7911c;
          local_17e = '\0';
          uVar14 = 0x7265;
          pcVar15 = "_2_thunder";
        }
      }
      else {
        if (param3 - 0x2c9 < 2) {
          pcVar15 = "_2_poke_only";
          local_180 = s__2_poke_only_01cd71b4[8];
          cStack_17f = s__2_poke_only_01cd71b4[9];
          local_17e = s__2_poke_only_01cd71b4[10];
          uStack_17d = s__2_poke_only_01cd71b4._11_2_;
          goto LAB_00a79160;
        }
        if (param3 == 0x321) {
          local_188 = 0x7475625f;
          cStack_184 = '\0';
          goto LAB_00a792d4;
        }
        if (param3 != 0x325) goto LAB_00a7911c;
        uVar14 = 0x69;
        pcVar15 = "_field_mi";
      }
      goto LAB_00a792ac;
    }
LAB_00a7924c:
    if (bVar13) goto LAB_00a792d4;
switchD_00a789ec_caseD_36:
    pcVar15 = "bin/battle/waza/sequence/ew%03d.bseq";
LAB_00a79258:
    snprintf((char *)local_168,0x100,pcVar15,(ulong)param3);
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 1;
  }
LAB_00a7927c:
  FUN_008801a0(param_1,local_168);
  return;
}


