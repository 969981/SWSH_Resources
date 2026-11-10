/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0088a320; name: FUN_0088a320
 */


void FUN_0088a320(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  long lVar5;
  
  sVar3 = FUN_008787f0(*param_2);
  sVar4 = FUN_008787f0(param_2[1]);
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 < 0xb9) {
    if (iVar2 < 0x7a) {
      if (iVar2 == 0) {
        lVar5 = 9;
        if ((sVar3 != 0) && (sVar4 != 0)) {
          return;
        }
      }
      else if ((iVar2 != 0x71) || ((lVar5 = 7, sVar3 != 0x13f && (sVar4 != 0x13f)))) {
        return;
      }
    }
    else if (iVar2 == 0x7a) {
      lVar5 = 2;
      if ((sVar3 != 0x13a) && (sVar4 != 0x13a)) {
        return;
      }
    }
    else if (iVar2 == 0x8f) {
      lVar5 = 4;
      if ((sVar3 != 0x13c) && (sVar4 != 0x13c)) {
        return;
      }
    }
    else {
      if (iVar2 != 0xb7) {
        return;
      }
      lVar5 = 0;
      if ((sVar3 != 0xfe) && (sVar4 != 0xfe)) {
        return;
      }
    }
  }
  else if (iVar2 < 0xe2) {
    if (iVar2 == 0xb9) {
      lVar5 = 3;
      if ((sVar3 != 0x13b) && (sVar4 != 0x13b)) {
        return;
      }
    }
    else {
      if (iVar2 != 0xca) {
        return;
      }
      lVar5 = 1;
      if ((sVar3 != 0xff) && (sVar4 != 0xff)) {
        return;
      }
    }
  }
  else if (iVar2 == 0xe2) {
    lVar5 = 5;
    if ((sVar3 != 0x13d) && (sVar4 != 0x13d)) {
      return;
    }
  }
  else if (iVar2 == 0x13b) {
    lVar5 = 6;
    if ((sVar3 != 0x13e) && (sVar4 != 0x13e)) {
      return;
    }
  }
  else {
    if (iVar2 != 0x166) {
      return;
    }
    lVar5 = 8;
    if ((sVar3 != 0x140) && (sVar4 != 0x140)) {
      return;
    }
  }
  uVar1 = (&DAT_021447a0)[lVar5 * 4];
  *(undefined4 *)(param_1 + 0x28) = (&DAT_0214479c)[lVar5 * 4];
  *(short *)(param_1 + 0x2c) = (short)uVar1;
  return;
}


