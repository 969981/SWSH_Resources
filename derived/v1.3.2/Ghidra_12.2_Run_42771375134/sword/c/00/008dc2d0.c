/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dc2d0; name: FUN_008dc2d0
 */


void FUN_008dc2d0(long param_1)

{
  short sVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar2 = *(uint *)(param_1 + 0xc08);
  if (uVar2 != 0) {
    if ((uVar2 & 0xffff) < 0x60) {
      uVar3 = (ulong)uVar2 & 0xffff;
      puVar4 = (undefined8 *)(param_1 + uVar3 * 0x20 + 8);
      do {
        sVar1 = FUN_008dbea0(*puVar4);
        if (sVar1 == 0) break;
        FUN_008dbd70(*puVar4,0);
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 4;
      } while (uVar3 < 0x60);
      uVar2 = *(uint *)(param_1 + 0xc08);
    }
    *(uint *)(param_1 + 0xc08) = uVar2 - 1;
    FUN_008dbd70(*(undefined8 *)(param_1 + (ulong)(uVar2 - 1) * 0x20 + 8),0);
    do {
      if (*(int *)(param_1 + 0xc08) == 0) {
        return;
      }
      uVar2 = *(int *)(param_1 + 0xc08) - 1;
      *(uint *)(param_1 + 0xc08) = uVar2;
      sVar1 = FUN_008dbea0(*(undefined8 *)(param_1 + (ulong)uVar2 * 0x20 + 8));
    } while (sVar1 != 1);
    *(int *)(param_1 + 0xc08) = *(int *)(param_1 + 0xc08) + 1;
  }
  return;
}


