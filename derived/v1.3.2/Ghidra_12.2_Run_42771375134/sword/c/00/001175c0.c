/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001175c0; name: FUN_001175c0
 */


void FUN_001175c0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ushort *puVar3;
  
  if ((*(uint *)(param_1 + 0x54) & 0x7fffffff) < (uint)(*(int *)(param_1 + 0x44) << 1)) {
    FUN_0011b3d0(param_1 + 0x48);
  }
  uVar1 = (ulong)*(uint *)(param_1 + 0x160);
  if (*(uint *)(param_1 + 0x160) != 0) {
    uVar2 = 0;
    do {
      while (puVar3 = (ushort *)
                      (*(long *)(param_1 + 0x38) +
                       (ulong)*(uint *)(*(long *)(param_1 + 0x158) + uVar2 * 4) * 0x10 + 4),
            (*(byte *)puVar3 & 3) == 0) {
        FUN_00115a40(param_1);
        *puVar3 = *puVar3 | 1;
        uVar1 = (ulong)*(uint *)(param_1 + 0x160);
        uVar2 = uVar2 + 1;
        if (uVar1 <= uVar2) goto LAB_00117650;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
LAB_00117650:
  uVar1 = (ulong)*(uint *)(param_1 + 0x170);
  if (*(uint *)(param_1 + 0x170) != 0) {
    uVar2 = 0;
    do {
      while (puVar3 = (ushort *)
                      (*(long *)(param_1 + 0x38) +
                       (ulong)*(uint *)(*(long *)(param_1 + 0x168) + uVar2 * 4) * 0x10 + 4),
            (*(byte *)puVar3 & 3) != 0) {
        uVar2 = uVar2 + 1;
        if (uVar1 <= uVar2) {
          return;
        }
      }
      FUN_00115a40(param_1);
      *puVar3 = *puVar3 | 1;
      uVar1 = (ulong)*(uint *)(param_1 + 0x170);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}


