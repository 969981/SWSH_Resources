/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01116080; name: FUN_01116080
 */


void FUN_01116080(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x05') {
    return;
  }
  lVar1 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
  if (lVar1 == 0) {
    FUN_01538ef0(0,*(undefined4 *)(param_1 + 0x88));
    return;
  }
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN_01538ef0(lVar1,*(undefined4 *)(param_1 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x011160ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


