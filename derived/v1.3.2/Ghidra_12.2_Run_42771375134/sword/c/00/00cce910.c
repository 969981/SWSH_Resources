/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cce910; name: FUN_00cce910
 */


uint FUN_00cce910(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = PTR_DAT_0271c800;
  if (*(long *)(param_1 + 0x2b0) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),PTR_DAT_0271c800 + 0x30);
    if (*(long *)(param_1 + 0x2b0) != 0) {
      uVar3 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),puVar1 + 0xb8);
      uVar2 = uVar2 & uVar3;
      if (*(long *)(param_1 + 0x2b0) != 0) {
        uVar3 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),puVar1 + 0x140);
        uVar2 = uVar2 & uVar3;
        if (*(long *)(param_1 + 0x2b0) != 0) {
          uVar3 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),puVar1 + 0x1c8);
          goto LAB_00cce98c;
        }
      }
    }
  }
  uVar3 = 1;
LAB_00cce98c:
  return uVar2 & uVar3 & 1;
}


