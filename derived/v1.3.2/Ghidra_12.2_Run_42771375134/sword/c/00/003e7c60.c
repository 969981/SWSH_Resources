/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e7c60; name: FUN_003e7c60
 */


void FUN_003e7c60(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = FUN_003fefc0(param_2);
  if (uVar1 != 0) {
    uVar4 = uVar1 + 0x5f >> 6;
    uVar2 = (1 - (uVar1 >> 6)) + uVar4;
    uVar3 = uVar1;
    if ((uVar2 & 3) != 0) {
      lVar5 = -(uVar2 & 3);
      do {
        Hint_Prefetch(uVar3,0,0,0);
        uVar3 = uVar3 + 0x40;
        uVar2 = uVar2 - 1;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0);
    }
    if (2 < uVar4 - (uVar1 >> 6)) {
      do {
        Hint_Prefetch(uVar3,0,0,0);
        Hint_Prefetch(uVar3 + 0x40,0,0,0);
        uVar2 = uVar2 - 4;
        Hint_Prefetch(uVar3 + 0x80,0,0,0);
        Hint_Prefetch(uVar3 + 0xc0,0,0,0);
        uVar3 = uVar3 + 0x100;
      } while (uVar2 != 0);
    }
    uVar1 = *(ulong *)(uVar1 + 0x38);
    uVar2 = uVar1 >> 6;
    uVar4 = uVar1 + 0x1f >> 6;
    uVar3 = (1 - uVar2) + uVar4;
    if ((uVar3 & 3) != 0) {
      lVar5 = -(uVar3 & 3);
      do {
        Hint_Prefetch(uVar1,0,0,0);
        uVar1 = uVar1 + 0x40;
        uVar3 = uVar3 - 1;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0);
    }
    if (2 < uVar4 - uVar2) {
      do {
        Hint_Prefetch(uVar1,0,0,0);
        Hint_Prefetch(uVar1 + 0x40,0,0,0);
        uVar3 = uVar3 - 4;
        Hint_Prefetch(uVar1 + 0x80,0,0,0);
        Hint_Prefetch(uVar1 + 0xc0,0,0,0);
        uVar1 = uVar1 + 0x100;
      } while (uVar3 != 0);
    }
  }
  return;
}


