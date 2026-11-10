/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a7c60; name: FUN_004a7c60
 */


void FUN_004a7c60(undefined8 *param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)((long)param_1 + 0xc);
  if (((uVar1 & 0x7c) == 4) && (param_1[2] != 0)) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    uVar1 = *(ushort *)((long)param_1 + 0xc);
    param_1[2] = 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0xffffffff00000000;
  param_1[2] = 0;
  *(ushort *)((long)param_1 + 0xc) = uVar1 & 0xf800;
  return;
}


