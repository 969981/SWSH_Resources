/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fbb3f0; name: FUN_00fbb3f0
 */


undefined8 FUN_00fbb3f0(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  char cVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  
  pcVar9 = *(char **)(param_1 + 200);
  if (*(char **)(param_1 + 0xd0) != pcVar9) {
    do {
      uVar2 = FUN_011f5730(pcVar9);
      uVar3 = FUN_011f5730(param_2);
      uVar4 = FUN_0121aef0(uVar2,uVar3);
      if ((uVar4 & 1) == 0) {
        pcVar5 = (char *)FUN_011f5750(pcVar9);
        if (*pcVar5 != '\0') {
          pcVar5 = (char *)FUN_011f5750(pcVar9);
          pcVar6 = (char *)FUN_011f5750(param_2);
          if (*pcVar5 == '\0') {
            if (*pcVar6 == '\0') {
              return 1;
            }
          }
          else if ((*pcVar6 != '\0') &&
                  (uVar4 = FUN_01223930(pcVar5 + 0x10,pcVar6 + 0x10), (uVar4 & 1) != 0)) {
            return 1;
          }
        }
        pcVar6 = *(char **)(param_1 + 0xd0);
        pcVar5 = pcVar9 + 0x150;
        if (pcVar9 + 0x150 == pcVar6) goto LAB_00fbb774;
        lVar8 = (long)pcVar9 - (long)*(char **)(param_1 + 200) >> 4;
        pcVar9 = *(char **)(param_1 + 200);
        goto LAB_00fbb4f4;
      }
      pcVar9 = pcVar9 + 0x150;
    } while (pcVar9 != *(char **)(param_1 + 0xd0));
  }
  return 0;
LAB_00fbb4f4:
  pcVar10 = pcVar9;
  pcVar9 = pcVar10 + lVar8 * 0x10;
  if (*pcVar9 == '\0') {
    if (pcVar9[0x150] != '\0') {
      memcpy(pcVar9 + 0x10,pcVar9 + 0x160,0xb0);
      *pcVar9 = '\x01';
    }
    cVar1 = pcVar9[0xc0];
    cVar7 = pcVar9[0x210];
joined_r0x00fbb718:
    if (cVar1 != '\0') goto LAB_00fbb62c;
LAB_00fbb524:
    if (cVar7 != '\0') {
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
    cVar7 = pcVar9[0x260];
joined_r0x00fbb6b0:
    if (cVar1 != '\0') goto LAB_00fbb5b0;
LAB_00fbb6b4:
    if (cVar7 != '\0') {
      *(undefined8 *)(pcVar9 + 0x114) = *(undefined8 *)(pcVar9 + 0x264);
      pcVar9[0x110] = '\x01';
    }
    cVar1 = pcVar9[0x120];
    cVar7 = pcVar9[0x270];
joined_r0x00fbb6d4:
    if (cVar1 == '\0') goto LAB_00fbb5d0;
LAB_00fbb6d8:
    if (cVar7 == '\0') {
      pcVar9[0x120] = '\0';
    }
    else {
      *(undefined8 *)(pcVar9 + 0x140) = *(undefined8 *)(pcVar9 + 0x290);
      *(undefined8 *)(pcVar9 + 0x148) = *(undefined8 *)(pcVar9 + 0x298);
      *(undefined8 *)(pcVar9 + 0x128) = *(undefined8 *)(pcVar9 + 0x278);
      *(undefined8 *)(pcVar9 + 0x130) = *(undefined8 *)(pcVar9 + 0x280);
      *(undefined8 *)(pcVar9 + 0x138) = *(undefined8 *)(pcVar9 + 0x288);
    }
  }
  else {
    if (pcVar9[0x150] == '\0') {
      *pcVar9 = '\0';
      cVar1 = pcVar9[0xc0];
      cVar7 = pcVar9[0x210];
      goto joined_r0x00fbb718;
    }
    memcpy(pcVar9 + 0x10,pcVar9 + 0x160,0xa1);
    cVar7 = pcVar9[0x210];
    if (pcVar9[0xc0] == '\0') goto LAB_00fbb524;
LAB_00fbb62c:
    if (cVar7 != '\0') {
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
      cVar1 = pcVar9[0x110];
      cVar7 = pcVar9[0x260];
      goto joined_r0x00fbb6b0;
    }
    pcVar9[0xc0] = '\0';
    cVar7 = pcVar9[0x260];
    if (pcVar9[0x110] == '\0') goto LAB_00fbb6b4;
LAB_00fbb5b0:
    if (cVar7 == '\0') {
      pcVar9[0x110] = '\0';
      cVar1 = pcVar9[0x120];
      cVar7 = pcVar9[0x270];
      goto joined_r0x00fbb6d4;
    }
    *(undefined2 *)(pcVar9 + 0x118) = *(undefined2 *)(pcVar9 + 0x268);
    *(undefined4 *)(pcVar9 + 0x114) = *(undefined4 *)(pcVar9 + 0x264);
    cVar7 = pcVar9[0x270];
    if (pcVar9[0x120] != '\0') goto LAB_00fbb6d8;
LAB_00fbb5d0:
    if (cVar7 != '\0') {
      pcVar9[0x120] = '\x01';
      *(undefined8 *)(pcVar9 + 0x140) = *(undefined8 *)(pcVar9 + 0x290);
      *(undefined8 *)(pcVar9 + 0x148) = *(undefined8 *)(pcVar9 + 0x298);
      *(undefined8 *)(pcVar9 + 0x128) = *(undefined8 *)(pcVar9 + 0x278);
      *(undefined8 *)(pcVar9 + 0x130) = *(undefined8 *)(pcVar9 + 0x280);
      *(undefined8 *)(pcVar9 + 0x138) = *(undefined8 *)(pcVar9 + 0x288);
    }
  }
  pcVar9 = pcVar10 + 0x150;
  if (pcVar6 + lVar8 * -0x10 + -0x150 == pcVar10 + 0x150) {
    pcVar9 = pcVar10 + 0x150 + lVar8 * 0x10;
    pcVar5 = *(char **)(param_1 + 0xd0);
    if (*(char **)(param_1 + 0xd0) + lVar8 * -0x10 != pcVar10 + 0x150) {
LAB_00fbb774:
      do {
        if (pcVar5[-0x30] != '\0') {
          pcVar5[-0x30] = '\0';
        }
        if (pcVar5[-0x40] != '\0') {
          pcVar5[-0x40] = '\0';
        }
        pcVar6 = pcVar5 + -0x150;
        if (pcVar5[-0x90] != '\0') {
          pcVar5[-0x90] = '\0';
        }
        if (*pcVar6 != '\0') {
          *pcVar6 = '\0';
        }
        pcVar5 = pcVar6;
      } while (pcVar9 != pcVar6);
    }
    *(char **)(param_1 + 0xd0) = pcVar9;
    return 0;
  }
  goto LAB_00fbb4f4;
}


