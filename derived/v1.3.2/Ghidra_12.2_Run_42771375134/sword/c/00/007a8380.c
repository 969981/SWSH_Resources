/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a8380; name: FUN_007a8380
 */


void FUN_007a8380(long param_1)

{
  long lVar1;
  
  if (*(long *)PTR_DAT_02716708 != 0) {
    FUN_0186bd40(*(long *)PTR_DAT_02716708,0);
  }
  if ((*(long *)PTR_DAT_02716710 != 0) &&
     (lVar1 = FUN_01952580(*(long *)PTR_DAT_02716710 + 0x10,*(undefined4 *)(param_1 + 0x100),0x77),
     lVar1 != 0)) {
    FUN_01866670(lVar1,1);
  }
  FUN_007a81e0(param_1);
  return;
}


