/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c8e50; name: FUN_004c8e50
 */


undefined8 FUN_004c8e50(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *local_50 [2];
  
  uVar1 = FUN_004ca430(param_1 + 0x70);
  if (((uVar1 & 1) != 0) &&
     (uVar1 = (ulong)*(uint *)(param_1 + 0x338), *(uint *)(param_1 + 0x338) != 0)) {
    lVar2 = *(long *)(param_1 + 0x330);
    lVar3 = lVar2;
    do {
      if (*(long *)(lVar3 + 0x18) == param_2) {
        local_50[0] = (long *)0x0;
        FUN_004ca460(param_1 + 0x70,local_50);
        uVar1 = FUN_004c9a90(param_2,lVar3 + 8,*(undefined8 *)(*(long *)(param_1 + 0x328) + 0x60));
        if (local_50[0] != (long *)0x0) {
          (**(code **)(*local_50[0] + 0x18))();
        }
        if ((uVar1 & 1) == 0) {
          return 1;
        }
        lVar2 = *(long *)(param_1 + 0x330);
        uVar1 = (ulong)*(uint *)(param_1 + 0x338);
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != lVar2 + uVar1 * 0x20);
  }
  return 0;
}


