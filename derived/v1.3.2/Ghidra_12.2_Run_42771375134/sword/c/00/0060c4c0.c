/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060c4c0; name: FUN_0060c4c0
 */


void FUN_0060c4c0(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  if ((param_1 == (long *)0x0) || (param_2 == (long *)0x0)) {
    return;
  }
  if (*param_2 != 0) {
    if (param_2[4] != 0) {
      FUN_0060c4c0(*(undefined8 *)(*param_2 + 8),param_2[4],
                   "../../../../Include\\SiCore/SiCore_Map.h",199);
      param_2[4] = 0;
    }
    if (param_2[5] != 0) {
      FUN_0060c4c0(*(undefined8 *)(*param_2 + 8),param_2[5],
                   "../../../../Include\\SiCore/SiCore_Map.h",200);
      param_2[5] = 0;
    }
  }
  param_2[4] = 0;
  param_2[5] = 0;
                    /* WARNING: Could not recover jumptable at 0x0060c55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,param_4);
  return;
}


