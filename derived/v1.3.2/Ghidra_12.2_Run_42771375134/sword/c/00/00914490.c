/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00914490; name: FUN_00914490
 */


ulong FUN_00914490(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x30);
  if (uVar4 == 0) {
LAB_009144f0:
    uVar3 = 0;
  }
  else {
    do {
      while( true ) {
        uVar1 = uVar4 - 1;
        uVar3 = (ulong)uVar1;
        if ((uVar1 & 0xff) == 0) goto LAB_009144f0;
        if ((uint)*(byte *)(param_1 + 0x30) <= (uVar1 & 0xff)) break;
        uVar2 = FUN_008e18d0(*(undefined8 *)(param_1 + (uVar3 & 0xff) * 8));
        uVar4 = uVar4 - 1;
        if ((uVar2 & 1) != 0) {
          return uVar3;
        }
      }
      uVar2 = FUN_008e18d0(0);
      uVar4 = uVar4 - 1;
    } while ((uVar2 & 1) == 0);
  }
  return uVar3;
}


