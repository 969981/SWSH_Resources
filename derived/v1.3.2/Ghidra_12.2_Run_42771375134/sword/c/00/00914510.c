/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00914510; name: FUN_00914510
 */


int FUN_00914510(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x30);
  if ((ulong)bVar1 == 0) {
    return 0;
  }
  uVar4 = 0;
  iVar3 = 0;
  if (bVar1 != 0) goto LAB_00914554;
  do {
    iVar2 = FUN_008e1620(0);
    iVar3 = iVar2 + iVar3;
    while( true ) {
      if ((ulong)bVar1 - 1 == uVar4) {
        return iVar3;
      }
      uVar4 = uVar4 + 1;
      if (*(byte *)(param_1 + 0x30) <= uVar4) break;
LAB_00914554:
      iVar2 = FUN_008e1620(*(undefined8 *)(param_1 + uVar4 * 8));
      iVar3 = iVar2 + iVar3;
    }
  } while( true );
}


