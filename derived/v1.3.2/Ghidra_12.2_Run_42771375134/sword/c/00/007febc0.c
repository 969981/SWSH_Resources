/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007febc0; name: FUN_007febc0
 */


void FUN_007febc0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if ((*param_1 & 1) == 0) {
    bVar1 = *param_1 >> 1;
    uVar5 = (ulong)bVar1;
    if (bVar1 != 0) {
LAB_007fec08:
      lVar4 = 0;
      do {
        pbVar2 = (byte *)std::string::at((ulong)param_1);
        if ((4 < *pbVar2 - 9) && (*pbVar2 != 0x20)) break;
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)uVar5);
      iVar3 = (int)lVar4;
      if (iVar3 == (int)uVar5) goto LAB_007fec4c;
      goto LAB_007fec5c;
    }
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8);
    if (0 < (int)uVar5) goto LAB_007fec08;
  }
  iVar3 = 0;
  if ((int)uVar5 == 0) {
LAB_007fec4c:
    if ((*param_1 & 1) == 0) {
      param_1[0] = 0;
      param_1[1] = 0;
      return;
    }
    **(undefined1 **)(param_1 + 0x10) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    return;
  }
LAB_007fec5c:
  if (iVar3 != 0) {
    std::string::erase((ulong)param_1,0);
    uVar5 = (ulong)(uint)((int)uVar5 - iVar3);
  }
  if (0 < (int)uVar5) {
    lVar6 = 0;
    lVar4 = uVar5 << 0x20;
    do {
      pbVar2 = (byte *)std::string::at((ulong)param_1);
      if ((4 < *pbVar2 - 9) && (*pbVar2 != 0x20)) {
        if ((int)lVar6 == 0) {
          return;
        }
        std::string::erase((ulong)param_1,lVar4 >> 0x20);
        return;
      }
      lVar6 = lVar6 + -1;
      lVar4 = lVar4 + -0x100000000;
    } while (0 < (int)uVar5 + lVar6);
  }
  return;
}


