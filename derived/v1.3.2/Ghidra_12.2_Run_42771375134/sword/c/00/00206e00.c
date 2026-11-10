/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00206e00; name: FUN_00206e00
 */


void FUN_00206e00(long param_1)

{
  FUN_00217ef0();
                    /* try { // try from 00206e18 to 00206e1b has its CatchHandler @ 00206e2c */
  FUN_00217ef0(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


