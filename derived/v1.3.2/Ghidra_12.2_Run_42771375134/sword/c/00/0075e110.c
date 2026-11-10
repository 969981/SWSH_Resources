/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075e110; name: FUN_0075e110
 */


void FUN_0075e110(void)

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
  undefined4 uVar11;
  uint uVar12;
  
  puVar10 = PTR_DAT_02715ff0;
  puVar9 = PTR_DAT_02715fe0;
  if (*PTR_DAT_02715ff0 == '\0') {
    uVar12 = 0;
    do {
      uVar1 = (int)(uVar12 << 0x18) >> 0x1f & 0x2608edb8;
      if ((uVar12 & 0x40) != 0) {
        uVar1 = uVar1 ^ 0x130476dc;
      }
      if ((uVar12 & 0x20) != 0) {
        uVar1 = uVar1 ^ 0x9823b6e;
      }
      if ((uVar12 & 0x10) != 0) {
        uVar1 = uVar1 ^ 0x4c11db7;
      }
      if ((uVar12 & 8) != 0) {
        uVar1 = uVar1 ^ 0x80000000;
      }
      uVar2 = uVar1 << 1 ^ 0x4c11db7;
      if (-1 < (int)uVar1) {
        uVar2 = uVar1 << 1;
      }
      if ((uVar12 & 4) != 0) {
        uVar2 = uVar2 ^ 0x80000000;
      }
      uVar1 = uVar2 << 1 ^ 0x4c11db7;
      if (-1 < (int)uVar2) {
        uVar1 = uVar2 << 1;
      }
      if ((uVar12 & 2) != 0) {
        uVar1 = uVar1 ^ 0x80000000;
      }
      uVar2 = uVar1 << 1 ^ 0x4c11db7;
      if (-1 < (int)uVar1) {
        uVar2 = uVar1 << 1;
      }
      if ((uVar12 & 1) != 0) {
        uVar2 = uVar2 ^ 0x80000000;
      }
      uVar1 = uVar2 << 1 ^ 0x4c11db7;
      if (-1 < (int)uVar2) {
        uVar1 = uVar2 << 1;
      }
      uVar3 = uVar12 >> 3;
      uVar4 = uVar12 >> 2;
      uVar5 = uVar12 >> 1;
      uVar11 = FUN_0075e290(uVar1);
      uVar2 = uVar12 << 7;
      uVar1 = uVar12 >> 7;
      uVar6 = uVar12 >> 1;
      uVar7 = uVar12 >> 3;
      uVar8 = uVar12 >> 5;
      uVar12 = uVar12 + 1;
      *(undefined4 *)
       (puVar9 + ((ulong)(uVar2 | (uVar5 & 1) << 6 | (uVar4 & 1) << 5 | uVar1 & 1 | (uVar3 & 1) << 4
                          | uVar6 & 8 | uVar7 & 4 | uVar8 & 2) & 0xff) * 4) = uVar11;
    } while ((uVar12 & 0xff) != 0);
    *puVar10 = 1;
  }
  return;
}


