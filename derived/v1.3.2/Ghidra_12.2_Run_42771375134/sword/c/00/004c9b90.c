/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c9b90; name: FUN_004c9b90
 */


undefined8 FUN_004c9b90(ulong param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    uVar1 = param_1;
    lVar4 = lVar3;
    do {
      if (*(long *)(lVar4 + 0x18) == param_2) {
        uVar1 = FUN_004c9a90(uVar1,lVar4 + 8,param_3);
        if ((uVar1 & 1) == 0) {
          return 1;
        }
        lVar3 = *(long *)(param_1 + 0x10);
        uVar2 = (ulong)*(uint *)(param_1 + 0x18);
      }
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != lVar3 + uVar2 * 0x20);
  }
  return 0;
}


