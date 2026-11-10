/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048a8d0; name: FUN_0048a8d0
 */


long FUN_0048a8d0(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = PTR_DAT_02712a90;
  if (*(uint *)(param_1 + 1) < *(uint *)(param_1 + 2)) {
    lVar5 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x98);
    if (lVar5 == 0) {
      return 0;
    }
    FUN_004895f0(lVar5);
    uVar2 = *(uint *)(param_1 + 1);
    if (uVar2 < *(uint *)((long)param_1 + 0xc)) {
      *(uint *)(param_1 + 1) = uVar2 + 1;
      plVar1 = (long *)(*param_1 + (ulong)uVar2 * 8);
      if (plVar1 != (long *)0x0) {
        *plVar1 = lVar5;
        return lVar5;
      }
    }
    uVar3 = *(undefined4 *)puVar4;
    FUN_00489640(lVar5);
    FUN_00404870(uVar3,lVar5);
  }
  return 0;
}


