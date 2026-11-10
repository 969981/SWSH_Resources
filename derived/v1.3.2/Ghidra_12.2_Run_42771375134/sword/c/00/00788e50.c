/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00788e50; name: FUN_00788e50
 */


undefined8 FUN_00788e50(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long local_28;
  
  thunk_FUN_006fd800(&local_28,param_2);
  *param_1 = *(undefined8 *)(local_28 + 0x58);
  plVar1 = *(long **)(param_3 + 8);
  if (plVar1 < *(long **)(param_3 + 0x10)) {
    uVar3 = *(undefined8 *)(param_3 + 0x18);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar3;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    *plVar1 = local_28;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 8;
  }
  else {
    FUN_00789170(param_3,&local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return 1;
}


