/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1a880; name: FUN_00a1a880
 */


undefined8 FUN_00a1a880(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  undefined4 uVar11;
  long local_68;
  
  if (*(uint *)(param_1 + 0xe0) == param_2) {
    return 0;
  }
  *(uint *)(param_1 + 0xe0) = param_2;
  uVar6 = 99;
  if (*(char *)(param_1 + 0x89) != '\0') {
    uVar6 = 5999;
  }
  if (param_2 <= uVar6) {
    uVar6 = param_2;
  }
  uVar1 = uVar6 & 0xffff;
  uVar2 = uVar6;
  if (*(char *)(param_1 + 0x89) != '\0') {
    uVar2 = uVar6 + (uVar1 / 0x3c) * -0x3c;
  }
  uVar9 = (ulong)uVar1 / 0x3c & 0xff;
  uVar1 = uVar1 / 600 + (uVar1 / 6000) * -10;
  local_68 = *(long *)(param_1 + 0xb8);
  if ((local_68 != -0x340d631b7bddd9bb) && (local_68 != 0)) {
    FUN_00ffd510((float)(uVar1 & 0xff),*(undefined8 *)(param_1 + 0x10),&local_68);
  }
  local_68 = *(long *)(param_1 + 0xc0);
  uVar3 = (int)uVar9 + (int)(uVar9 / 10) * -10;
  if ((local_68 != -0x340d631b7bddd9bb) && (local_68 != 0)) {
    FUN_00ffd510((float)(uVar3 & 0xff),*(undefined8 *)(param_1 + 0x10),&local_68);
  }
  local_68 = *(long *)(param_1 + 200);
  uVar10 = (uVar2 & 0xffff) / 10;
  uVar4 = uVar10 + ((uVar2 & 0xffff) / 100) * -10;
  if ((local_68 != -0x340d631b7bddd9bb) && (local_68 != 0)) {
    FUN_00ffd510((float)(uVar4 & 0xffff),*(undefined8 *)(param_1 + 0x10),&local_68);
  }
  local_68 = *(long *)(param_1 + 0xd0);
  if ((local_68 != -0x340d631b7bddd9bb) && (local_68 != 0)) {
    FUN_00ffd510((float)(uVar2 + uVar10 * -10 & 0xffff),*(undefined8 *)(param_1 + 0x10),&local_68);
  }
  if (*(char *)(param_1 + 0x88) == '\0') {
    lVar7 = *(long *)(param_1 + 0x90);
    if (lVar7 != 0) {
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 1;
    }
    lVar7 = *(long *)(param_1 + 0x98);
    if (lVar7 != 0) {
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 1;
    }
    lVar7 = *(long *)(param_1 + 0xa0);
    if (lVar7 != 0) {
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 1;
    }
    lVar7 = *(long *)(param_1 + 0xa8);
    if (lVar7 != 0) {
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 1;
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x90);
    if (lVar7 == 0) {
      lVar8 = *(long *)(param_1 + 0x98);
    }
    else {
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | (uVar1 & 0xff) != 0;
      lVar8 = *(long *)(param_1 + 0x98);
    }
    bVar5 = lVar7 != 0 && (uVar1 & 0xff) != 0;
    if (lVar8 != 0) {
      bVar5 = (uVar3 & 0xff) != 0 || bVar5;
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | bVar5;
    }
    lVar7 = *(long *)(param_1 + 0xa0);
    if (lVar7 != 0) {
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | bVar5;
    }
    lVar7 = *(long *)(param_1 + 0xa8);
    if (lVar7 != 0) {
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | (uVar4 & 0xffff) != 0 | bVar5;
      lVar7 = *(long *)(param_1 + 0xb0);
      goto joined_r0x00a1aae8;
    }
  }
  lVar7 = *(long *)(param_1 + 0xb0);
joined_r0x00a1aae8:
  if (lVar7 != 0) {
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 1;
  }
  if ((*(long *)(param_1 + 0xd8) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0xd8) != 0)) {
    uVar11 = 0x3f800000;
    if (*(uint *)(param_1 + 0x84) < uVar6) {
      uVar11 = 0;
    }
    FUN_00ffd510(uVar11,*(undefined8 *)(param_1 + 0x10));
  }
  return 1;
}


