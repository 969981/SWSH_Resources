/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075def0; name: FUN_0075def0
 */


void FUN_0075def0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  
  puVar10 = PTR_DAT_02715fe8;
  puVar9 = PTR_DAT_02715fd8;
  if (*PTR_DAT_02715fe8 != '\0') {
    return;
  }
  uVar11 = 0;
  do {
    uVar12 = 0;
    if ((char)uVar11 < '\0') {
      uVar12 = 0xffff8005;
    }
    if ((uVar11 & 0x40) != 0) {
      uVar12 = uVar12 ^ 0xffff8000;
    }
    uVar1 = uVar12 << 1;
    if ((int)uVar12 < 0) {
      uVar1 = uVar12 << 1 | 0xffff8005;
    }
    if ((uVar11 & 0x20) != 0) {
      uVar1 = uVar1 ^ 0xffff8000;
    }
    uVar12 = uVar1 << 1;
    if ((short)uVar1 < 0) {
      uVar12 = uVar1 << 1 ^ 0xffff8005;
    }
    if ((uVar11 & 0x10) != 0) {
      uVar12 = uVar12 ^ 0xffff8000;
    }
    uVar1 = uVar12 << 1;
    if ((short)uVar12 < 0) {
      uVar1 = uVar12 << 1 ^ 0xffff8005;
    }
    if ((uVar11 & 8) != 0) {
      uVar1 = uVar1 ^ 0xffff8000;
    }
    uVar12 = uVar1 << 1;
    if ((short)uVar1 < 0) {
      uVar12 = uVar1 << 1 ^ 0xffff8005;
    }
    if ((uVar11 & 4) != 0) {
      uVar12 = uVar12 ^ 0xffff8000;
    }
    uVar1 = uVar12 << 1;
    if ((short)uVar12 < 0) {
      uVar1 = uVar12 << 1 ^ 0xffff8005;
    }
    if ((uVar11 & 2) != 0) {
      uVar1 = uVar1 ^ 0xffff8000;
    }
    uVar12 = uVar1 << 1;
    if ((short)uVar1 < 0) {
      uVar12 = uVar1 << 1 ^ 0xffff8005;
    }
    if ((uVar11 & 1) != 0) {
      uVar12 = uVar12 ^ 0xffff8000;
    }
    uVar1 = uVar12 << 1;
    if ((short)uVar12 < 0) {
      uVar1 = uVar12 << 1 ^ 0xffff8005;
    }
    uVar2 = uVar11 << 7;
    uVar12 = uVar11 >> 7;
    uVar6 = uVar11 >> 1;
    uVar3 = uVar11 >> 1;
    uVar4 = uVar11 >> 2;
    uVar5 = uVar11 >> 3;
    uVar7 = uVar11 >> 3;
    uVar8 = uVar11 >> 5;
    uVar11 = uVar11 + 1;
    *(ushort *)
     (puVar9 + ((ulong)(uVar2 | (uVar3 & 1) << 6 | (uVar4 & 1) << 5 | uVar12 & 1 | (uVar5 & 1) << 4
                        | uVar6 & 8 | uVar7 & 4 | uVar8 & 2) & 0xff) * 2) =
         (ushort)(uVar1 << 0xf) | (ushort)((uVar1 >> 1 & 1) << 0xe) |
         (ushort)((uVar1 >> 2 & 1) << 0xd) | (ushort)((uVar1 >> 3 & 1) << 0xc) |
         (ushort)(uVar1 >> 0xf) & 1 | (ushort)((uVar1 >> 4 & 1) << 0xb) |
         (ushort)((uVar1 & 0x20) << 5) | (ushort)((uVar1 & 0x40) << 3) |
         (ushort)((uVar1 & 0x80) << 1) | (ushort)(uVar1 >> 1) & 0x80 | (ushort)(uVar1 >> 3) & 0x40;
  } while ((uVar11 & 0xff) != 0);
  *puVar10 = 1;
  return;
}


