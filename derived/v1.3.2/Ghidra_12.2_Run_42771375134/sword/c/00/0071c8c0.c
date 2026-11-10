/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0071c8c0; name: FUN_0071c8c0
 */


void FUN_0071c8c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = uVar3;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  lVar2 = param_3[3];
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  param_2[4] = param_3[4];
  param_2[5] = param_3[5];
  param_2[6] = param_3[6];
  lVar2 = param_3[7];
  param_2[7] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN_0071c9a0(param_2 + 8,param_3 + 8);
  param_2[0x46] = param_3[0x46];
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  return;
}


