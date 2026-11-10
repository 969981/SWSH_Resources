/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e55c0; name: FUN_008e55c0
 */


undefined8 FUN_008e55c0(long param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x456);
  iVar2 = (uint)uVar1 - (uint)*param_2;
  if ((uint)uVar1 < (uint)*param_2 || iVar2 == 0) {
    *param_2 = uVar1;
    *(undefined2 *)(param_1 + 0x456) = 0;
    return 1;
  }
  *(short *)(param_1 + 0x456) = (short)iVar2;
  return 0;
}


