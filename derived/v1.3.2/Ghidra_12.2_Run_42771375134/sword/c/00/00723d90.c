/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00723d90; name: FUN_00723d90
 */


void FUN_00723d90(undefined4 *param_1)

{
  long lVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x80) != 0)) {
    lVar1 = *(long *)(lVar1 + *(long *)(lVar1 + 0x80) * 8 + -8);
    if (lVar1 != 0) goto LAB_00723dd8;
  }
  lVar1 = FUN_0075ecb0();
LAB_00723dd8:
  *(long *)(param_1 + 8) = lVar1;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  FUN_006cee90(param_1 + 0xf,1,0);
  *(undefined8 *)(param_1 + 0x12) = 0;
  return;
}


