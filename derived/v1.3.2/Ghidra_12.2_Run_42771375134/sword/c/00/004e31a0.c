/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e31a0; name: FUN_004e31a0
 */


undefined8 FUN_004e31a0(long param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  size_t __n;
  char *pcVar8;
  uint uVar10;
  uint uVar9;
  byte *pbVar11;
  int iVar12;
  
  if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) {
    return 0;
  }
  pcVar8 = *(char **)(param_1 + 0x38);
  if (((*(byte *)(param_1 + 0x6c) >> 2 & 1) == 0) && (pcVar8 == (char *)0x0)) {
    return 0;
  }
  if (pcVar8 != (char *)0x0) {
    pbVar6 = (byte *)(param_1 + 0x44);
    bVar4 = *pbVar6;
    bVar5 = ((bVar4 ^ 0xff) & 0xf0) != 0 & bVar4 >> 7;
    uVar9 = (uint)bVar4;
    uVar10 = (uint)bVar4;
    if (bVar5 == 0) {
      if (uVar10 == 0xf0) {
LAB_004e326c:
        pbVar7 = (byte *)(param_1 + 0x45);
        iVar12 = (int)param_1 + 0x46;
        uVar10 = *pbVar7 & 0x7f;
        if (-1 < (char)*pbVar7) goto LAB_004e330c;
LAB_004e3298:
        uVar1 = pbVar7[1] & 0x7f;
        uVar2 = uVar10 << 7;
        uVar10 = uVar1 | uVar2;
        iVar12 = (int)pbVar7;
        if (-1 < (char)pbVar7[1]) {
          iVar12 = iVar12 + 2;
          goto LAB_004e330c;
        }
        uVar10 = pbVar7[2] & 0x7f;
        if ((char)pbVar7[2] < '\0') {
          if (((char)pbVar7[3] < '\0') ||
             (uVar10 = pbVar7[3] & 0x7f | (uVar10 | (uVar1 | uVar2) << 7) << 7, uVar10 == 0xffffffff
             )) goto LAB_004e340c;
          iVar12 = iVar12 + 4;
          goto LAB_004e330c;
        }
        uVar10 = (uVar10 | (uVar1 | uVar2) << 7) + ((iVar12 + 3) - (int)pbVar6);
      }
      else {
        if (uVar10 != 0xff) {
          if (uVar9 != 0xf7) goto LAB_004e340c;
          goto LAB_004e326c;
        }
        pbVar7 = (byte *)(param_1 + 0x46);
        iVar12 = (int)param_1 + 0x47;
        uVar10 = *pbVar7 & 0x7f;
        if ((char)*pbVar7 < '\0') goto LAB_004e3298;
LAB_004e330c:
        uVar10 = uVar10 + (iVar12 - (int)pbVar6);
      }
      if (uVar10 != 0xffffffff) goto LAB_004e331c;
LAB_004e340c:
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      uVar1 = uVar9 & 0xf0;
      if (0xef < uVar10) {
        uVar1 = uVar10;
      }
      uVar10 = (uVar1 + 0x50) * 0x10 & 0xff | uVar1 + 0x50 >> 4 & 0xf;
      if (uVar10 - 1 < 2) {
LAB_004e324c:
        iVar12 = 2;
      }
      else {
        if (uVar10 == 5) goto LAB_004e340c;
        if (uVar10 == 0) {
          if (*(char *)(param_1 + 0x45) < '\0') goto LAB_004e340c;
          if ((uVar1 | 0x10) == 0xd0) goto LAB_004e324c;
        }
        iVar12 = 3;
      }
      uVar10 = iVar12 + ((int)*pcVar8 >> 7 ^ 0xffffffffU);
LAB_004e331c:
      pbVar7 = (byte *)(pcVar8 + uVar10);
      pbVar11 = *(byte **)(param_1 + 0x30);
      pbVar3 = (byte *)0x0;
      if (pbVar7 <= pbVar11) {
        pbVar3 = pbVar7;
      }
      *(byte **)(param_1 + 0x38) = pbVar3;
      if (pbVar7 <= pbVar11) {
        if (bVar5 == 0) {
          uVar9 = 0;
        }
        *(char *)(param_1 + 0x4a) = (char)uVar9;
        if (pbVar3 != pbVar11) {
          pbVar7 = pbVar3 + 1;
          *(undefined4 *)(param_1 + 0x40) = 0;
          *(byte **)(param_1 + 0x38) = pbVar7;
          bVar4 = *pbVar3;
          uVar10 = bVar4 & 0x7f;
          *(uint *)(param_1 + 0x40) = uVar10;
          if ((char)bVar4 < '\0') {
            uVar10 = uVar10 << 7;
            pbVar7 = pbVar3 + 2;
            *(uint *)(param_1 + 0x40) = uVar10;
            *(byte **)(param_1 + 0x38) = pbVar7;
            bVar4 = pbVar3[1];
            uVar10 = uVar10 | bVar4 & 0x7f;
            *(uint *)(param_1 + 0x40) = uVar10;
            if ((char)bVar4 < '\0') {
              uVar10 = uVar10 << 7;
              pbVar7 = pbVar3 + 3;
              *(uint *)(param_1 + 0x40) = uVar10;
              *(byte **)(param_1 + 0x38) = pbVar7;
              bVar4 = pbVar3[2];
              uVar10 = uVar10 | bVar4 & 0x7f;
              *(uint *)(param_1 + 0x40) = uVar10;
              if ((char)bVar4 < '\0') {
                uVar10 = uVar10 << 7;
                pbVar7 = pbVar3 + 4;
                *(uint *)(param_1 + 0x40) = uVar10;
                *(byte **)(param_1 + 0x38) = pbVar7;
                uVar10 = uVar10 | pbVar3[3] & 0x7f;
                if ((pbVar3[3] & 0x80) != 0) {
                  uVar10 = 0xffffffff;
                }
                *(uint *)(param_1 + 0x40) = uVar10;
                if (uVar10 == 0xffffffff) goto LAB_004e3410;
              }
            }
          }
          if (pbVar7 < pbVar11) {
            __n = 6;
            *(undefined2 *)(param_1 + 0x48) = 0;
            pbVar6[0] = 0;
            pbVar6[1] = 0;
            pbVar6[2] = 0;
            pbVar6[3] = 0;
            if ((uVar9 != 0) && (-1 < (char)*pbVar7)) {
              pbVar6 = (byte *)(param_1 + 0x45);
              __n = 5;
              *(char *)(param_1 + 0x44) = (char)uVar9;
            }
            memcpy(pbVar6,pbVar7,__n);
            if (*(long *)(param_1 + 0x38) != 0) goto LAB_004e34f4;
            goto LAB_004e3428;
          }
        }
      }
    }
LAB_004e3410:
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x4a) = 0;
    *(undefined2 *)(param_1 + 0x48) = 0;
    pbVar6[0] = 0;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  }
LAB_004e3428:
  if ((*(byte *)(param_1 + 0x6c) >> 2 & 1) != 0) {
    pbVar6 = *(byte **)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x4a) = 0;
    *(byte **)(param_1 + 0x38) = pbVar6;
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    if (pbVar6 != (byte *)0x0) {
      pbVar7 = pbVar6 + 1;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(byte **)(param_1 + 0x38) = pbVar7;
      bVar4 = *pbVar6;
      uVar9 = bVar4 & 0x7f;
      *(uint *)(param_1 + 0x40) = uVar9;
      if ((char)bVar4 < '\0') {
        uVar9 = uVar9 << 7;
        pbVar7 = pbVar6 + 2;
        *(uint *)(param_1 + 0x40) = uVar9;
        *(byte **)(param_1 + 0x38) = pbVar7;
        bVar4 = pbVar6[1];
        uVar9 = uVar9 | bVar4 & 0x7f;
        *(uint *)(param_1 + 0x40) = uVar9;
        if ((char)bVar4 < '\0') {
          uVar9 = uVar9 << 7;
          pbVar7 = pbVar6 + 3;
          *(uint *)(param_1 + 0x40) = uVar9;
          *(byte **)(param_1 + 0x38) = pbVar7;
          bVar4 = pbVar6[2];
          uVar9 = uVar9 | bVar4 & 0x7f;
          *(uint *)(param_1 + 0x40) = uVar9;
          if ((char)bVar4 < '\0') {
            uVar9 = uVar9 << 7;
            pbVar7 = pbVar6 + 4;
            *(uint *)(param_1 + 0x40) = uVar9;
            *(byte **)(param_1 + 0x38) = pbVar7;
            uVar9 = uVar9 | pbVar6[3] & 0x7f;
            if ((pbVar6[3] & 0x80) != 0) {
              uVar9 = 0xffffffff;
            }
            *(uint *)(param_1 + 0x40) = uVar9;
            if (uVar9 == 0xffffffff) goto LAB_004e34f4;
          }
        }
      }
      if (pbVar7 < *(byte **)(param_1 + 0x30)) {
        *(undefined2 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(pbVar7 + 4);
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)pbVar7;
      }
    }
  }
LAB_004e34f4:
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  return 1;
}


