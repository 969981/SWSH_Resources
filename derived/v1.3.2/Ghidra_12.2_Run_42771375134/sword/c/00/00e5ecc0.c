/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5ecc0; name: FUN_00e5ecc0
 */


long FUN_00e5ecc0(long param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_34;
  long local_28;
  
  local_34 = param_2;
  lVar1 = FUN_00e62b10(&local_28,*(undefined8 *)(param_1 + 8),param_1 + 0x288,&local_34);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_28 = lVar1;
  FUN_006d9640(param_1,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  plVar2 = *(long **)(param_1 + 0x2e0);
  if (plVar2 == *(long **)(param_1 + 0x2e8)) {
    local_28 = lVar1;
    FUN_00e62c30(param_1 + 0x2d8,&local_28);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x2f0);
    local_28 = lVar1;
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = uVar3;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
    *plVar2 = local_28;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
    *(long *)(param_1 + 0x2e0) = *(long *)(param_1 + 0x2e0) + 8;
  }
  return local_28;
}


