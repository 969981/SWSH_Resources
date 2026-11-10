/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d44e0; name: FUN_007d44e0
 */


void FUN_007d44e0(long param_1,undefined2 param_2)

{
  long lVar1;
  long *plVar2;
  
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 0xac) = param_2;
  plVar2 = *(long **)(param_1 + 0x20);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar2;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,0x170,0x10);
  if (lVar1 == 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_006e1890(lVar1);
}


