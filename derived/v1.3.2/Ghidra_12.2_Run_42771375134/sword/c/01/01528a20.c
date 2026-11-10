/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01528a20; name: FUN_01528a20
 */


uint FUN_01528a20(uint param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (0x33 < param_1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = lVar5 + (long)(int)param_1 * 4;
  iVar3 = *(int *)(lVar1 + 0x60);
  uVar2 = (uint)(iVar3 != -1) + iVar3;
  uVar4 = FUN_01529320(param_1);
  if (uVar2 <= uVar4) {
    uVar4 = uVar2;
  }
  *(uint *)(lVar1 + 0x60) = uVar4;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return uVar4;
}


