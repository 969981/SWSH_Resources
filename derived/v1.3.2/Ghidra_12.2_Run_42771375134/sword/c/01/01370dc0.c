/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01370dc0; name: FUN_01370dc0
 */


undefined8 FUN_01370dc0(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 == 2) {
    return 1;
  }
  if (iVar1 == 1) {
    uVar2 = FUN_00d93fb0(*(undefined8 *)PTR_DAT_02710868,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    FUN_00d939e0(*(undefined8 *)PTR_DAT_02710868,0,0,0x28);
  }
  *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
  return 0;
}


