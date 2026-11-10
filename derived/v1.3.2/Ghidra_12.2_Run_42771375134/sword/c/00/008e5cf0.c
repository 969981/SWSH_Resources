/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e5cf0; name: FUN_008e5cf0
 */


void FUN_008e5cf0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)((long)param_1 + 0x27) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 5) = 3;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,6,1);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  FUN_0093daa0(lVar1);
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  lVar2 = *param_1;
  *param_1 = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],lVar2,param_1[2],param_1[3]);
  }
  param_1[1] = (long)param_2;
  param_1[2] = 6;
  param_1[3] = 1;
  return;
}


