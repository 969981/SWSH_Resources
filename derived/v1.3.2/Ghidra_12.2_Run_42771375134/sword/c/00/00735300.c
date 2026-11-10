/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00735300; name: FUN_00735300
 */


void FUN_00735300(undefined8 *param_1)

{
  long lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x80) != 0)) {
    lVar1 = *(long *)(lVar1 + *(long *)(lVar1 + 0x80) * 8 + -8);
    if (lVar1 != 0) goto LAB_00735344;
  }
  lVar1 = FUN_0075ecb0();
LAB_00735344:
  param_1[3] = lVar1;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_006cee90((long)param_1 + 0x34,1,0);
  param_1[8] = 0;
  return;
}


