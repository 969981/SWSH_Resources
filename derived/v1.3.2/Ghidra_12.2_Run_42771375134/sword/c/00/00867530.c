/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00867530; name: FUN_00867530
 */


void FUN_00867530(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x10,2);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0x10;
  param_1[3] = 2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  param_1 = (undefined8 *)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_008677c0(param_1,0x10,param_3);
  return;
}


