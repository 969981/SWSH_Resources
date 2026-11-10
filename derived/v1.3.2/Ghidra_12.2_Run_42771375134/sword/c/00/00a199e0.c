/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a199e0; name: FUN_00a199e0
 */


void FUN_00a199e0(undefined8 *param_1,long *param_2,long param_3,long *param_4,long *param_5)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,param_3 * 0x1e0,0x10);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  if (param_3 != 0) {
    puVar1 = PTR_DAT_02718ee0 + 0x10;
    lVar3 = *param_5;
    plVar2[1] = *param_4;
    plVar2[2] = lVar3;
    *plVar2 = (long)puVar1;
                    /* WARNING: Subroutine does not return */
    memset(plVar2 + 4,0,0x14c);
  }
  *param_1 = plVar2;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return;
}


