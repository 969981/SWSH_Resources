/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c8100; name: FUN_008c8100
 */


long FUN_008c8100(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_24 [4];
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = FUN_015200a0(lVar3,*(undefined4 *)(param_1 + (long)*(int *)(param_1 + 0x640) * 4 + 0x64c),
                       auStack_24);
  uVar1 = *(uint *)(param_1 + 0x738);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return lVar2 + (ulong)uVar1 * 4;
}


