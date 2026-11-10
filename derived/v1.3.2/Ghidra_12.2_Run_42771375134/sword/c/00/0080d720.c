/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080d720; name: FUN_0080d720
 */


ulong FUN_0080d720(ulong *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  pbVar2 = (byte *)*param_1;
  if (((int)(byte *)param_1[1] - (int)pbVar2 < 10) && ((byte *)param_1[1] <= pbVar2)) {
    auVar8 = FUN_0080d3e0();
    uVar4 = auVar8._0_4_;
    if ((auVar8._8_8_ & 1) == 0 || auVar8._0_8_ >> 0x1f != 0) {
      uVar4 = 0xffffffff;
    }
    return (ulong)uVar4;
  }
  pbVar6 = pbVar2 + 1;
  bVar3 = *pbVar2;
  uVar4 = (uint)bVar3;
  if ((char)bVar3 < '\0') {
    uVar4 = ((uint)bVar3 + (uint)pbVar2[1] * 0x80) - 0x80;
    if ((char)pbVar2[1] < '\0') {
      uVar4 = (uVar4 + (uint)pbVar2[2] * 0x4000) - 0x4000;
      if ((char)pbVar2[2] < '\0') {
        iVar1 = uVar4 + (uint)pbVar2[3] * 0x200000;
        uVar4 = iVar1 - 0x200000;
        if ((char)pbVar2[3] < '\0') {
          uVar4 = iVar1 + 0xefe00000;
          bVar3 = pbVar2[4];
          uVar5 = (uint)bVar3;
          if ((char)bVar3 < '\0') {
            uVar5 = ((uint)bVar3 + (uint)pbVar2[5] * 0x80) - 0x80;
            if ((char)pbVar2[5] < '\0') {
              uVar5 = (uVar5 + (uint)pbVar2[6] * 0x4000) - 0x4000;
              if ((char)pbVar2[6] < '\0') {
                iVar1 = uVar5 + (uint)pbVar2[7] * 0x200000;
                uVar5 = iVar1 - 0x200000;
                if ((char)pbVar2[7] < '\0') {
                  bVar3 = pbVar2[8];
                  uVar7 = (ulong)bVar3;
                  uVar5 = iVar1 + 0xefe00000;
                  if ((char)bVar3 < '\0') {
                    if ((char)pbVar2[9] < '\0') {
                      return 0xffffffff;
                    }
                    pbVar6 = pbVar2 + 10;
                    uVar7 = (ulong)(((uint)bVar3 + (uint)pbVar2[9] * 0x80) - 0x80);
                  }
                  else {
                    pbVar6 = pbVar2 + 9;
                  }
                }
                else {
                  uVar7 = 0;
                  pbVar6 = pbVar2 + 8;
                }
              }
              else {
                uVar7 = 0;
                pbVar6 = pbVar2 + 7;
              }
            }
            else {
              uVar7 = 0;
              pbVar6 = pbVar2 + 6;
            }
          }
          else {
            uVar7 = 0;
            pbVar6 = pbVar2 + 5;
          }
        }
        else {
          uVar5 = 0;
          uVar7 = 0;
          pbVar6 = pbVar2 + 4;
        }
      }
      else {
        uVar5 = 0;
        uVar7 = 0;
        pbVar6 = pbVar2 + 3;
      }
    }
    else {
      uVar5 = 0;
      uVar7 = 0;
      pbVar6 = pbVar2 + 2;
    }
  }
  else {
    uVar5 = 0;
    uVar7 = 0;
  }
  if (((ulong)uVar4 | (ulong)uVar5 << 0x1c | uVar7 << 0x38) >> 0x1f == 0) {
    *param_1 = (ulong)pbVar6;
    return (ulong)uVar4 | (ulong)uVar5 << 0x1c & 0xffffffff;
  }
  return 0xffffffff;
}


