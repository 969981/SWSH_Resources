/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006128e0; name: FUN_006128e0
 */


uint FUN_006128e0(char *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  
  cVar6 = *param_1;
  pcVar5 = param_1;
  if (cVar6 != 'u') goto LAB_00612af0;
  bVar1 = param_1[1];
  if ((bVar1 == 0x6e) && (param_1[2] == 'i')) {
    bVar2 = param_1[3];
    uVar4 = bVar2 - 0x30;
    if (9 < uVar4) {
      uVar4 = 0x10;
      if (bVar2 - 0x41 < 6) {
        uVar4 = bVar2 - 0x37;
      }
      if (0xf < uVar4) goto LAB_00612a20;
    }
    bVar2 = param_1[4];
    uVar8 = bVar2 - 0x30;
    if (uVar8 < 10) {
      iVar7 = uVar8 + uVar4 * 0x10;
      bVar2 = param_1[5];
      uVar4 = bVar2 - 0x30;
      if (uVar4 < 10) goto LAB_00612978;
LAB_006129cc:
      uVar4 = 0x10;
      if (bVar2 - 0x41 < 6) {
        uVar4 = bVar2 - 0x37;
      }
      if (0xf < uVar4) goto LAB_00612a20;
      iVar7 = uVar4 + iVar7 * 0x10;
      uVar8 = (uint)(byte)param_1[6];
      uVar4 = uVar8 - 0x30;
      if (9 < uVar4) goto LAB_0061298c;
LAB_006129fc:
      uVar4 = uVar4 + iVar7 * 0x10;
      cVar3 = param_1[7];
    }
    else {
      uVar8 = 0x10;
      if (bVar2 - 0x41 < 6) {
        uVar8 = bVar2 - 0x37;
      }
      if (0xf < uVar8) goto LAB_00612a20;
      iVar7 = uVar8 + uVar4 * 0x10;
      bVar2 = param_1[5];
      uVar4 = bVar2 - 0x30;
      if (9 < uVar4) goto LAB_006129cc;
LAB_00612978:
      iVar7 = uVar4 + iVar7 * 0x10;
      uVar8 = (uint)(byte)param_1[6];
      uVar4 = (byte)param_1[6] - 0x30;
      if (uVar4 < 10) goto LAB_006129fc;
LAB_0061298c:
      uVar4 = 0x10;
      if (uVar8 - 0x41 < 6) {
        uVar4 = uVar8 - 0x37;
      }
      if (0xf < uVar4) goto LAB_00612a20;
      uVar4 = uVar4 + iVar7 * 0x10;
      cVar3 = param_1[7];
    }
    if (cVar3 == '\0') {
      return uVar4;
    }
    if (cVar3 == '.') {
      return uVar4 | 0x80000000;
    }
  }
LAB_00612a20:
  uVar4 = bVar1 - 0x30;
  if (9 < uVar4) {
    uVar4 = 0x10;
    if (bVar1 - 0x41 < 6) {
      uVar4 = bVar1 - 0x37;
    }
    if (0xf < uVar4) goto LAB_00612af0;
  }
  bVar1 = param_1[2];
  uVar8 = bVar1 - 0x30;
  if (uVar8 < 10) {
    iVar7 = uVar8 + uVar4 * 0x10;
    bVar1 = param_1[3];
    uVar4 = bVar1 - 0x30;
    if (uVar4 < 10) goto LAB_00612a88;
LAB_00612ad4:
    uVar4 = 0x10;
    if (bVar1 - 0x41 < 6) {
      uVar4 = bVar1 - 0x37;
    }
    if (0xf < uVar4) goto LAB_00612af0;
    iVar7 = uVar4 + iVar7 * 0x10;
    uVar8 = (uint)(byte)param_1[4];
    uVar4 = uVar8 - 0x30;
    if (9 < uVar4) goto LAB_00612a9c;
LAB_00612b18:
    uVar4 = uVar4 + iVar7 * 0x10;
  }
  else {
    uVar8 = 0x10;
    if (bVar1 - 0x41 < 6) {
      uVar8 = bVar1 - 0x37;
    }
    if (0xf < uVar8) goto LAB_00612af0;
    iVar7 = uVar8 + uVar4 * 0x10;
    bVar1 = param_1[3];
    uVar4 = bVar1 - 0x30;
    if (9 < uVar4) goto LAB_00612ad4;
LAB_00612a88:
    iVar7 = uVar4 + iVar7 * 0x10;
    uVar8 = (uint)(byte)param_1[4];
    uVar4 = (byte)param_1[4] - 0x30;
    if (uVar4 < 10) goto LAB_00612b18;
LAB_00612a9c:
    uVar4 = 0x10;
    if (uVar8 - 0x41 < 6) {
      uVar4 = uVar8 - 0x37;
    }
    if (0xf < uVar4) {
LAB_00612af0:
      if (cVar6 != '.') goto LAB_00612bd8;
      goto LAB_00612be0;
    }
    uVar4 = uVar4 + iVar7 * 0x10;
  }
  pbVar9 = (byte *)(param_1 + 5);
  bVar1 = *pbVar9;
  uVar8 = bVar1 - 0x30;
  if (uVar8 < 10) {
    uVar4 = uVar8 + uVar4 * 0x10;
LAB_00612b58:
    pbVar9 = (byte *)(param_1 + 6);
    bVar1 = *pbVar9;
    uVar8 = bVar1 - 0x30;
    if (uVar8 < 10) {
      uVar4 = uVar8 + uVar4 * 0x10;
      pbVar9 = (byte *)(param_1 + 7);
    }
    else {
      uVar8 = 0x10;
      if (bVar1 - 0x41 < 6) {
        uVar8 = bVar1 - 0x37;
      }
      if (uVar8 < 0x10) {
        uVar4 = uVar8 + uVar4 * 0x10;
        bVar1 = param_1[7];
        goto joined_r0x00612b94;
      }
    }
  }
  else {
    uVar8 = 0x10;
    if (bVar1 - 0x41 < 6) {
      uVar8 = bVar1 - 0x37;
    }
    if (uVar8 < 0x10) {
      uVar4 = uVar8 + uVar4 * 0x10;
      goto LAB_00612b58;
    }
  }
  bVar1 = *pbVar9;
joined_r0x00612b94:
  if (bVar1 != 0) {
    if (bVar1 != 0x2e) {
      do {
        if (cVar6 == '.') {
LAB_00612be0:
          if (param_1 < pcVar5) {
            uVar4 = FUN_006135c0();
            return uVar4 | 0x80000000;
          }
        }
        else {
LAB_00612bd8:
          if (cVar6 == '\0') {
            uVar4 = FUN_006135c0();
            return uVar4;
          }
        }
        pcVar5 = pcVar5 + 1;
        cVar6 = *pcVar5;
      } while( true );
    }
    uVar4 = uVar4 | 0x80000000;
  }
  return uVar4;
}


