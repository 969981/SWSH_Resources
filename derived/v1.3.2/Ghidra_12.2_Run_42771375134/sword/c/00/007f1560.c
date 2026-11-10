/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f1560; name: FUN_007f1560
 */


void FUN_007f1560(byte *param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  std::string::reserve((ulong)param_1);
  bVar5 = (*param_2 & 1) == 0;
  uVar6 = (ulong)(*param_2 >> 1);
  if (!bVar5) {
    uVar6 = *(ulong *)(param_2 + 8);
  }
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      pbVar1 = param_2 + 1;
      if (!bVar5) {
        pbVar1 = *(byte **)(param_2 + 0x10);
      }
      if (pbVar1[uVar6] != 0x5f) {
        std::string::push_back((char)param_1);
      }
      bVar5 = (*param_2 & 1) == 0;
      uVar6 = uVar6 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
      if (!bVar5) {
        uVar2 = *(ulong *)(param_2 + 8);
      }
    } while (uVar6 < uVar2);
  }
  if ((param_3 & 1) != 0) {
    bVar3 = *param_1;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    if ((bVar3 & 1) == 0) {
      bVar4 = param_1[1];
    }
    else {
      bVar4 = **(byte **)(param_1 + 0x10);
    }
    if (0x40 < bVar4) {
      if ((bVar3 & 1) == 0) {
        bVar4 = param_1[1];
      }
      else {
        bVar4 = **(byte **)(param_1 + 0x10);
      }
      if (bVar4 < 0x5b) {
        if ((bVar3 & 1) == 0) {
          param_1 = param_1 + 1;
        }
        else {
          param_1 = *(byte **)(param_1 + 0x10);
        }
        *param_1 = *param_1 + 0x20;
      }
    }
  }
  return;
}


