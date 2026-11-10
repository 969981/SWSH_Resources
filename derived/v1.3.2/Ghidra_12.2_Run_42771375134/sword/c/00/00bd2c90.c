/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd2c90; name: FUN_00bd2c90
 */


void FUN_00bd2c90(undefined1 param_1 [16],float param_2,long param_3)

{
  bool bVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong local_98 [3];
  ulong local_78;
  
  local_98[1] = 0xffffffffffffffff;
  local_98[2] = 0xffffffffffffffff;
  local_98[0] = 0xffffffffffffffff;
  uVar3 = FUN_0167b9f0(*(undefined8 *)(param_3 + 0x58),
                       param_3 + (ulong)*(byte *)(param_3 + 0x2dc2) * 0x78 + 0x68);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    local_98[0] = local_98[0] & 0xffffffff00000000;
  }
  local_78 = (ulong)bVar1;
  uVar3 = FUN_0167b9f0(*(undefined8 *)(param_3 + 0x58),
                       param_3 + (ulong)*(byte *)(param_3 + 0x2dc3) * 0x78 + 0x68);
  if ((uVar3 & 1) != 0) {
    uVar3 = local_78 << 2;
    local_78 = (ulong)(bVar1 + 1);
    *(undefined4 *)((ulong)local_98 | uVar3) = 1;
  }
  uVar3 = FUN_0167b9f0(*(undefined8 *)(param_3 + 0x58),
                       param_3 + (ulong)*(byte *)(param_3 + 0x2dc4) * 0x78 + 0x68);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)((long)local_98 + local_78 * 4) = 2;
    local_78 = (ulong)((int)local_78 + 1);
  }
  uVar3 = FUN_0167b9f0(*(undefined8 *)(param_3 + 0x58),
                       param_3 + (ulong)*(byte *)(param_3 + 0x2dc5) * 0x78 + 0x68);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)((long)local_98 + local_78 * 4) = 3;
    local_78 = (ulong)((int)local_78 + 1);
  }
  uVar3 = FUN_0167b9f0(*(undefined8 *)(param_3 + 0x58),
                       param_3 + (ulong)*(byte *)(param_3 + 0x2dc6) * 0x78 + 0x68);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)((long)local_98 + local_78 * 4) = 4;
    local_78 = (ulong)((int)local_78 + 1);
  }
  uVar3 = FUN_0167b9f0(*(undefined8 *)(param_3 + 0x58),
                       param_3 + (ulong)*(byte *)(param_3 + 0x2dc7) * 0x78 + 0x68);
  if ((uVar3 & 1) == 0) {
    if ((int)local_78 == 0) {
      return;
    }
  }
  else {
    *(undefined4 *)((long)local_98 + local_78 * 4) = 5;
    local_78 = (ulong)((int)local_78 + 1);
  }
  lVar6 = 0;
  lVar4 = param_3 + 0x2fa8;
  do {
    if (*(char *)(param_3 + 0x301b) == '\0') {
      lVar8 = 0;
      pcVar7 = (char *)(param_3 + 0x301b);
    }
    else if (*(char *)(param_3 + 0x3027) == '\0') {
      lVar8 = 1;
      pcVar7 = (char *)(param_3 + 0x3027);
    }
    else if (*(char *)(param_3 + 0x3033) == '\0') {
      lVar8 = 2;
      pcVar7 = (char *)(param_3 + 0x3033);
    }
    else if (*(char *)(param_3 + 0x303f) == '\0') {
      lVar8 = 3;
      pcVar7 = (char *)(param_3 + 0x303f);
    }
    else if (*(char *)(param_3 + 0x304b) == '\0') {
      lVar8 = 4;
      pcVar7 = (char *)(param_3 + 0x304b);
    }
    else if (*(char *)(param_3 + 0x3057) == '\0') {
      lVar8 = 5;
      pcVar7 = (char *)(param_3 + 0x3057);
    }
    else if (*(char *)(param_3 + 0x3063) == '\0') {
      lVar8 = 6;
      pcVar7 = (char *)(param_3 + 0x3063);
    }
    else if (*(char *)(param_3 + 0x306f) == '\0') {
      lVar8 = 7;
      pcVar7 = (char *)(param_3 + 0x306f);
    }
    else if (*(char *)(param_3 + 0x307b) == '\0') {
      lVar8 = 8;
      pcVar7 = (char *)(param_3 + 0x307b);
    }
    else if (*(char *)(param_3 + 0x3087) == '\0') {
      lVar8 = 9;
      pcVar7 = (char *)(param_3 + 0x3087);
    }
    else if (*(char *)(param_3 + 0x3093) == '\0') {
      lVar8 = 10;
      pcVar7 = (char *)(param_3 + 0x3093);
    }
    else {
      if (*(char *)(param_3 + 0x309f) != '\0') {
        return;
      }
      lVar8 = 0xb;
      pcVar7 = (char *)(param_3 + 0x309f);
    }
    lVar5 = (long)*(int *)((long)local_98 + lVar6 * 4);
    fVar9 = (float)FUN_0167b760(*(undefined8 *)(param_3 + 0x58),param_3 + lVar5 * 8 + 0x2fa8);
    fVar11 = param_2;
    fVar10 = (float)FUN_0167b760(*(undefined8 *)(param_3 + 0x58),lVar4);
    lVar5 = param_3 + lVar5;
    lVar8 = param_3 + lVar8 * 0xc;
    lVar4 = lVar4 + 8;
    *(undefined1 *)(lVar8 + 0x3019) = *(undefined1 *)(lVar5 + 0x2dc2);
    *(float *)(lVar8 + 0x3010) = (fVar10 - fVar9) * 0.25;
    param_2 = (fVar11 - param_2) * 0.25;
    *(float *)(lVar8 + 0x3014) = param_2;
    *(undefined1 *)(lVar8 + 0x301a) = 4;
    *pcVar7 = '\x01';
    *(undefined1 *)(lVar8 + 0x3018) = 0;
    uVar2 = *(undefined1 *)(param_3 + 0x2dc2 + lVar6);
    *(undefined1 *)(param_3 + 0x2dc2 + lVar6) = *(undefined1 *)(lVar5 + 0x2dc2);
    lVar6 = lVar6 + 1;
    *(undefined1 *)(lVar5 + 0x2dc2) = uVar2;
  } while (lVar6 < (long)local_78);
  return;
}


