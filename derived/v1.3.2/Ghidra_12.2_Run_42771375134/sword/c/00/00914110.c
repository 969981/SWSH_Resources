/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00914110; name: FUN_00914110
 */


void FUN_00914110(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    uVar5 = 0;
    uVar6 = 0;
    do {
      while( true ) {
        uVar2 = FUN_008e18d0(*(undefined8 *)(param_1 + uVar6 * 8));
        if ((uVar2 & 1) == 0) break;
        uVar6 = (ulong)((uint)uVar6 + 1);
        uVar5 = uVar5 + 1;
        if (*(byte *)(param_1 + 0x30) <= uVar5) {
          return;
        }
      }
      uVar1 = (uint)uVar6 & 0xff;
      uVar2 = (ulong)uVar1;
      puVar4 = (undefined8 *)(param_1 + uVar2 * 8);
      uVar3 = *puVar4;
      if ((int)uVar1 < (int)(*(byte *)(param_1 + 0x30) - 1)) {
        do {
          uVar1 = (int)uVar2 + 1;
          *(undefined8 *)(param_1 + uVar2 * 8) = *(undefined8 *)(param_1 + (ulong)uVar1 * 8);
          uVar2 = (ulong)(uVar1 & 0xff);
        } while ((int)(uVar1 & 0xff) < (int)(*(byte *)(param_1 + 0x30) - 1));
        puVar4 = (undefined8 *)(param_1 + (ulong)(byte)uVar1 * 8);
      }
      *puVar4 = uVar3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(byte *)(param_1 + 0x30));
  }
  return;
}


