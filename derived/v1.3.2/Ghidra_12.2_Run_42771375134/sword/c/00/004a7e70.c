/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a7e70; name: FUN_004a7e70
 */


void FUN_004a7e70(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  if (((*(ushort *)((long)param_1 + 0xc) & 0x7c) == 4) && (param_1[2] != 0)) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[2] = 0;
  }
  *(undefined4 *)(param_1 + 3) = param_2;
  param_1[1] = param_5;
  param_1[2] = param_3;
  *param_1 = param_4;
  *(ushort *)((long)param_1 + 0xc) = (ushort)((ulong)param_5 >> 0x20) | 0x80;
  return;
}


