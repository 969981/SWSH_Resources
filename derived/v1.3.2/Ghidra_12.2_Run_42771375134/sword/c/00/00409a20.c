/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00409a20; name: FUN_00409a20
 */


void FUN_00409a20(long *param_1)

{
  undefined8 *puVar2;
  undefined8 *puVar1;
  
  if ((int)param_1[0x18] != 0) {
    puVar1 = (undefined8 *)param_1[0x17];
    do {
      puVar2 = puVar1 + 1;
      (**(code **)(*(long *)*puVar1 + 0x140))();
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)(param_1[0x17] + (ulong)*(uint *)(param_1 + 0x18) * 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00409a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x290))(param_1);
  return;
}


