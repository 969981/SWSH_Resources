/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e30560; name: FUN_00e30560
 */


void FUN_00e30560(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  FUN_00e30330();
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar2 == 0) {
    uVar1 = FUN_01524d00(0);
    *(undefined4 *)(param_1 + 0x2a0) = uVar1;
    return;
  }
  plVar3 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  uVar1 = FUN_01524d00(lVar2);
  *(undefined4 *)(param_1 + 0x2a0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00e305c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


