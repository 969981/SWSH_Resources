/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bc820; name: FUN_006bc820
 */


undefined8 FUN_006bc820(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_28;
  
  lVar2 = *(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  local_28 = *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar2 + -8);
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + -8;
  puVar1 = *(undefined8 **)(param_1 + 0x68);
  if (puVar1 == *(undefined8 **)(param_1 + 0x70)) {
    FUN_006bd220(param_1 + 0x60,&local_28);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar3;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    *puVar1 = local_28;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 8;
  }
  return local_28;
}


