/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072ffc0; name: FUN_0072ffc0
 */


void FUN_0072ffc0(long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x170);
  lVar2 = *(long *)(param_1 + 0x178);
  if (lVar3 != lVar2) {
    uVar4 = (lVar2 + -0x10) - lVar3;
    uVar1 = ((uint)(uVar4 >> 4) & 0xfffffff) + 1;
    if ((uVar1 & 7) != 0) {
      lVar5 = -((ulong)uVar1 & 7);
      do {
        *(undefined4 *)(lVar3 + 8) = param_2;
        lVar3 = lVar3 + 0x10;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0);
    }
    if (0x6f < uVar4) {
      do {
        *(undefined4 *)(lVar3 + 8) = param_2;
        *(undefined4 *)(lVar3 + 0x18) = param_2;
        *(undefined4 *)(lVar3 + 0x28) = param_2;
        *(undefined4 *)(lVar3 + 0x38) = param_2;
        *(undefined4 *)(lVar3 + 0x48) = param_2;
        *(undefined4 *)(lVar3 + 0x58) = param_2;
        *(undefined4 *)(lVar3 + 0x68) = param_2;
        *(undefined4 *)(lVar3 + 0x78) = param_2;
        lVar3 = lVar3 + 0x80;
      } while (lVar2 != lVar3);
    }
  }
  return;
}


