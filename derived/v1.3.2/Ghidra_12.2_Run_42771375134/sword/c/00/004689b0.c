/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004689b0; name: FUN_004689b0
 */


undefined8 FUN_004689b0(void)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = PTR_DAT_02712e28;
  if (*(int *)PTR_DAT_02712e28 == -1) {
    uVar3 = *(uint *)(PTR_DAT_02712e50 + 0x84);
    if (uVar3 < 0x41) {
      uVar3 = 0x1000000;
    }
    iVar2 = FUN_00405500(0,uVar3,0x40,1,0x10);
    *(int *)puVar1 = iVar2;
    if (iVar2 == -1) {
      return 0x34;
    }
    *(int *)(PTR_PTR_02713088 + 8) = iVar2;
  }
  return 1;
}


