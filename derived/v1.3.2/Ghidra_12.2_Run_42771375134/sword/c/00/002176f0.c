/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002176f0; name: FUN_002176f0
 */


void FUN_002176f0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 1) = 0xf8;
  *param_1 = "HeightField";
  param_1[4] = "HeightScale";
  puVar1 = PTR_LAB_02711cb0;
  param_1[2] = PTR_LAB_02711ca8;
  param_1[3] = puVar1;
  puVar2 = PTR_LAB_02711cc0;
  puVar1 = PTR_LAB_02711cb8;
  *(undefined4 *)(param_1 + 5) = 0xf9;
  param_1[6] = puVar1;
  param_1[7] = puVar2;
  param_1[8] = "RowScale";
  puVar1 = PTR_LAB_02711cc8;
  *(undefined4 *)(param_1 + 9) = 0xfa;
  puVar2 = PTR_LAB_02711cd0;
  param_1[10] = puVar1;
  param_1[0xb] = puVar2;
  param_1[0xc] = "ColumnScale";
  *(undefined4 *)(param_1 + 0xd) = 0xfb;
  puVar1 = PTR_LAB_02711cd8;
  param_1[0xe] = PTR_LAB_02711ce8;
  param_1[0xf] = puVar1;
  param_1[0x10] = "HeightFieldFlags";
  puVar2 = PTR_LAB_02711cf0;
  puVar1 = PTR_LAB_02711ce0;
  *(undefined4 *)(param_1 + 0x11) = 0xfc;
  param_1[0x12] = puVar2;
  param_1[0x13] = puVar1;
  return;
}


