/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cf7520; name: FUN_00cf7520
 */


void FUN_00cf7520(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x5f8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x608) = 0;
    *(undefined8 *)(param_1 + 0x600) = 0;
    *(undefined8 *)(param_1 + 0x5f8) = 0;
    *(undefined8 *)(param_1 + 0x5f0) = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x610);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x678);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x688) = 0;
    *(undefined8 *)(param_1 + 0x680) = 0;
    *(undefined8 *)(param_1 + 0x678) = 0;
    *(undefined8 *)(param_1 + 0x670) = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x690);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x6f8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x708) = 0;
  *(undefined8 *)(param_1 + 0x700) = 0;
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  *(undefined8 *)(param_1 + 0x6f0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00cf7594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 0x710);
  return;
}


