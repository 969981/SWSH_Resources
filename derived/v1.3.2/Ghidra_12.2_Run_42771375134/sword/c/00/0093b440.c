/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093b440; name: FUN_0093b440
 */


int FUN_0093b440(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  
  bVar1 = *(byte *)(param_1 + 0x4c);
  if ((ulong)bVar1 == 0) {
    return 0;
  }
  uVar5 = 0;
  iVar4 = 0;
  if (bVar1 != 0) goto LAB_0093b484;
  do {
    uVar3 = 0;
    while( true ) {
      uVar2 = FUN_008e1600(uVar3);
      iVar4 = iVar4 + (~uVar2 & 1);
      if ((ulong)bVar1 - 1 == uVar5) {
        return iVar4;
      }
      uVar5 = uVar5 + 1;
      if (*(byte *)(param_1 + 0x4c) <= uVar5) break;
LAB_0093b484:
      uVar3 = *(undefined8 *)(param_1 + uVar5 * 8);
    }
  } while( true );
}


