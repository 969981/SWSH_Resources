/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcb4f0; name: FUN_00bcb4f0
 */


void FUN_00bcb4f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (*(char *)(param_1 + 0x60c) == '\0') {
    FUN_0150b360(lVar1,0);
  }
  else {
    FUN_0150b360(lVar1,*(undefined4 *)(param_1 + 0x610));
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00bcb590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


