/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e6cc0; name: FUN_009e6cc0
 */


void FUN_009e6cc0(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x54);
  if (uVar1 <= *(uint *)(param_1 + 0x58)) {
    do {
      if ((1 << (ulong)(uVar1 & 0x1f) & *(uint *)(param_1 + 0x60)) != 0) goto LAB_009e6cf0;
      uVar1 = uVar1 + 1;
    } while (uVar1 <= *(uint *)(param_1 + 0x58));
  }
  uVar1 = 0xe;
LAB_009e6cf0:
  *(uint *)(param_1 + 0x5c) = uVar1;
  return;
}


