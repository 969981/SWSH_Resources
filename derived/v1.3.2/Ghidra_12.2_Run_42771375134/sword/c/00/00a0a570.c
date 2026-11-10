/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0a570; name: FUN_00a0a570
 */


undefined4 FUN_00a0a570(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_008e1600();
  if ((uVar2 & 1) != 0) {
    return 6;
  }
  uVar2 = FUN_008e1980(param_1);
  if ((uVar2 & 1) != 0) {
    return 2;
  }
  iVar1 = FUN_008e19f0(param_1);
  if (iVar1 - 1U < 5) {
    return *(undefined4 *)(&DAT_02153840 + (long)(int)(iVar1 - 1U) * 4);
  }
  return 0xffffffff;
}


