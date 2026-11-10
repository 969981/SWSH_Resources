/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd9170; name: FUN_00dd9170
 */


void FUN_00dd9170(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  local_a0 = *param_2;
  uStack_98 = param_2[1];
  local_90 = param_2[2];
  uStack_88 = param_2[3];
  local_c0 = PTR_LAB_0271ea68;
  local_b8 = (code *)PTR_FUN_0271ea70;
  local_b0 = PTR_LAB_0271ea78;
  local_a8 = (code *)PTR_FUN_0271ea80;
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    if (local_a8 != (code *)0x0) {
      (*local_a8)(&local_a0,puVar1 + 4);
      pcVar2 = local_b8;
      puVar1[3] = local_a8;
      *puVar1 = local_c0;
      puVar1[1] = local_b8;
      puVar1[2] = local_b0;
      if (local_b8 != (code *)0x0) {
        local_b0 = (undefined *)0x0;
        local_a8 = (code *)0x0;
        local_c0 = (undefined *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar2)(&local_a0);
      }
    }
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x80;
    pcVar2 = local_b8;
  }
  else {
    FUN_0101e1a0(param_1,&local_c0);
    pcVar2 = local_b8;
  }
  if (pcVar2 != (code *)0x0) {
    local_b0 = (undefined *)0x0;
    local_a8 = (code *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar2)(&local_a0);
  }
  return;
}


