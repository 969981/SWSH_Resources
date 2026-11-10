/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a77b0; name: FUN_012a77b0
 */


void FUN_012a77b0(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long local_68;
  
  pcVar5 = (char *)**(undefined8 **)(param_1 + 0x60);
  pcVar6 = (char *)(*(undefined8 **)(param_1 + 0x60))[1];
  local_68 = param_2;
  if (pcVar5 != pcVar6) {
    FUN_011f5730(pcVar5);
    lVar2 = FUN_0121b000();
    if (lVar2 != param_2) {
      do {
        pcVar5 = pcVar5 + 0x150;
        if (pcVar6 == pcVar5) {
          puVar9 = *(undefined8 **)(param_1 + 0x60);
          pcVar4 = (char *)puVar9[1];
          if (pcVar4 != pcVar6) goto LAB_012a7838;
          goto LAB_012a7b48;
        }
        FUN_011f5730(pcVar5);
        lVar2 = FUN_0121b000();
      } while (lVar2 != param_2);
    }
  }
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  pcVar4 = (char *)puVar9[1];
  pcVar6 = pcVar5;
  if (pcVar4 == pcVar5) goto LAB_012a7b48;
LAB_012a7838:
  if (pcVar6 + 0x150 == pcVar4) {
LAB_012a7b04:
    do {
      if (pcVar4[-0x30] != '\0') {
        pcVar4[-0x30] = '\0';
      }
      if (pcVar4[-0x40] != '\0') {
        pcVar4[-0x40] = '\0';
      }
      pcVar5 = pcVar4 + -0x150;
      if (pcVar4[-0x90] != '\0') {
        pcVar4[-0x90] = '\0';
      }
      if (*pcVar5 != '\0') {
        *pcVar5 = '\0';
      }
      pcVar4 = pcVar5;
    } while (pcVar6 != pcVar5);
  }
  else {
    lVar2 = (long)pcVar6 - (long)*puVar9 >> 4;
    pcVar5 = (char *)*puVar9;
    do {
      while( true ) {
        pcVar10 = pcVar5;
        pcVar5 = pcVar10 + lVar2 * 0x10;
        if (*pcVar5 == '\0') break;
        if (pcVar5[0x150] == '\0') {
          *pcVar5 = '\0';
          cVar1 = pcVar5[0xc0];
          cVar3 = pcVar5[0x210];
          goto joined_r0x012a78d8;
        }
        memcpy(pcVar5 + 0x10,pcVar5 + 0x160,0xa1);
        cVar3 = pcVar5[0x210];
        if (pcVar5[0xc0] == '\0') goto LAB_012a7978;
LAB_012a78dc:
        if (cVar3 == '\0') {
          pcVar5[0xc0] = '\0';
          cVar1 = pcVar5[0x110];
          cVar3 = pcVar5[0x260];
          goto joined_r0x012a7a34;
        }
        *(undefined4 *)(pcVar5 + 0x10c) = *(undefined4 *)(pcVar5 + 0x25c);
        *(undefined8 *)(pcVar5 + 0xcc) = *(undefined8 *)(pcVar5 + 0x21c);
        *(undefined8 *)(pcVar5 + 0xc4) = *(undefined8 *)(pcVar5 + 0x214);
        *(undefined8 *)(pcVar5 + 0xec) = *(undefined8 *)(pcVar5 + 0x23c);
        *(undefined8 *)(pcVar5 + 0xe4) = *(undefined8 *)(pcVar5 + 0x234);
        *(undefined8 *)(pcVar5 + 0xdc) = *(undefined8 *)(pcVar5 + 0x22c);
        *(undefined8 *)(pcVar5 + 0xd4) = *(undefined8 *)(pcVar5 + 0x224);
        *(undefined8 *)(pcVar5 + 0x104) = *(undefined8 *)(pcVar5 + 0x254);
        *(undefined8 *)(pcVar5 + 0xfc) = *(undefined8 *)(pcVar5 + 0x24c);
        *(undefined8 *)(pcVar5 + 0xf4) = *(undefined8 *)(pcVar5 + 0x244);
        cVar3 = pcVar5[0x260];
        if (pcVar5[0x110] == '\0') goto LAB_012a7a38;
LAB_012a7a04:
        if (cVar3 == '\0') {
          pcVar5[0x110] = '\0';
          cVar1 = pcVar5[0x120];
          cVar3 = pcVar5[0x270];
          goto joined_r0x012a7a9c;
        }
        *(undefined2 *)(pcVar5 + 0x118) = *(undefined2 *)(pcVar5 + 0x268);
        *(undefined4 *)(pcVar5 + 0x114) = *(undefined4 *)(pcVar5 + 0x264);
        cVar3 = pcVar5[0x270];
        if (pcVar5[0x120] != '\0') goto LAB_012a7a5c;
LAB_012a7aa0:
        if (cVar3 != '\0') {
          pcVar5[0x120] = '\x01';
          *(undefined8 *)(pcVar5 + 0x140) = *(undefined8 *)(pcVar5 + 0x290);
          *(undefined8 *)(pcVar5 + 0x148) = *(undefined8 *)(pcVar5 + 0x298);
          *(undefined8 *)(pcVar5 + 0x128) = *(undefined8 *)(pcVar5 + 0x278);
          *(undefined8 *)(pcVar5 + 0x130) = *(undefined8 *)(pcVar5 + 0x280);
          *(undefined8 *)(pcVar5 + 0x138) = *(undefined8 *)(pcVar5 + 0x288);
        }
joined_r0x012a7ae4:
        pcVar5 = pcVar10 + 0x150;
        if (pcVar4 + lVar2 * -0x10 + -0x150 == pcVar10 + 0x150) goto LAB_012a7ae8;
      }
      if (pcVar5[0x150] != '\0') {
        memcpy(pcVar5 + 0x10,pcVar5 + 0x160,0xb0);
        *pcVar5 = '\x01';
      }
      cVar1 = pcVar5[0xc0];
      cVar3 = pcVar5[0x210];
joined_r0x012a78d8:
      if (cVar1 != '\0') goto LAB_012a78dc;
LAB_012a7978:
      if (cVar3 != '\0') {
        *(undefined4 *)(pcVar5 + 0x10c) = *(undefined4 *)(pcVar5 + 0x25c);
        *(undefined8 *)(pcVar5 + 0xcc) = *(undefined8 *)(pcVar5 + 0x21c);
        *(undefined8 *)(pcVar5 + 0xc4) = *(undefined8 *)(pcVar5 + 0x214);
        *(undefined8 *)(pcVar5 + 0xec) = *(undefined8 *)(pcVar5 + 0x23c);
        *(undefined8 *)(pcVar5 + 0xe4) = *(undefined8 *)(pcVar5 + 0x234);
        *(undefined8 *)(pcVar5 + 0xdc) = *(undefined8 *)(pcVar5 + 0x22c);
        *(undefined8 *)(pcVar5 + 0xd4) = *(undefined8 *)(pcVar5 + 0x224);
        *(undefined8 *)(pcVar5 + 0x104) = *(undefined8 *)(pcVar5 + 0x254);
        *(undefined8 *)(pcVar5 + 0xfc) = *(undefined8 *)(pcVar5 + 0x24c);
        *(undefined8 *)(pcVar5 + 0xf4) = *(undefined8 *)(pcVar5 + 0x244);
        pcVar5[0xc0] = '\x01';
      }
      cVar1 = pcVar5[0x110];
      cVar3 = pcVar5[0x260];
joined_r0x012a7a34:
      if (cVar1 != '\0') goto LAB_012a7a04;
LAB_012a7a38:
      if (cVar3 != '\0') {
        *(undefined8 *)(pcVar5 + 0x114) = *(undefined8 *)(pcVar5 + 0x264);
        pcVar5[0x110] = '\x01';
      }
      cVar1 = pcVar5[0x120];
      cVar3 = pcVar5[0x270];
joined_r0x012a7a9c:
      if (cVar1 == '\0') goto LAB_012a7aa0;
LAB_012a7a5c:
      if (cVar3 == '\0') {
        pcVar5[0x120] = '\0';
        goto joined_r0x012a7ae4;
      }
      *(undefined8 *)(pcVar5 + 0x140) = *(undefined8 *)(pcVar5 + 0x290);
      *(undefined8 *)(pcVar5 + 0x148) = *(undefined8 *)(pcVar5 + 0x298);
      *(undefined8 *)(pcVar5 + 0x128) = *(undefined8 *)(pcVar5 + 0x278);
      *(undefined8 *)(pcVar5 + 0x130) = *(undefined8 *)(pcVar5 + 0x280);
      *(undefined8 *)(pcVar5 + 0x138) = *(undefined8 *)(pcVar5 + 0x288);
      pcVar5 = pcVar10 + 0x150;
    } while (pcVar4 + lVar2 * -0x10 + -0x150 != pcVar10 + 0x150);
LAB_012a7ae8:
    pcVar6 = pcVar10 + 0x150 + lVar2 * 0x10;
    pcVar4 = (char *)puVar9[1];
    if ((char *)puVar9[1] + lVar2 * -0x10 != pcVar10 + 0x150) goto LAB_012a7b04;
  }
  puVar9[1] = pcVar6;
LAB_012a7b48:
  plVar7 = *(long **)(param_1 + 0xd0);
  if ((ulong)((long)plVar7 - *(long *)(param_1 + 200) >> 3) < *(ulong *)(param_1 + 0x58)) {
    if (*(long **)(param_1 + 0xd8) == plVar7) {
      FUN_009ba660((long *)(param_1 + 200),&local_68);
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0xe0);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *plVar7 = local_68;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + 8;
    }
  }
  return;
}


