/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008790d0; name: FUN_008790d0
 */


undefined8 FUN_008790d0(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((int)param_2 < 6) {
    uVar1 = FUN_00876a80(*(undefined8 *)(param_1 + 0x98));
    if ((1 << (ulong)(param_2 & 0x1f) & uVar1 & 0xff) != 0) {
      return 0x1f;
    }
  }
  uVar2 = FUN_00879070(param_1,param_2);
  return uVar2;
}


