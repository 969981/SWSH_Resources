/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003afb20; name: FUN_003afb20
 */


float FUN_003afb20(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x318))();
  if (iVar1 == -1) {
    return DAT_01d4c18c;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x328))();
  uVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x330))();
  if (uVar2 < uVar3 || uVar2 - uVar3 == 0) {
    return 0.0;
  }
  return (float)((uVar2 - uVar3) * iVar1) / DAT_01d4bec0;
}


