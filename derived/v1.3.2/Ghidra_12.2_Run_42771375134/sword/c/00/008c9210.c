/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c9210; name: FUN_008c9210
 */


uint FUN_008c9210(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_24 [4];
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = FUN_015200a0(lVar4,*(undefined4 *)(param_1 + (long)*(int *)(param_1 + 0x640) * 4 + 0x64c),
                       auStack_24);
  uVar1 = *(uint *)(lVar3 + (ulong)*(uint *)(param_1 + 0x738) * 4);
  uVar2 = 0;
  if ((uVar1 & 0x3fff8000) != 0) {
    uVar2 = uVar1 & 0x7fff;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  uVar2 = FUN_00888f20(uVar2);
  return uVar2 & 1;
}


