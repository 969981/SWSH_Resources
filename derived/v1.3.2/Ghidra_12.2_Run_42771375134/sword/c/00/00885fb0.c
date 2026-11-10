/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00885fb0; name: FUN_00885fb0
 */


void FUN_00885fb0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  puVar1 = PTR_DAT_02717428;
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x48,2);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar2 = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar3 = param_1[2];
  param_1[2] = (long)puVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar3,param_1[4],param_1[5]);
  }
  param_1[3] = (long)param_2;
  param_1[4] = 0x48;
  param_1[5] = 2;
  return;
}


