/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a92a60; name: FUN_00a92a60
 */


undefined1  [16] FUN_00a92a60(long param_1)

{
  float fVar3;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (*(char *)(param_1 + 0x81) != '\0') {
    auVar1._12_4_ = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xd8) >> 0x20);
    auVar1._0_12_ = *(undefined1 (*) [12])(param_1 + 0xd0);
    return auVar1;
  }
  auVar2._0_4_ = (float)*(undefined8 *)(param_1 + 0x30) + (float)*(undefined8 *)(param_1 + 0x60);
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) +
          (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
  auVar2._8_4_ = (float)*(undefined8 *)(param_1 + 0x38) + (float)*(undefined8 *)(param_1 + 0x68);
  auVar2._12_4_ =
       (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20) +
       (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
  if (*(char *)(param_1 + 0xc1) != '\0') {
    fVar3 = (float)((uint)fVar3 ^
                   ((uint)fVar3 ^ (uint)*(float *)(param_1 + 0x58)) &
                   -(uint)(fVar3 < *(float *)(param_1 + 0x58)));
  }
  auVar2._4_4_ = fVar3;
  return auVar2;
}


