/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fbef40; name: FUN_00fbef40
 */


void FUN_00fbef40(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  char local_1c0 [352];
  
  lVar8 = *(long *)PTR_DAT_02720700;
  if (lVar8 == 0) {
    return;
  }
  uVar2 = FUN_012a4260(lVar8);
  if ((uVar2 & 1) == 0) {
    return;
  }
  FUN_01225e50(param_2);
  uVar3 = FUN_0121b000();
  FUN_012a55a0(lVar8,uVar3);
  FUN_011f5570(local_1c0,param_2);
  FUN_01210640(*(undefined8 *)PTR_DAT_02710958,local_1c0);
  pcVar9 = *(char **)(param_1 + 200);
  pcVar6 = *(char **)(param_1 + 0xd0);
  if (pcVar9 == pcVar6) {
LAB_00fbf038:
    pcVar6 = *(char **)(param_1 + 0xd0);
    if (pcVar6 == pcVar9) {
      return;
    }
  }
  else {
    uVar3 = FUN_01225e50(param_2);
    uVar4 = FUN_011f5730(pcVar9);
    uVar2 = FUN_0121ae60(uVar3,uVar4);
    if ((uVar2 & 1) != 0) goto LAB_00fbf038;
    do {
      pcVar9 = pcVar9 + 0x150;
      if (pcVar6 == pcVar9) {
        pcVar9 = pcVar6;
        goto LAB_00fbf038;
      }
      uVar3 = FUN_01225e50(param_2);
      uVar4 = FUN_011f5730(pcVar9);
      uVar2 = FUN_0121ae60(uVar3,uVar4);
    } while ((uVar2 & 1) == 0);
    pcVar6 = *(char **)(param_1 + 0xd0);
    if (pcVar6 == pcVar9) {
      return;
    }
  }
  if (pcVar9 + 0x150 != pcVar6) {
    lVar8 = (long)pcVar9 - (long)*(char **)(param_1 + 200) >> 4;
    pcVar9 = *(char **)(param_1 + 200);
    do {
      while( true ) {
        pcVar7 = pcVar9;
        pcVar9 = pcVar7 + lVar8 * 0x10;
        if (*pcVar9 == '\0') break;
        if (pcVar9[0x150] == '\0') {
          *pcVar9 = '\0';
          cVar1 = pcVar9[0xc0];
          cVar5 = pcVar9[0x210];
          goto joined_r0x00fbf0e4;
        }
        memcpy(pcVar9 + 0x10,pcVar9 + 0x160,0xa1);
        cVar5 = pcVar9[0x210];
        if (pcVar9[0xc0] == '\0') goto LAB_00fbf184;
LAB_00fbf0e8:
        if (cVar5 == '\0') {
          pcVar9[0xc0] = '\0';
          cVar1 = pcVar9[0x110];
          cVar5 = pcVar9[0x260];
          goto joined_r0x00fbf240;
        }
        *(undefined4 *)(pcVar9 + 0x10c) = *(undefined4 *)(pcVar9 + 0x25c);
        *(undefined8 *)(pcVar9 + 0xcc) = *(undefined8 *)(pcVar9 + 0x21c);
        *(undefined8 *)(pcVar9 + 0xc4) = *(undefined8 *)(pcVar9 + 0x214);
        *(undefined8 *)(pcVar9 + 0xec) = *(undefined8 *)(pcVar9 + 0x23c);
        *(undefined8 *)(pcVar9 + 0xe4) = *(undefined8 *)(pcVar9 + 0x234);
        *(undefined8 *)(pcVar9 + 0xdc) = *(undefined8 *)(pcVar9 + 0x22c);
        *(undefined8 *)(pcVar9 + 0xd4) = *(undefined8 *)(pcVar9 + 0x224);
        *(undefined8 *)(pcVar9 + 0x104) = *(undefined8 *)(pcVar9 + 0x254);
        *(undefined8 *)(pcVar9 + 0xfc) = *(undefined8 *)(pcVar9 + 0x24c);
        *(undefined8 *)(pcVar9 + 0xf4) = *(undefined8 *)(pcVar9 + 0x244);
        cVar5 = pcVar9[0x260];
        if (pcVar9[0x110] == '\0') goto LAB_00fbf244;
LAB_00fbf210:
        if (cVar5 == '\0') {
          pcVar9[0x110] = '\0';
          cVar1 = pcVar9[0x120];
          cVar5 = pcVar9[0x270];
          goto joined_r0x00fbf2a8;
        }
        *(undefined2 *)(pcVar9 + 0x118) = *(undefined2 *)(pcVar9 + 0x268);
        *(undefined4 *)(pcVar9 + 0x114) = *(undefined4 *)(pcVar9 + 0x264);
        cVar5 = pcVar9[0x270];
        if (pcVar9[0x120] != '\0') goto LAB_00fbf268;
LAB_00fbf2ac:
        if (cVar5 != '\0') {
          pcVar9[0x120] = '\x01';
          *(undefined8 *)(pcVar9 + 0x140) = *(undefined8 *)(pcVar9 + 0x290);
          *(undefined8 *)(pcVar9 + 0x148) = *(undefined8 *)(pcVar9 + 0x298);
          *(undefined8 *)(pcVar9 + 0x128) = *(undefined8 *)(pcVar9 + 0x278);
          *(undefined8 *)(pcVar9 + 0x130) = *(undefined8 *)(pcVar9 + 0x280);
          *(undefined8 *)(pcVar9 + 0x138) = *(undefined8 *)(pcVar9 + 0x288);
        }
joined_r0x00fbf294:
        pcVar9 = pcVar7 + 0x150;
        if (pcVar6 + lVar8 * -0x10 + -0x150 == pcVar7 + 0x150) goto LAB_00fbf2f4;
      }
      if (pcVar9[0x150] != '\0') {
        memcpy(pcVar9 + 0x10,pcVar9 + 0x160,0xb0);
        *pcVar9 = '\x01';
      }
      cVar1 = pcVar9[0xc0];
      cVar5 = pcVar9[0x210];
joined_r0x00fbf0e4:
      if (cVar1 != '\0') goto LAB_00fbf0e8;
LAB_00fbf184:
      if (cVar5 != '\0') {
        *(undefined4 *)(pcVar9 + 0x10c) = *(undefined4 *)(pcVar9 + 0x25c);
        *(undefined8 *)(pcVar9 + 0xcc) = *(undefined8 *)(pcVar9 + 0x21c);
        *(undefined8 *)(pcVar9 + 0xc4) = *(undefined8 *)(pcVar9 + 0x214);
        *(undefined8 *)(pcVar9 + 0xec) = *(undefined8 *)(pcVar9 + 0x23c);
        *(undefined8 *)(pcVar9 + 0xe4) = *(undefined8 *)(pcVar9 + 0x234);
        *(undefined8 *)(pcVar9 + 0xdc) = *(undefined8 *)(pcVar9 + 0x22c);
        *(undefined8 *)(pcVar9 + 0xd4) = *(undefined8 *)(pcVar9 + 0x224);
        *(undefined8 *)(pcVar9 + 0x104) = *(undefined8 *)(pcVar9 + 0x254);
        *(undefined8 *)(pcVar9 + 0xfc) = *(undefined8 *)(pcVar9 + 0x24c);
        *(undefined8 *)(pcVar9 + 0xf4) = *(undefined8 *)(pcVar9 + 0x244);
        pcVar9[0xc0] = '\x01';
      }
      cVar1 = pcVar9[0x110];
      cVar5 = pcVar9[0x260];
joined_r0x00fbf240:
      if (cVar1 != '\0') goto LAB_00fbf210;
LAB_00fbf244:
      if (cVar5 != '\0') {
        *(undefined8 *)(pcVar9 + 0x114) = *(undefined8 *)(pcVar9 + 0x264);
        pcVar9[0x110] = '\x01';
      }
      cVar1 = pcVar9[0x120];
      cVar5 = pcVar9[0x270];
joined_r0x00fbf2a8:
      if (cVar1 == '\0') goto LAB_00fbf2ac;
LAB_00fbf268:
      if (cVar5 != '\0') {
        *(undefined8 *)(pcVar9 + 0x140) = *(undefined8 *)(pcVar9 + 0x290);
        *(undefined8 *)(pcVar9 + 0x148) = *(undefined8 *)(pcVar9 + 0x298);
        *(undefined8 *)(pcVar9 + 0x128) = *(undefined8 *)(pcVar9 + 0x278);
        *(undefined8 *)(pcVar9 + 0x130) = *(undefined8 *)(pcVar9 + 0x280);
        *(undefined8 *)(pcVar9 + 0x138) = *(undefined8 *)(pcVar9 + 0x288);
        goto joined_r0x00fbf294;
      }
      pcVar9[0x120] = '\0';
      pcVar9 = pcVar7 + 0x150;
    } while (pcVar6 + lVar8 * -0x10 + -0x150 != pcVar7 + 0x150);
LAB_00fbf2f4:
    pcVar9 = pcVar7 + 0x150 + lVar8 * 0x10;
    pcVar6 = *(char **)(param_1 + 0xd0);
    if (*(char **)(param_1 + 0xd0) + lVar8 * -0x10 == pcVar7 + 0x150) goto LAB_00fbf350;
  }
  do {
    if (pcVar6[-0x30] != '\0') {
      pcVar6[-0x30] = '\0';
    }
    if (pcVar6[-0x40] != '\0') {
      pcVar6[-0x40] = '\0';
    }
    pcVar7 = pcVar6 + -0x150;
    if (pcVar6[-0x90] != '\0') {
      pcVar6[-0x90] = '\0';
    }
    if (*pcVar7 != '\0') {
      *pcVar7 = '\0';
    }
    pcVar6 = pcVar7;
  } while (pcVar9 != pcVar7);
LAB_00fbf350:
  *(char **)(param_1 + 0xd0) = pcVar9;
  return;
}


