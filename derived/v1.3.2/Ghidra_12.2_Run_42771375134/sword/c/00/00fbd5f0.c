/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fbd5f0; name: FUN_00fbd5f0
 */


void FUN_00fbd5f0(long param_1)

{
  char *pcVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  ulong uVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  char *pcVar18;
  uint uVar19;
  undefined1 auStack_2d0 [16];
  char local_2c0;
  char local_2b8;
  char local_2a8;
  char local_284;
  char local_270;
  char local_234;
  char local_22c;
  char local_1e0;
  char local_120;
  char local_d0;
  
  puVar4 = PTR_DAT_02720700;
  if (((*(long *)PTR_DAT_02720700 != 0) &&
      (uVar7 = FUN_012a4260(), puVar4 = PTR_DAT_02720700, (uVar7 & 1) != 0)) &&
     (*(long *)PTR_DAT_02710958 != 0)) {
    plVar8 = (long *)FUN_01211c80();
    nn::os::GetSystemTick();
    lVar9 = nn::os::ConvertToTimeSpan();
    uVar13 = lVar9 - *(long *)(param_1 + 0x260);
    uVar7 = ((long)uVar13 >> 0x20) * 0xd7b634db + ((uVar13 & 0xffffffff) * 0xd7b634db >> 0x20);
    puVar4 = PTR_DAT_02720700;
    if (999 < (((long)uVar13 >> 0x20) * 0x431bde82 + ((long)uVar7 >> 0x20) +
               ((long)((uVar13 & 0xffffffff) * 0x431bde82 + (uVar7 & 0xffffffff)) >> 0x20) >> 0x12)
              - ((long)uVar13 >> 0x3f)) {
      nn::os::GetSystemTick();
      uVar10 = nn::os::ConvertToTimeSpan();
      *(undefined8 *)(param_1 + 0x260) = uVar10;
      pcVar16 = *(char **)(param_1 + 200);
      pcVar14 = *(char **)(param_1 + 0xd0);
      lVar9 = *plVar8;
      lVar17 = plVar8[1];
      puVar4 = PTR_DAT_02720700;
      if (pcVar14 != pcVar16) {
LAB_00fbd6c4:
        do {
          if (lVar9 != lVar17) {
            uVar19 = 0;
            do {
              uVar10 = FUN_011f5730(lVar9);
              uVar11 = FUN_011f5730(pcVar16);
              uVar6 = FUN_0121ae60(uVar10,uVar11);
              uVar19 = uVar19 | uVar6;
              if ((uVar6 & 1) != 0) break;
              bVar5 = lVar17 + -0x150 != lVar9;
              lVar9 = lVar9 + 0x150;
            } while (bVar5);
            if ((uVar19 & 1) != 0) {
              pcVar14 = *(char **)(param_1 + 0xd0);
              pcVar16 = pcVar16 + 0x150;
              lVar9 = *plVar8;
              lVar17 = plVar8[1];
              puVar4 = PTR_DAT_02720700;
              if (pcVar14 == pcVar16) break;
              goto LAB_00fbd6c4;
            }
            pcVar14 = *(char **)(param_1 + 0xd0);
          }
          if (pcVar16 + 0x150 == pcVar14) {
            cVar12 = pcVar14[-0x30];
            pcVar1 = pcVar14;
            pcVar14 = pcVar16;
            goto joined_r0x00fbda4c;
          }
          lVar9 = (long)pcVar16 - (long)*(char **)(param_1 + 200) >> 4;
          pcVar1 = *(char **)(param_1 + 200);
          do {
            while( true ) {
              pcVar18 = pcVar1;
              pcVar1 = pcVar18 + lVar9 * 0x10;
              if (*pcVar1 == '\0') break;
              if (pcVar1[0x150] == '\0') {
                *pcVar1 = '\0';
                cVar2 = pcVar1[0xc0];
                cVar12 = pcVar1[0x210];
                goto joined_r0x00fbd7b8;
              }
              memcpy(pcVar1 + 0x10,pcVar1 + 0x160,0xa1);
              cVar12 = pcVar1[0x210];
              if (pcVar1[0xc0] == '\0') goto LAB_00fbd858;
LAB_00fbd7bc:
              if (cVar12 == '\0') {
                pcVar1[0xc0] = '\0';
                cVar2 = pcVar1[0x110];
                cVar12 = pcVar1[0x260];
                goto joined_r0x00fbd914;
              }
              *(undefined4 *)(pcVar1 + 0x10c) = *(undefined4 *)(pcVar1 + 0x25c);
              *(undefined8 *)(pcVar1 + 0xcc) = *(undefined8 *)(pcVar1 + 0x21c);
              *(undefined8 *)(pcVar1 + 0xc4) = *(undefined8 *)(pcVar1 + 0x214);
              *(undefined8 *)(pcVar1 + 0xec) = *(undefined8 *)(pcVar1 + 0x23c);
              *(undefined8 *)(pcVar1 + 0xe4) = *(undefined8 *)(pcVar1 + 0x234);
              *(undefined8 *)(pcVar1 + 0xdc) = *(undefined8 *)(pcVar1 + 0x22c);
              *(undefined8 *)(pcVar1 + 0xd4) = *(undefined8 *)(pcVar1 + 0x224);
              *(undefined8 *)(pcVar1 + 0x104) = *(undefined8 *)(pcVar1 + 0x254);
              *(undefined8 *)(pcVar1 + 0xfc) = *(undefined8 *)(pcVar1 + 0x24c);
              *(undefined8 *)(pcVar1 + 0xf4) = *(undefined8 *)(pcVar1 + 0x244);
              cVar12 = pcVar1[0x260];
              if (pcVar1[0x110] == '\0') goto LAB_00fbd918;
LAB_00fbd8e4:
              if (cVar12 == '\0') {
                pcVar1[0x110] = '\0';
                cVar2 = pcVar1[0x120];
                cVar12 = pcVar1[0x270];
                goto joined_r0x00fbd97c;
              }
              *(undefined2 *)(pcVar1 + 0x118) = *(undefined2 *)(pcVar1 + 0x268);
              *(undefined4 *)(pcVar1 + 0x114) = *(undefined4 *)(pcVar1 + 0x264);
              cVar12 = pcVar1[0x270];
              if (pcVar1[0x120] != '\0') goto LAB_00fbd93c;
LAB_00fbd980:
              if (cVar12 != '\0') {
                pcVar1[0x120] = '\x01';
                *(undefined8 *)(pcVar1 + 0x140) = *(undefined8 *)(pcVar1 + 0x290);
                *(undefined8 *)(pcVar1 + 0x148) = *(undefined8 *)(pcVar1 + 0x298);
                *(undefined8 *)(pcVar1 + 0x128) = *(undefined8 *)(pcVar1 + 0x278);
                *(undefined8 *)(pcVar1 + 0x130) = *(undefined8 *)(pcVar1 + 0x280);
                *(undefined8 *)(pcVar1 + 0x138) = *(undefined8 *)(pcVar1 + 0x288);
              }
joined_r0x00fbd968:
              pcVar1 = pcVar18 + 0x150;
              if (pcVar14 + lVar9 * -0x10 + -0x150 == pcVar18 + 0x150) goto LAB_00fbd9c8;
            }
            if (pcVar1[0x150] != '\0') {
              memcpy(pcVar1 + 0x10,pcVar1 + 0x160,0xb0);
              *pcVar1 = '\x01';
            }
            cVar2 = pcVar1[0xc0];
            cVar12 = pcVar1[0x210];
joined_r0x00fbd7b8:
            if (cVar2 != '\0') goto LAB_00fbd7bc;
LAB_00fbd858:
            if (cVar12 != '\0') {
              *(undefined4 *)(pcVar1 + 0x10c) = *(undefined4 *)(pcVar1 + 0x25c);
              *(undefined8 *)(pcVar1 + 0xcc) = *(undefined8 *)(pcVar1 + 0x21c);
              *(undefined8 *)(pcVar1 + 0xc4) = *(undefined8 *)(pcVar1 + 0x214);
              *(undefined8 *)(pcVar1 + 0xec) = *(undefined8 *)(pcVar1 + 0x23c);
              *(undefined8 *)(pcVar1 + 0xe4) = *(undefined8 *)(pcVar1 + 0x234);
              *(undefined8 *)(pcVar1 + 0xdc) = *(undefined8 *)(pcVar1 + 0x22c);
              *(undefined8 *)(pcVar1 + 0xd4) = *(undefined8 *)(pcVar1 + 0x224);
              *(undefined8 *)(pcVar1 + 0x104) = *(undefined8 *)(pcVar1 + 0x254);
              *(undefined8 *)(pcVar1 + 0xfc) = *(undefined8 *)(pcVar1 + 0x24c);
              *(undefined8 *)(pcVar1 + 0xf4) = *(undefined8 *)(pcVar1 + 0x244);
              pcVar1[0xc0] = '\x01';
            }
            cVar2 = pcVar1[0x110];
            cVar12 = pcVar1[0x260];
joined_r0x00fbd914:
            if (cVar2 != '\0') goto LAB_00fbd8e4;
LAB_00fbd918:
            if (cVar12 != '\0') {
              *(undefined8 *)(pcVar1 + 0x114) = *(undefined8 *)(pcVar1 + 0x264);
              pcVar1[0x110] = '\x01';
            }
            cVar2 = pcVar1[0x120];
            cVar12 = pcVar1[0x270];
joined_r0x00fbd97c:
            if (cVar2 == '\0') goto LAB_00fbd980;
LAB_00fbd93c:
            if (cVar12 != '\0') {
              *(undefined8 *)(pcVar1 + 0x140) = *(undefined8 *)(pcVar1 + 0x290);
              *(undefined8 *)(pcVar1 + 0x148) = *(undefined8 *)(pcVar1 + 0x298);
              *(undefined8 *)(pcVar1 + 0x128) = *(undefined8 *)(pcVar1 + 0x278);
              *(undefined8 *)(pcVar1 + 0x130) = *(undefined8 *)(pcVar1 + 0x280);
              *(undefined8 *)(pcVar1 + 0x138) = *(undefined8 *)(pcVar1 + 0x288);
              goto joined_r0x00fbd968;
            }
            pcVar1[0x120] = '\0';
            pcVar1 = pcVar18 + 0x150;
          } while (pcVar14 + lVar9 * -0x10 + -0x150 != pcVar18 + 0x150);
LAB_00fbd9c8:
          pcVar15 = *(char **)(param_1 + 0xd0);
          pcVar14 = pcVar18 + 0x150 + lVar9 * 0x10;
          if (pcVar15 + lVar9 * -0x10 != pcVar18 + 0x150) {
            do {
              cVar12 = pcVar15[-0x30];
              pcVar1 = pcVar15;
joined_r0x00fbda4c:
              if (cVar12 != '\0') {
                pcVar1[-0x30] = '\0';
              }
              if (pcVar1[-0x40] != '\0') {
                pcVar1[-0x40] = '\0';
              }
              pcVar15 = pcVar1 + -0x150;
              if (pcVar1[-0x90] != '\0') {
                pcVar1[-0x90] = '\0';
              }
              if (*pcVar15 != '\0') {
                *pcVar15 = '\0';
              }
            } while (pcVar14 != pcVar15);
          }
          *(char **)(param_1 + 0xd0) = pcVar14;
          lVar9 = *plVar8;
          lVar17 = plVar8[1];
          puVar4 = PTR_DAT_02720700;
        } while (pcVar14 != pcVar16);
      }
      for (; puVar3 = PTR_DAT_02720700, lVar9 != lVar17; lVar9 = lVar9 + 0x150) {
        uVar11 = *(undefined8 *)PTR_DAT_02720700;
        PTR_DAT_02720700 = puVar4;
        FUN_011f5730(lVar9);
        uVar10 = FUN_0121b000();
        uVar7 = FUN_012a56b0(uVar11,uVar10);
        if (((uVar7 & 1) == 0) && (uVar7 = FUN_00fbb3f0(param_1,lVar9), (uVar7 & 1) == 0)) {
          FUN_011f5760(auStack_2d0,lVar9,0);
          FUN_00fbb800(param_1,auStack_2d0);
          if (local_d0 != '\0') {
            local_d0 = '\0';
          }
          if (local_120 != '\0') {
            local_120 = '\0';
          }
          if (local_1e0 != '\0') {
            local_1e0 = '\0';
          }
          if (local_234 != '\0') {
            if (local_22c != '\0') {
              local_22c = '\0';
            }
            local_234 = '\0';
          }
          if (local_270 != '\0') {
            local_270 = '\0';
          }
          if (local_284 != '\0') {
            local_284 = '\0';
          }
          if (local_2a8 != '\0') {
            local_2a8 = '\0';
          }
          if (local_2b8 != '\0') {
            local_2b8 = '\0';
          }
          if (local_2c0 != '\0') {
            local_2c0 = '\0';
          }
        }
        puVar4 = PTR_DAT_02720700;
        PTR_DAT_02720700 = puVar3;
      }
    }
  }
  PTR_DAT_02720700 = puVar4;
  return;
}


