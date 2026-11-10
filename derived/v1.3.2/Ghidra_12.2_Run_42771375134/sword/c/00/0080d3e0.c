/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080d3e0; name: FUN_0080d3e0
 */


undefined1  [16] FUN_0080d3e0(ulong *param_1)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  pbVar5 = (byte *)*param_1;
  pbVar7 = (byte *)param_1[1];
  if (((int)pbVar7 - (int)pbVar5 < 10) && (pbVar7 <= pbVar5)) {
    lVar10 = 0;
    uVar8 = 0;
    uVar9 = 1;
    do {
      if (lVar10 == 10) {
LAB_0080d4a8:
        uVar9 = 0;
        break;
      }
      while (pbVar5 == pbVar7) {
        uVar3 = FUN_0080cd70(param_1);
        if ((uVar3 & 1) == 0) goto LAB_0080d4a8;
        pbVar7 = (byte *)param_1[1];
        pbVar5 = (byte *)*param_1;
      }
      bVar2 = *pbVar5;
      uVar3 = lVar10 * 7;
      lVar10 = lVar10 + 1;
      uVar8 = ((ulong)bVar2 & 0x7f) << (uVar3 & 0x3f) | uVar8;
      *param_1 = (ulong)(pbVar5 + 1);
      pbVar5 = pbVar5 + 1;
    } while ((char)bVar2 < '\0');
  }
  else {
    pbVar7 = pbVar5 + 1;
    bVar2 = *pbVar5;
    uVar4 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      uVar4 = ((uint)bVar2 + (uint)pbVar5[1] * 0x80) - 0x80;
      if ((char)pbVar5[1] < '\0') {
        uVar4 = (uVar4 + (uint)pbVar5[2] * 0x4000) - 0x4000;
        if ((char)pbVar5[2] < '\0') {
          iVar1 = uVar4 + (uint)pbVar5[3] * 0x200000;
          uVar4 = iVar1 - 0x200000;
          if ((char)pbVar5[3] < '\0') {
            uVar4 = iVar1 + 0xefe00000;
            bVar2 = pbVar5[4];
            uVar6 = (uint)bVar2;
            if ((char)bVar2 < '\0') {
              uVar6 = ((uint)bVar2 + (uint)pbVar5[5] * 0x80) - 0x80;
              if ((char)pbVar5[5] < '\0') {
                uVar6 = (uVar6 + (uint)pbVar5[6] * 0x4000) - 0x4000;
                if ((char)pbVar5[6] < '\0') {
                  iVar1 = uVar6 + (uint)pbVar5[7] * 0x200000;
                  uVar6 = iVar1 - 0x200000;
                  if ((char)pbVar5[7] < '\0') {
                    bVar2 = pbVar5[8];
                    uVar8 = (ulong)bVar2;
                    uVar6 = iVar1 + 0xefe00000;
                    if ((char)bVar2 < '\0') {
                      if ((char)pbVar5[9] < '\0') {
                        uVar8 = 0;
                        uVar9 = 0;
                        goto LAB_0080d5a4;
                      }
                      pbVar7 = pbVar5 + 10;
                      uVar8 = (ulong)(((uint)bVar2 + (uint)pbVar5[9] * 0x80) - 0x80);
                    }
                    else {
                      pbVar7 = pbVar5 + 9;
                    }
                  }
                  else {
                    uVar8 = 0;
                    pbVar7 = pbVar5 + 8;
                  }
                }
                else {
                  uVar8 = 0;
                  pbVar7 = pbVar5 + 7;
                }
              }
              else {
                uVar8 = 0;
                pbVar7 = pbVar5 + 6;
              }
            }
            else {
              uVar8 = 0;
              pbVar7 = pbVar5 + 5;
            }
          }
          else {
            uVar6 = 0;
            uVar8 = 0;
            pbVar7 = pbVar5 + 4;
          }
        }
        else {
          uVar6 = 0;
          uVar8 = 0;
          pbVar7 = pbVar5 + 3;
        }
      }
      else {
        uVar6 = 0;
        uVar8 = 0;
        pbVar7 = pbVar5 + 2;
      }
    }
    else {
      uVar6 = 0;
      uVar8 = 0;
    }
    uVar8 = (ulong)uVar4 | (ulong)uVar6 << 0x1c | uVar8 << 0x38;
    *param_1 = (ulong)pbVar7;
    uVar9 = 1;
  }
LAB_0080d5a4:
  auVar11._8_8_ = uVar9;
  auVar11._0_8_ = uVar8;
  return auVar11;
}


