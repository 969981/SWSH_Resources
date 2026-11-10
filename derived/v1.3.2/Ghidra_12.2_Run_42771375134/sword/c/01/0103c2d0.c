/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103c2d0; name: FUN_0103c2d0
 */


undefined8 FUN_0103c2d0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_012b4090(param_1 + 0x170);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_012b40f0(param_1 + 0x170);
  return uVar2;
}


