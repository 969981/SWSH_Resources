/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001176c0; name: FUN_001176c0
 */


void FUN_001176c0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x1a8);
  if (*(uint *)(param_1 + 0x1a8) != 0) {
    uVar3 = 0;
    do {
      uVar2 = (ulong)*(uint *)(*(long *)(param_1 + 0x1a0) + uVar3 * 4);
      if ((*(ushort *)(*(long *)(param_1 + 0x38) + uVar2 * 0x10 + 4) & 0xb) == 3) {
        FUN_00116080(param_1,uVar2);
        FUN_00115ed0(param_1,uVar2);
        uVar1 = (ulong)*(uint *)(param_1 + 0x1a8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}


