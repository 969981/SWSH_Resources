/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c3410; name: FUN_005c3410
 */


void FUN_005c3410(void)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar3 = (uint)(uVar2 >> 1) & 0x7fffffff;
    if ((uVar2 & 1) != 0) {
      uVar3 = uVar3 ^ 0xedb88320;
    }
    uVar1 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar1 = uVar3 >> 1 ^ 0xedb88320;
    }
    uVar3 = uVar1 >> 1;
    if ((uVar1 & 1) != 0) {
      uVar3 = uVar1 >> 1 ^ 0xedb88320;
    }
    uVar1 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar1 = uVar3 >> 1 ^ 0xedb88320;
    }
    uVar3 = uVar1 >> 1;
    if ((uVar1 & 1) != 0) {
      uVar3 = uVar1 >> 1 ^ 0xedb88320;
    }
    uVar1 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar1 = uVar3 >> 1 ^ 0xedb88320;
    }
    uVar3 = uVar1 >> 1;
    if ((uVar1 & 1) != 0) {
      uVar3 = uVar1 >> 1 ^ 0xedb88320;
    }
    uVar1 = uVar3 >> 1;
    if ((uVar3 & 1) != 0) {
      uVar1 = uVar3 >> 1 ^ 0xedb88320;
    }
    (&DAT_02765458)[uVar2] = uVar1;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x100);
  return;
}


