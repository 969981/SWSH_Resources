/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0b6f0; name: FUN_00a0b6f0
 */


void FUN_00a0b6f0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x58) != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_28 = *(undefined8 *)(param_1 + 8);
  FUN_00a0b7c0(&local_48,local_28,7,&local_28);
  lVar2 = local_48;
  local_48 = 0;
  lVar3 = *(long *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar2;
  puVar1 = (undefined8 *)(param_1 + 0x60);
  if (lVar3 == 0) {
    *(undefined8 *)(param_1 + 0x68) = local_38;
    *(undefined8 *)(param_1 + 0x70) = local_30;
    *puVar1 = local_40;
    return;
  }
  FUN_00a0be00(puVar1);
  lVar2 = local_48;
  *puVar1 = local_40;
  *(undefined8 *)(param_1 + 0x68) = local_38;
  *(undefined8 *)(param_1 + 0x70) = local_30;
  local_48 = 0;
  if (lVar2 != 0) {
    FUN_00a0be00(&local_40);
  }
  return;
}


