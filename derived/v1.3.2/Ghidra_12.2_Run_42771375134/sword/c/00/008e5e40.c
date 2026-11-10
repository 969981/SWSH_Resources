/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e5e40; name: FUN_008e5e40
 */


void FUN_008e5e40(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  FUN_008e6ce0(param_1 + 4,*(undefined8 *)(param_2 + 8));
  *(undefined1 *)(param_1 + 8) = *param_2;
  uVar1 = FUN_008ebfd0(*(undefined1 *)((long)param_1 + 0x27),*(undefined1 *)(param_1 + 5));
  *(undefined1 *)((long)param_1 + 0x41) = uVar1;
  *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_1 + 0x25);
  FUN_0093dae0(*param_1,*(undefined1 *)((long)param_1 + 0x29),*(undefined1 *)((long)param_1 + 0x2a),
               *(undefined1 *)((long)param_1 + 0x2b));
  return;
}


