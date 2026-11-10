/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006eba40; name: FUN_006eba40
 */


long FUN_006eba40(long param_1,int param_2,undefined8 *param_3)

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
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,0x2a8,8);
  if (lVar2 == 0) {
    (**(code **)(*plVar3 + 0xb8))(plVar3);
  }
  FUN_006ebb50(lVar2,*param_3);
  *(long **)(lVar2 + 8) = plVar3;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x2a8;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  FUN_006d1120(lVar2);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  *(ulong *)(lVar2 + 0x130) = *(ulong *)(lVar2 + 0x130) | 0x20;
  plVar3 = (long *)(param_1 + (long)param_2 * 8 + 0x50);
  if (*plVar3 != 0) {
    (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
    *plVar3 = 0;
  }
  *plVar3 = lVar2;
  return lVar2;
}


