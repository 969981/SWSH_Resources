/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e2d30; name: FUN_008e2d30
 */


undefined2 FUN_008e2d30(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_00932ae0(param_2,5);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x128) & 7) != 0) {
    return 0;
  }
  iVar1 = FUN_008e12a0(param_1,0x13);
  if (iVar1 == 0x67) {
    return 0;
  }
  return *(undefined2 *)(param_1 + 0x76);
}


