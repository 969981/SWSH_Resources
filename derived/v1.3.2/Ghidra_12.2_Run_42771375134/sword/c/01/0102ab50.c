/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102ab50; name: FUN_0102ab50
 */


void FUN_0102ab50(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x200);
  if (lVar2 == 0) {
    uVar1 = FUN_01029c90(*(undefined8 *)PTR_DAT_027108c0);
    FUN_01519970(0,uVar1);
    return;
  }
  plVar3 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  uVar1 = FUN_01029c90(*(undefined8 *)PTR_DAT_027108c0);
  FUN_01519970(lVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0102abb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


