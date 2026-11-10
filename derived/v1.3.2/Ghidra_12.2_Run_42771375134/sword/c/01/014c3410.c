/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c3410; name: FUN_014c3410
 */


void FUN_014c3410(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 0xac8) =
       *(uint *)(param_1 + 0xac8) & (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
  if (*(long *)(param_1 + 0x260) != 0) {
    uVar1 = FUN_014c4ec0();
    FUN_01995440(uVar1,param_2);
  }
  if (*(long *)(param_1 + 0x268) == 0) {
    return;
  }
  uVar1 = FUN_014c4ec0();
  FUN_01995440(uVar1,param_2);
  return;
}


