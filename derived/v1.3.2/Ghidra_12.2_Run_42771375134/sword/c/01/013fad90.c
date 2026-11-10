/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013fad90; name: FUN_013fad90
 */


void FUN_013fad90(long param_1)

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
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,0x3c0,0x10);
  if (lVar2 == 0) {
    (**(code **)(*plVar3 + 0xb8))(plVar3);
  }
  FUN_0168a080(lVar2,plVar3);
  *(undefined8 *)(lVar2 + 0x380) = 0x3c0;
  *(long **)(lVar2 + 0x370) = plVar3;
  *(long *)(lVar2 + 0x378) = lVar2;
  *(undefined8 *)(lVar2 + 0x388) = 0x10;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x3b0) + 0x10))(lVar2 + 0x3b0);
  }
  lVar1 = *(long *)(param_1 + 0xa0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x3b0) + 0x18))(lVar1 + 0x3b0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  *(long *)(param_1 + 0xa0) = lVar2;
  FUN_0168a180(lVar2,0);
  return;
}


