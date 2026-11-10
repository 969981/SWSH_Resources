/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfb9c0; name: FUN_00dfb9c0
 */


void FUN_00dfb9c0(long param_1,ulong *param_2,long param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  ulong *puVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  double dVar17;
  ulong local_250;
  ulong uStack_248;
  ulong local_240;
  ulong local_238;
  ulong local_230;
  ulong local_228;
  ulong local_220;
  ulong local_218;
  ulong local_210;
  ulong local_208;
  ulong local_200;
  ulong local_1f8;
  ulong local_1f0;
  ulong local_1e8;
  undefined4 local_1e0;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_1a0 [7];
  ulong local_168;
  ulong local_160;
  ulong local_158;
  ulong local_150;
  ulong local_148;
  ulong local_140;
  ulong local_138;
  undefined4 local_130;
  float local_a0;
  float fStack_9c;
  undefined8 uStack_98;
  ulong local_90;
  ulong uStack_88;
  long local_68;
  
  FUN_00a658b0(&local_68,param_1 + 0x50);
  lVar5 = *(long *)(*(long *)(param_1 + 0xa8) + 0x68);
  if (lVar5 != 0) {
    iVar9 = (int)param_2[0x32];
    if ((0 < iVar9) && (*(char *)(lVar5 + 0x170) != '\0')) {
      if (iVar9 < 2) {
        uStack_248 = param_2[3];
        local_238 = param_2[5];
        local_228 = param_2[7];
        local_250 = param_2[2];
        local_240 = param_2[4];
        local_230 = param_2[6];
        FUN_00e01f10(local_1a0,*(long *)(param_1 + 0xa8),&local_230);
        param_2[0x37] = local_1a0[1];
        param_2[0x3b] = local_1a0[5];
        param_2[0x39] = local_1a0[3];
        param_2[0x3f] = local_158;
        param_2[0x3d] = local_168;
        param_2[0x43] = local_138;
        param_2[0x41] = local_148;
        param_2[0x38] = local_1a0[2];
        param_2[0x36] = local_1a0[0];
        param_2[0x3c] = local_1a0[6];
        param_2[0x3a] = local_1a0[4];
        param_2[0x40] = local_150;
        param_2[0x3e] = local_160;
        *(undefined4 *)(param_2 + 0x44) = local_130;
        param_2[0x42] = local_140;
        param_2[0x34] = local_230;
        if ((int)param_2[0x36] == 2) {
LAB_00dfc148:
          uVar6 = 0x100000000;
        }
        else {
          if ((int)param_2[0x36] != 1) goto joined_r0x00dfc158;
          uVar6 = 1;
        }
        *(undefined8 *)((long)param_2 + 0x194) = uVar6;
      }
      else {
        uVar11 = 0;
        puVar10 = param_2 + 2;
        do {
          while( true ) {
            if (7 < uVar11) goto LAB_00dfc208;
            local_1c8 = puVar10[1];
            local_1b8 = puVar10[3];
            local_1a8 = puVar10[5];
            local_1d0 = *puVar10;
            local_1c0 = puVar10[2];
            local_1b0 = puVar10[4];
            FUN_00e01f10(&local_250,*(undefined8 *)(param_1 + 0xa8),&local_1b0);
            if ((int)local_250 == 1) break;
            if ((int)local_250 == 2) {
              param_2[0x37] = uStack_248;
              param_2[0x3b] = local_228;
              param_2[0x39] = local_238;
              param_2[0x3f] = local_208;
              param_2[0x3d] = local_218;
              param_2[0x43] = local_1e8;
              param_2[0x41] = local_1f8;
              param_2[0x38] = local_240;
              param_2[0x36] = local_250;
              param_2[0x3c] = local_220;
              param_2[0x3a] = local_230;
              param_2[0x40] = local_200;
              param_2[0x3e] = local_210;
              *(undefined4 *)(param_2 + 0x44) = local_1e0;
              param_2[0x42] = local_1f0;
              param_2[0x34] = local_1b0;
              goto LAB_00dfc148;
            }
            uVar11 = uVar11 + 1;
            puVar10 = puVar10 + 6;
            if ((long)iVar9 <= (long)uVar11) goto LAB_00dfbb78;
          }
          lVar5 = (long)(int)*(uint *)((long)param_2 + 0x194);
          if (7 < *(uint *)((long)param_2 + 0x194)) goto LAB_00dfc208;
          param_2[lVar5 * 0x10 + 0x53] = uStack_248;
          param_2[lVar5 * 0x10 + 0x57] = local_228;
          param_2[lVar5 * 0x10 + 0x55] = local_238;
          param_2[lVar5 * 0x10 + 0x5b] = local_208;
          param_2[lVar5 * 0x10 + 0x59] = local_218;
          param_2[lVar5 * 0x10 + 0x5f] = local_1e8;
          param_2[lVar5 * 0x10 + 0x5d] = local_1f8;
          param_2[lVar5 * 0x10 + 0x54] = local_240;
          param_2[lVar5 * 0x10 + 0x52] = local_250;
          param_2[lVar5 * 0x10 + 0x58] = local_220;
          param_2[lVar5 * 0x10 + 0x56] = local_230;
          param_2[lVar5 * 0x10 + 0x5c] = local_200;
          param_2[lVar5 * 0x10 + 0x5a] = local_210;
          *(undefined4 *)(param_2 + lVar5 * 0x10 + 0x60) = local_1e0;
          param_2[lVar5 * 0x10 + 0x5e] = local_1f0;
          param_2[lVar5 + 0x4a] = local_1b0;
          local_1a0[lVar5 * 4 + 2] = local_230;
          local_1a0[lVar5 * 4 + 3] = local_228;
          local_1a0[lVar5 * 4] = local_240;
          local_1a0[lVar5 * 4 + 1] = local_238;
          *(undefined4 *)(param_2 + 0x33) = 0;
          *(int *)((long)param_2 + 0x194) = *(int *)((long)param_2 + 0x194) + 1;
          uVar11 = uVar11 + 1;
          puVar10 = puVar10 + 6;
        } while ((long)uVar11 < (long)iVar9);
LAB_00dfbb78:
        uVar1 = *(uint *)((long)param_2 + 0x194);
        if (1 < (int)uVar1) {
          if (uVar1 != 2) {
            *(undefined4 *)((long)param_2 + 0x194) = 2;
          }
          iVar4 = FUN_00dd5eb0(DAT_01d4c4d4,param_2 + 0x54,param_2 + 0x56,param_2 + 100,
                               param_2 + 0x66,param_2 + 0x48);
          iVar9 = (uint)(iVar4 == 2) << 1;
          if (iVar4 == 1) {
            iVar9 = 1;
          }
          *(int *)(param_2 + 0x46) = iVar9;
          if ((iVar9 == 1) || (iVar9 != 2)) {
            param_2[0x36] = param_2[0x52];
            param_2[0x37] = param_2[0x53];
            param_2[0x3a] = param_2[0x56];
            param_2[0x3b] = param_2[0x57];
            param_2[0x38] = param_2[0x54];
            param_2[0x39] = param_2[0x55];
            param_2[0x40] = param_2[0x5c];
            param_2[0x3e] = param_2[0x5a];
            param_2[0x3f] = param_2[0x5b];
            param_2[0x3c] = param_2[0x58];
            param_2[0x3d] = param_2[0x59];
            *(int *)(param_2 + 0x44) = (int)param_2[0x60];
            param_2[0x43] = param_2[0x5f];
            param_2[0x42] = param_2[0x5e];
            param_2[0x41] = param_2[0x5d];
            param_2[0x34] = param_2[0x4a];
          }
          else {
            uVar11 = 0;
            do {
              if (7 < uVar11) goto LAB_00dfc208;
              if (*(ulong *)(param_3 + 0x1a0) == param_2[uVar11 + 0x4a]) goto LAB_00dfbcb4;
              uVar11 = uVar11 + 1;
            } while ((long)uVar11 < (long)(int)uVar1);
            uStack_248 = param_2[1];
            local_250 = *param_2 & 0xffffffff;
            uVar8 = 0;
            uVar11 = 0xffffffff;
            puVar10 = local_1a0 + 2;
            dVar17 = DAT_01cd5020;
            do {
              local_1d0 = puVar10[-2];
              local_1c8 = puVar10[-1];
              local_90 = *puVar10;
              uStack_88 = puVar10[1];
              fStack_9c = 0.0;
              local_a0 = 0.0;
              uStack_98 = 0;
              FUN_00dd5de0(&local_250,&local_1d0,&local_90,&local_a0);
              fVar12 = (float)local_250 - local_a0;
              fVar13 = (float)(local_250 >> 0x20) - fStack_9c;
              fVar14 = (float)uStack_248 - (float)uStack_98;
              fVar15 = (float)(uStack_248 >> 0x20) - uStack_98._4_4_;
              fVar12 = fVar12 * fVar12;
              fVar13 = fVar13 * fVar13;
              fVar14 = fVar14 * fVar14;
              fVar15 = fVar15 * fVar15;
              auVar16._4_4_ = fVar13;
              auVar16._0_4_ = fVar12;
              auVar16._8_4_ = fVar14;
              auVar16._12_4_ = fVar15;
              auVar2._4_4_ = fVar13;
              auVar2._0_4_ = fVar12;
              auVar2._8_4_ = fVar14;
              auVar2._12_4_ = fVar15;
              auVar16 = NEON_ext(auVar16,auVar2,8,1);
              dVar3 = (double)(auVar16._0_4_ + fVar12 + auVar16._4_4_ + fVar13);
              uVar7 = (uint)uVar11;
              if (dVar3 <= dVar17) {
                uVar7 = (uint)uVar8;
                dVar17 = dVar3;
              }
              uVar11 = (ulong)uVar7;
              uVar8 = uVar8 + 1;
              puVar10 = puVar10 + 4;
            } while (uVar1 != uVar8);
            if (7 < uVar7) {
LAB_00dfc208:
                    /* WARNING: Subroutine does not return */
              abort();
            }
LAB_00dfbcb4:
            iVar9 = (int)uVar11;
            param_2[0x37] = param_2[(long)iVar9 * 0x10 + 0x53];
            uVar11 = param_2[(long)iVar9 * 0x10 + 0x55];
            param_2[0x3b] = param_2[(long)iVar9 * 0x10 + 0x57];
            param_2[0x39] = uVar11;
            uVar11 = param_2[(long)iVar9 * 0x10 + 0x59];
            param_2[0x3f] = param_2[(long)iVar9 * 0x10 + 0x5b];
            param_2[0x3d] = uVar11;
            uVar8 = param_2[(long)iVar9 * 0x10 + 0x5d];
            uVar11 = param_2[(long)iVar9 * 0x10 + 0x60];
            param_2[0x43] = param_2[(long)iVar9 * 0x10 + 0x5f];
            param_2[0x41] = uVar8;
            uVar8 = param_2[(long)iVar9 * 0x10 + 0x52];
            param_2[0x38] = param_2[(long)iVar9 * 0x10 + 0x54];
            param_2[0x36] = uVar8;
            uVar8 = param_2[(long)iVar9 * 0x10 + 0x56];
            param_2[0x3c] = param_2[(long)iVar9 * 0x10 + 0x58];
            param_2[0x3a] = uVar8;
            uVar8 = param_2[(long)iVar9 * 0x10 + 0x5a];
            param_2[0x40] = param_2[(long)iVar9 * 0x10 + 0x5c];
            param_2[0x3e] = uVar8;
            uVar8 = param_2[(long)iVar9 * 0x10 + 0x5e];
            *(int *)(param_2 + 0x44) = (int)uVar11;
            param_2[0x42] = uVar8;
            param_2[0x34] = param_2[(long)iVar9 + 0x4a];
          }
        }
      }
      goto joined_r0x00dfc158;
    }
  }
  param_2[0x32] = 0;
  param_2[6] = 0xcbf29ce484222645;
  param_2[0xc] = 0xcbf29ce484222645;
  param_2[0x12] = 0xcbf29ce484222645;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[0x18] = 0xcbf29ce484222645;
  param_2[0x1e] = 0xcbf29ce484222645;
  param_2[0x24] = 0xcbf29ce484222645;
  param_2[0x2a] = 0xcbf29ce484222645;
  param_2[0x30] = 0xcbf29ce484222645;
  *(undefined4 *)(param_2 + 0x33) = 0;
  param_2[0x34] = 0xcbf29ce484222645;
  *(undefined4 *)(param_2 + 0x44) = 0;
  param_2[0x43] = 0;
  param_2[0x42] = 0;
  param_2[0x41] = 0;
  param_2[0x36] = 0;
  *(undefined4 *)(param_2 + 0x46) = 0;
  param_2[0x4a] = 0xcbf29ce484222645;
  param_2[0x4b] = 0xcbf29ce484222645;
  param_2[0x4c] = 0xcbf29ce484222645;
  param_2[0x4d] = 0xcbf29ce484222645;
  param_2[0x4e] = 0xcbf29ce484222645;
  param_2[0x4f] = 0xcbf29ce484222645;
  param_2[0x50] = 0xcbf29ce484222645;
  param_2[0x51] = 0xcbf29ce484222645;
  *(undefined4 *)(param_2 + 0x60) = 0;
  param_2[0x5f] = 0;
  param_2[0x5e] = 0;
  param_2[0x5d] = 0;
  param_2[0x5c] = 0;
  param_2[0x5b] = 0;
  param_2[0x5a] = 0;
  param_2[0x59] = 0;
  param_2[0x58] = 0;
  param_2[0x57] = 0;
  param_2[0x56] = 0;
  param_2[0x55] = 0;
  param_2[0x54] = 0;
  param_2[0x53] = 0;
  param_2[0x52] = 0;
  *(undefined4 *)(param_2 + 0x70) = 0;
  param_2[0x6f] = 0;
  param_2[0x6e] = 0;
  param_2[0x6d] = 0;
  param_2[0x6c] = 0;
  param_2[0x6b] = 0;
  param_2[0x6a] = 0;
  param_2[0x69] = 0;
  param_2[0x68] = 0;
  param_2[0x67] = 0;
  param_2[0x66] = 0;
  param_2[0x65] = 0;
  param_2[100] = 0;
  param_2[99] = 0;
  param_2[0x62] = 0;
  *(undefined4 *)(param_2 + 0x80) = 0;
  param_2[0x7f] = 0;
  param_2[0x7e] = 0;
  param_2[0x7d] = 0;
  param_2[0x7c] = 0;
  param_2[0x7b] = 0;
  param_2[0x7a] = 0;
  param_2[0x79] = 0;
  param_2[0x78] = 0;
  param_2[0x77] = 0;
  param_2[0x76] = 0;
  param_2[0x75] = 0;
  param_2[0x74] = 0;
  param_2[0x73] = 0;
  param_2[0x72] = 0;
  *(undefined4 *)(param_2 + 0x90) = 0;
  param_2[0x8f] = 0;
  param_2[0x8e] = 0;
  param_2[0x8d] = 0;
  param_2[0x8c] = 0;
  param_2[0x8b] = 0;
  param_2[0x8a] = 0;
  param_2[0x89] = 0;
  param_2[0x88] = 0;
  param_2[0x87] = 0;
  param_2[0x86] = 0;
  param_2[0x85] = 0;
  param_2[0x84] = 0;
  param_2[0x83] = 0;
  param_2[0x82] = 0;
  *(undefined4 *)(param_2 + 0xa0) = 0;
  param_2[0x9f] = 0;
  param_2[0x9e] = 0;
  param_2[0x9d] = 0;
  param_2[0x9c] = 0;
  param_2[0x9b] = 0;
  param_2[0x9a] = 0;
  param_2[0x99] = 0;
  param_2[0x98] = 0;
  param_2[0x97] = 0;
  param_2[0x96] = 0;
  param_2[0x95] = 0;
  param_2[0x94] = 0;
  param_2[0x93] = 0;
  param_2[0x92] = 0;
  *(undefined4 *)(param_2 + 0xb0) = 0;
  param_2[0xaf] = 0;
  param_2[0xae] = 0;
  param_2[0xad] = 0;
  param_2[0xac] = 0;
  param_2[0xab] = 0;
  param_2[0xaa] = 0;
  param_2[0xa9] = 0;
  param_2[0xa8] = 0;
  param_2[0xa7] = 0;
  param_2[0xa6] = 0;
  param_2[0xa5] = 0;
  param_2[0xa4] = 0;
  param_2[0xa3] = 0;
  param_2[0xa2] = 0;
  *(undefined4 *)(param_2 + 0xc0) = 0;
  param_2[0xbf] = 0;
  param_2[0xbe] = 0;
  param_2[0xbd] = 0;
  param_2[0xbc] = 0;
  param_2[0xbb] = 0;
  param_2[0xba] = 0;
  param_2[0xb9] = 0;
  param_2[0xb8] = 0;
  param_2[0xb7] = 0;
  param_2[0xb6] = 0;
  param_2[0xb5] = 0;
  param_2[0xb4] = 0;
  param_2[0xb3] = 0;
  param_2[0xb2] = 0;
  *(undefined4 *)(param_2 + 0xd0) = 0;
  param_2[0xcf] = 0;
  param_2[0xce] = 0;
  param_2[0xcd] = 0;
  param_2[0xcc] = 0;
  param_2[0xcb] = 0;
  param_2[0xca] = 0;
  param_2[0xc9] = 0;
  param_2[200] = 0;
  param_2[199] = 0;
  param_2[0xc6] = 0;
  param_2[0xc5] = 0;
  param_2[0xc4] = 0;
  param_2[0xc3] = 0;
  param_2[0xc2] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xf] = 0;
  param_2[0xe] = 0;
  param_2[0x15] = 0;
  param_2[0x14] = 0;
  param_2[0x1b] = 0;
  param_2[0x1a] = 0;
  param_2[0x21] = 0;
  param_2[0x20] = 0;
  param_2[0x27] = 0;
  param_2[0x26] = 0;
  param_2[0x2d] = 0;
  param_2[0x2c] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x49] = 0;
  param_2[0x48] = 0;
joined_r0x00dfc158:
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  return;
}


