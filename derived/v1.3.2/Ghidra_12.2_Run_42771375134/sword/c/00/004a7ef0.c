/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a7ef0; name: FUN_004a7ef0
 */


void FUN_004a7ef0(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 3);
  if (((uVar1 & 0x7c) == 4) && (*(long *)(param_1 + 4) != 0)) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    uVar1 = *(ushort *)(param_1 + 3);
    *(undefined8 *)(param_1 + 4) = 0;
  }
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0xffffffff;
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 1) = 0xffffffff;
  *(ushort *)(param_1 + 3) = uVar1 & 0xf800 | 8;
  return;
}


