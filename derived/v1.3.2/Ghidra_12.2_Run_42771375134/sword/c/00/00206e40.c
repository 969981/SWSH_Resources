/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00206e40; name: FUN_00206e40
 */


void FUN_00206e40(undefined8 *param_1)

{
  *(bool *)((long)param_1 + 10) = *(ushort *)(param_1 + 1) < 2;
  if (*(ushort *)(param_1 + 1) == 0) {
    *param_1 = 0;
  }
  *(bool *)((long)param_1 + 0x1a) = *(ushort *)(param_1 + 3) < 2;
  if (*(ushort *)(param_1 + 3) == 0) {
    param_1[2] = 0;
    return;
  }
  return;
}


