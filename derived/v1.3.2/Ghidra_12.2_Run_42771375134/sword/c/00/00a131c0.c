/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a131c0; name: FUN_00a131c0
 */


uint FUN_00a131c0(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(long *)(param_1 + 0x2b0) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&DAT_02154630);
    if (*(long *)(param_1 + 0x2b0) != 0) {
      uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&DAT_02154638);
      goto LAB_00a13208;
    }
  }
  uVar2 = 1;
LAB_00a13208:
  return uVar1 & uVar2 & 1;
}


