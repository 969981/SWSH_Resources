/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080e320; name: FUN_0080e320
 */


void FUN_0080e320(ulong param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  bVar1 = (byte)(param_1 >> 0x38);
  uVar3 = (uint)param_1;
  uVar5 = (uint)(param_1 >> 0x1c);
  uVar2 = (uint)(param_1 >> 0x20);
  if (bVar1 == 0) {
    if (uVar5 != 0) {
      if (uVar5 >> 0xe != 0) {
        if (0x1fffff < uVar5) {
          lVar4 = 8;
          goto LAB_0080e370;
        }
        lVar4 = 7;
        goto LAB_0080e37c;
      }
      if (0x7f < uVar5) {
        lVar4 = 6;
        goto LAB_0080e388;
      }
      lVar4 = 5;
      goto LAB_0080e394;
    }
    if (uVar3 >> 0xe != 0) {
      if (0x1fffff < uVar3) {
        lVar4 = 4;
        goto LAB_0080e39c;
      }
      lVar4 = 3;
      goto LAB_0080e3a8;
    }
    if (uVar3 < 0x80) {
      lVar4 = 1;
      goto LAB_0080e3c0;
    }
    lVar4 = 2;
  }
  else {
    if (bVar1 < 0x80) {
      lVar4 = 9;
    }
    else {
      param_2[9] = bVar1 >> 7 | 0x80;
      lVar4 = 10;
    }
    param_2[8] = bVar1 | 0x80;
LAB_0080e370:
    param_2[7] = (byte)(uVar2 >> 0x11) | 0x80;
LAB_0080e37c:
    param_2[6] = (byte)(uVar2 >> 10) | 0x80;
LAB_0080e388:
    param_2[5] = (byte)(uVar2 >> 3) | 0x80;
LAB_0080e394:
    param_2[4] = (byte)(param_1 >> 0x1c) | 0x80;
LAB_0080e39c:
    param_2[3] = (byte)(uVar3 >> 0x15) | 0x80;
LAB_0080e3a8:
    param_2[2] = (byte)(uVar3 >> 0xe) | 0x80;
  }
  param_2[1] = (byte)(uVar3 >> 7) | 0x80;
LAB_0080e3c0:
  *param_2 = (byte)param_1 | 0x80;
  param_2[lVar4 + -1] = param_2[lVar4 + -1] & 0x7f;
  return;
}


