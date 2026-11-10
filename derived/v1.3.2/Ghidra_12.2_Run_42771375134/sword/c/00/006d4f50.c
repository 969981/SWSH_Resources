/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d4f50; name: FUN_006d4f50
 */


void FUN_006d4f50(MultiWaitType *param_1,int param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x80) != 0)) {
    lVar1 = *(long *)(lVar1 + *(long *)(lVar1 + 0x80) * 8 + -8);
    if (lVar1 != 0) goto LAB_006d4fa0;
  }
  lVar1 = FUN_0075ecb0();
LAB_006d4fa0:
  *(long *)(param_1 + 0x48) = lVar1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_006d4fd0(param_1 + 0x30,(long)param_2);
  nn::os::InitializeMultiWait(param_1);
  return;
}


