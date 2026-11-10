/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00965540; name: FUN_00965540
 */


bool FUN_00965540(undefined8 *param_1)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = FUN_008f8110(*param_1);
  if (iVar3 != 2) {
    return false;
  }
  bVar2 = *(byte *)(param_1 + 6);
  if (0x2e < (ulong)bVar2) {
    return false;
  }
  uVar4 = FUN_008e0b50(param_1[2]);
  uVar1 = 0x16e00fff8000;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0x600000007e00;
  }
  return (uVar1 & 1L << ((ulong)bVar2 & 0x3f)) != 0;
}


