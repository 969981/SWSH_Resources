/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f8c40; name: FUN_006f8c40
 */


void FUN_006f8c40(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = 0;
  if (*(long *)(param_2 + 0xb0) == *(long *)(param_2 + 0xb8)) {
    plVar2 = *(long **)(param_2 + 8);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,0xe8,8);
    if (lVar1 == 0) {
      (**(code **)(*plVar2 + 0xb8))(plVar2);
    }
    FUN_006fa440(lVar1,*(undefined4 *)(param_2 + 0x128));
    *(long **)(lVar1 + 8) = plVar2;
    *(long *)(lVar1 + 0x10) = lVar1;
    *(undefined8 *)(lVar1 + 0x18) = 0xe8;
    *(undefined8 *)(lVar1 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    lVar3 = *param_1;
    *param_1 = lVar1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    *(int *)(param_2 + 0x128) = *(int *)(param_2 + 0x128) + 1;
  }
  else {
    plVar2 = (long *)(*(long *)(param_2 + 0xb8) + -8);
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      plVar2 = (long *)(*(long *)(param_2 + 0xb8) + -8);
    }
    *param_1 = lVar3;
    *(long **)(param_2 + 0xb8) = plVar2;
  }
  return;
}


