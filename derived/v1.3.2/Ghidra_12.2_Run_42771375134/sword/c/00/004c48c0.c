/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c48c0; name: FUN_004c48c0
 */


void FUN_004c48c0(long param_1,long param_2,long *param_3)

{
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined2 *)(param_1 + 0x28) = 0xff00;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(long *)(param_1 + 0x18) = param_2;
  *(long **)(param_1 + 0x20) = param_3;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8;
  if (param_2 != 0) {
    FUN_004c2cc0(param_2);
    param_3 = *(long **)(param_1 + 0x20);
  }
  if (param_3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004c491c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))(param_3);
  return;
}


