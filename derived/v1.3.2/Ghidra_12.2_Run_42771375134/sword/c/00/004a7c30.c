/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a7c30; name: FUN_004a7c30
 */


void FUN_004a7c30(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = 0xffffffff00000000;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(ushort *)((long)param_1 + 0xc) = *(ushort *)((long)param_1 + 0xc) & 0xf800;
  return;
}


