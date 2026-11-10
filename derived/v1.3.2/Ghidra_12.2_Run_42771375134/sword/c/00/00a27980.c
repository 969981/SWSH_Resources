/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a27980; name: FUN_00a27980
 */


void FUN_00a27980(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar3;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,0x90,8);
  if (lVar2 == 0) {
    (**(code **)(*plVar3 + 0xb8))(plVar3);
  }
  FUN_00883c20(lVar2,plVar3);
  *(long **)(lVar2 + 8) = plVar3;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x90;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x200) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x200) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  *(long *)(param_1 + 0x200) = lVar2;
  return;
}


