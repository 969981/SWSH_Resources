/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0117b4a0; name: FUN_0117b4a0
 */


uint FUN_0117b4a0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  FUN_0117eaf0(auStack_38);
  uVar1 = FUN_0117b4f0(uVar2,auStack_38);
  FUN_0117eb40(auStack_38);
  return uVar1 & 1;
}


