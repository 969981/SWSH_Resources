/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fba430; name: FUN_00fba430
 */


void FUN_00fba430(long param_1,long *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char cVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  
  puVar3 = PTR_DAT_02720700;
  lVar10 = *(long *)PTR_DAT_02720700;
  if (lVar10 == 0) {
    return;
  }
  uVar4 = FUN_012a4260(lVar10);
  if ((uVar4 & 1) == 0) {
    return;
  }
  FUN_012a5710(lVar10,*param_2);
  if (*(long *)puVar3 == 0) {
    return;
  }
  uVar4 = FUN_012a4260();
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(long *)PTR_DAT_02710958 == 0) {
    return;
  }
  puVar5 = (undefined8 *)FUN_01211c80();
  pcVar1 = (char *)*puVar5;
  pcVar7 = (char *)puVar5[1];
  while( true ) {
    if (pcVar1 == pcVar7) {
      return;
    }
    FUN_011f5730(pcVar1);
    lVar10 = FUN_0121b000();
    if (lVar10 == *param_2) break;
    pcVar1 = pcVar1 + 0x150;
  }
  pcVar11 = *(char **)(param_1 + 200);
  pcVar7 = *(char **)(param_1 + 0xd8);
  pcVar14 = *(char **)(param_1 + 0xd0);
  if ((ulong)(((long)*(char **)(param_1 + 0xd0) - (long)pcVar11 >> 4) * -0x30c30c30c30c30c3) <
      (ulong)(((long)pcVar7 - (long)pcVar11 >> 4) * -0x30c30c30c30c30c3)) goto LAB_00fba82c;
  FUN_011f58a0(pcVar11,"Remove Because over max InernetPrevTargetConnection");
  pcVar7 = pcVar11 + 0x150;
  if (pcVar7 == *(char **)(param_1 + 0xd0)) {
LAB_00fba7e4:
    do {
      if (pcVar7[-0x30] != '\0') {
        pcVar7[-0x30] = '\0';
      }
      if (pcVar7[-0x40] != '\0') {
        pcVar7[-0x40] = '\0';
      }
      pcVar14 = pcVar7 + -0x150;
      if (pcVar7[-0x90] != '\0') {
        pcVar7[-0x90] = '\0';
      }
      if (*pcVar14 != '\0') {
        *pcVar14 = '\0';
      }
      pcVar7 = pcVar14;
    } while (pcVar11 != pcVar14);
  }
  else {
    lVar10 = (long)pcVar11 - (long)*(char **)(param_1 + 200) >> 4;
    pcVar14 = *(char **)(param_1 + 0xd0) + lVar10 * -0x10 + -0x150;
    pcVar7 = *(char **)(param_1 + 200);
    do {
      while( true ) {
        pcVar13 = pcVar7;
        pcVar7 = pcVar13 + lVar10 * 0x10;
        if (*pcVar7 != '\0') break;
        if (pcVar7[0x150] != '\0') {
          memcpy(pcVar7 + 0x10,pcVar7 + 0x160,0xb0);
          *pcVar7 = '\x01';
        }
        cVar2 = pcVar7[0xc0];
        cVar6 = pcVar7[0x210];
joined_r0x00fba5b0:
        if (cVar2 == '\0') goto LAB_00fba650;
LAB_00fba5b4:
        if (cVar6 == '\0') {
          pcVar7[0xc0] = '\0';
          cVar2 = pcVar7[0x110];
          cVar6 = pcVar7[0x260];
          goto joined_r0x00fba70c;
        }
        *(undefined4 *)(pcVar7 + 0x10c) = *(undefined4 *)(pcVar7 + 0x25c);
        *(undefined8 *)(pcVar7 + 0xcc) = *(undefined8 *)(pcVar7 + 0x21c);
        *(undefined8 *)(pcVar7 + 0xc4) = *(undefined8 *)(pcVar7 + 0x214);
        *(undefined8 *)(pcVar7 + 0xec) = *(undefined8 *)(pcVar7 + 0x23c);
        *(undefined8 *)(pcVar7 + 0xe4) = *(undefined8 *)(pcVar7 + 0x234);
        *(undefined8 *)(pcVar7 + 0xdc) = *(undefined8 *)(pcVar7 + 0x22c);
        *(undefined8 *)(pcVar7 + 0xd4) = *(undefined8 *)(pcVar7 + 0x224);
        *(undefined8 *)(pcVar7 + 0x104) = *(undefined8 *)(pcVar7 + 0x254);
        *(undefined8 *)(pcVar7 + 0xfc) = *(undefined8 *)(pcVar7 + 0x24c);
        *(undefined8 *)(pcVar7 + 0xf4) = *(undefined8 *)(pcVar7 + 0x244);
        cVar6 = pcVar7[0x260];
        if (pcVar7[0x110] == '\0') goto LAB_00fba710;
LAB_00fba6dc:
        if (cVar6 == '\0') {
          pcVar7[0x110] = '\0';
          cVar2 = pcVar7[0x120];
          cVar6 = pcVar7[0x270];
          goto joined_r0x00fba730;
        }
        *(undefined2 *)(pcVar7 + 0x118) = *(undefined2 *)(pcVar7 + 0x268);
        *(undefined4 *)(pcVar7 + 0x114) = *(undefined4 *)(pcVar7 + 0x264);
        cVar6 = pcVar7[0x270];
        if (pcVar7[0x120] == '\0') goto LAB_00fba778;
LAB_00fba734:
        if (cVar6 == '\0') {
          pcVar7[0x120] = '\0';
        }
        else {
          *(undefined8 *)(pcVar7 + 0x140) = *(undefined8 *)(pcVar7 + 0x290);
          *(undefined8 *)(pcVar7 + 0x148) = *(undefined8 *)(pcVar7 + 0x298);
          *(undefined8 *)(pcVar7 + 0x128) = *(undefined8 *)(pcVar7 + 0x278);
          *(undefined8 *)(pcVar7 + 0x130) = *(undefined8 *)(pcVar7 + 0x280);
          *(undefined8 *)(pcVar7 + 0x138) = *(undefined8 *)(pcVar7 + 0x288);
        }
        pcVar7 = pcVar13 + 0x150;
        if (pcVar14 == pcVar13 + 0x150) goto LAB_00fba7c0;
      }
      if (pcVar7[0x150] == '\0') {
        *pcVar7 = '\0';
        cVar2 = pcVar7[0xc0];
        cVar6 = pcVar7[0x210];
        goto joined_r0x00fba5b0;
      }
      memcpy(pcVar7 + 0x10,pcVar7 + 0x160,0xa1);
      cVar6 = pcVar7[0x210];
      if (pcVar7[0xc0] != '\0') goto LAB_00fba5b4;
LAB_00fba650:
      if (cVar6 != '\0') {
        *(undefined4 *)(pcVar7 + 0x10c) = *(undefined4 *)(pcVar7 + 0x25c);
        *(undefined8 *)(pcVar7 + 0xcc) = *(undefined8 *)(pcVar7 + 0x21c);
        *(undefined8 *)(pcVar7 + 0xc4) = *(undefined8 *)(pcVar7 + 0x214);
        *(undefined8 *)(pcVar7 + 0xec) = *(undefined8 *)(pcVar7 + 0x23c);
        *(undefined8 *)(pcVar7 + 0xe4) = *(undefined8 *)(pcVar7 + 0x234);
        *(undefined8 *)(pcVar7 + 0xdc) = *(undefined8 *)(pcVar7 + 0x22c);
        *(undefined8 *)(pcVar7 + 0xd4) = *(undefined8 *)(pcVar7 + 0x224);
        *(undefined8 *)(pcVar7 + 0x104) = *(undefined8 *)(pcVar7 + 0x254);
        *(undefined8 *)(pcVar7 + 0xfc) = *(undefined8 *)(pcVar7 + 0x24c);
        *(undefined8 *)(pcVar7 + 0xf4) = *(undefined8 *)(pcVar7 + 0x244);
        pcVar7[0xc0] = '\x01';
      }
      cVar2 = pcVar7[0x110];
      cVar6 = pcVar7[0x260];
joined_r0x00fba70c:
      if (cVar2 != '\0') goto LAB_00fba6dc;
LAB_00fba710:
      if (cVar6 != '\0') {
        *(undefined8 *)(pcVar7 + 0x114) = *(undefined8 *)(pcVar7 + 0x264);
        pcVar7[0x110] = '\x01';
      }
      cVar2 = pcVar7[0x120];
      cVar6 = pcVar7[0x270];
joined_r0x00fba730:
      if (cVar2 != '\0') goto LAB_00fba734;
LAB_00fba778:
      if (cVar6 != '\0') {
        pcVar7[0x120] = '\x01';
        *(undefined8 *)(pcVar7 + 0x140) = *(undefined8 *)(pcVar7 + 0x290);
        *(undefined8 *)(pcVar7 + 0x148) = *(undefined8 *)(pcVar7 + 0x298);
        *(undefined8 *)(pcVar7 + 0x128) = *(undefined8 *)(pcVar7 + 0x278);
        *(undefined8 *)(pcVar7 + 0x130) = *(undefined8 *)(pcVar7 + 0x280);
        *(undefined8 *)(pcVar7 + 0x138) = *(undefined8 *)(pcVar7 + 0x288);
      }
      pcVar7 = pcVar13 + 0x150;
    } while (pcVar14 != pcVar13 + 0x150);
LAB_00fba7c0:
    pcVar11 = pcVar13 + 0x150 + lVar10 * 0x10;
    pcVar7 = *(char **)(param_1 + 0xd0);
    if (*(char **)(param_1 + 0xd0) + lVar10 * -0x10 != pcVar13 + 0x150) goto LAB_00fba7e4;
  }
  pcVar7 = *(char **)(param_1 + 0xd8);
  *(char **)(param_1 + 0xd0) = pcVar11;
  pcVar14 = pcVar11;
LAB_00fba82c:
  if (pcVar14 == pcVar7) {
    FUN_00fc3f60((undefined8 *)(param_1 + 200),pcVar1);
    return;
  }
  uVar12 = *(undefined8 *)(param_1 + 0xe0);
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar12;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  *pcVar14 = '\0';
  if (*pcVar1 != '\0') {
    memcpy(pcVar14 + 0x10,pcVar1 + 0x10,0xb0);
    *pcVar14 = '\x01';
  }
  pcVar14[0xc0] = '\0';
  if (pcVar1[0xc0] != '\0') {
    uVar12 = *(undefined8 *)(pcVar1 + 0xc4);
    *(undefined8 *)(pcVar14 + 0xcc) = *(undefined8 *)(pcVar1 + 0xcc);
    *(undefined8 *)(pcVar14 + 0xc4) = uVar12;
    uVar12 = *(undefined8 *)(pcVar1 + 0xd4);
    uVar8 = *(undefined8 *)(pcVar1 + 0xdc);
    uVar9 = *(undefined8 *)(pcVar1 + 0xe4);
    *(undefined8 *)(pcVar14 + 0xec) = *(undefined8 *)(pcVar1 + 0xec);
    *(undefined8 *)(pcVar14 + 0xe4) = uVar9;
    *(undefined8 *)(pcVar14 + 0xdc) = uVar8;
    *(undefined8 *)(pcVar14 + 0xd4) = uVar12;
    uVar12 = *(undefined8 *)(pcVar1 + 0xf4);
    uVar8 = *(undefined8 *)(pcVar1 + 0xfc);
    uVar9 = *(undefined8 *)(pcVar1 + 0x104);
    *(undefined4 *)(pcVar14 + 0x10c) = *(undefined4 *)(pcVar1 + 0x10c);
    *(undefined8 *)(pcVar14 + 0xf4) = uVar12;
    *(undefined8 *)(pcVar14 + 0xfc) = uVar8;
    *(undefined8 *)(pcVar14 + 0x104) = uVar9;
    pcVar14[0xc0] = '\x01';
  }
  pcVar14[0x110] = '\0';
  if (pcVar1[0x110] != '\0') {
    *(undefined8 *)(pcVar14 + 0x114) = *(undefined8 *)(pcVar1 + 0x114);
    pcVar14[0x110] = '\x01';
  }
  pcVar14[0x120] = '\0';
  if (pcVar1[0x120] != '\0') {
    *(undefined8 *)(pcVar14 + 0x128) = *(undefined8 *)(pcVar1 + 0x128);
    uVar8 = *(undefined8 *)(pcVar1 + 0x138);
    uVar12 = *(undefined8 *)(pcVar1 + 0x140);
    uVar9 = *(undefined8 *)(pcVar1 + 0x148);
    *(undefined8 *)(pcVar14 + 0x130) = *(undefined8 *)(pcVar1 + 0x130);
    *(undefined8 *)(pcVar14 + 0x138) = uVar8;
    *(undefined8 *)(pcVar14 + 0x140) = uVar12;
    *(undefined8 *)(pcVar14 + 0x148) = uVar9;
    pcVar14[0x120] = '\x01';
  }
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + 0x150;
  return;
}


