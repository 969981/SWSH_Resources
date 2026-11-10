/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120c150; name: FUN_0120c150
 */


undefined8 FUN_0120c150(long param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  
  if ((((*(long *)(param_1 + 0x70) != 0) || (*param_2 == 0)) || (*param_3 == 0)) || (*param_4 == 0))
  {
    return 0;
  }
  plVar2 = *(long **)(param_1 + 0x68);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar2;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,0x7a80,8);
  if (lVar1 == 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_006e1890(lVar1);
}


