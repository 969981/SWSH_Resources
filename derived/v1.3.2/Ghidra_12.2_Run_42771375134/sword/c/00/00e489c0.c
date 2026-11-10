/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e489c0; name: FUN_00e489c0
 */


void FUN_00e489c0(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_006d86d0(param_1,0x80010180);
  puVar1 = PTR_DAT_0271f878;
  param_1[0xf] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x90);
  param_1[10] = (long)(puVar1 + 0x100);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x148,8);
  if (lVar2 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_006e1890(lVar2);
}


