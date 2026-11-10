/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004dda80; name: FUN_004dda80
 */


void FUN_004dda80(long *param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 10) >> 4 & 1) != 0) {
      FUN_004909d0(*(undefined8 *)PTR_DAT_02712db8,*(undefined4 *)(lVar1 + 0x1d8),param_1);
      lVar1 = param_1[3];
    }
    FUN_0048d330(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x004ddae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1);
  return;
}


