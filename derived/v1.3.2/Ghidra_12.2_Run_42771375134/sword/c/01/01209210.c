/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01209210; name: FUN_01209210
 */


void FUN_01209210(long param_1)

{
  FUN_007a9a20();
  FUN_011fc4f0(*(undefined8 *)PTR_DAT_02718f20);
  FUN_011faae0(*(undefined8 *)PTR_DAT_02710940);
  FUN_011f6570(*(undefined8 *)PTR_DAT_0271cba8);
  FUN_012a41c0(*(undefined8 *)PTR_DAT_02720700);
  FUN_01210da0(*(undefined8 *)PTR_DAT_02710958);
  FUN_01195ee0(*(undefined8 *)(param_1 + 0xc0));
  if (((*(long *)(param_1 + 200) == 0) || (*(int *)(*(long *)(param_1 + 200) + 0x54) == 0)) ||
     (*(undefined8 **)(param_1 + 0xd0) == (undefined8 *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x012092a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xd0))();
  return;
}


