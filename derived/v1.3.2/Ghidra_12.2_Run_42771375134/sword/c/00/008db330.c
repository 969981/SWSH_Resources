/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008db330; name: FUN_008db330
 */


void FUN_008db330(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_008dc240(*(undefined8 *)(param_1 + 0x30));
  if ((uVar1 & 1) == 0) {
    FUN_008dc0f0(*(undefined8 *)(param_1 + 0x30));
    FUN_008dc630(*(undefined8 *)(param_1 + 0x50));
    uVar2 = FUN_008dc860(*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x70) = uVar2;
  }
  return;
}


