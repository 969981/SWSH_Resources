/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009142a0; name: FUN_009142a0
 */


int FUN_009142a0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    do {
      uVar1 = FUN_008e18d0(*(undefined8 *)(param_1 + uVar4 * 8));
      uVar3 = uVar3 + (uVar1 & 1);
      uVar2 = (ulong)*(byte *)(param_1 + 0x30);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  uVar1 = uVar3;
  if ((uVar3 & 0xff) <= (uint)uVar2) {
    uVar1 = (uint)uVar2;
  }
  return uVar1 - uVar3;
}


