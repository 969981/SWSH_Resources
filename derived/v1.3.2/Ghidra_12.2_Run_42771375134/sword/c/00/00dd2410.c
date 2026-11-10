/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd2410; name: FUN_00dd2410
 */


void FUN_00dd2410(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  code *local_a8;
  undefined8 local_a0;
  long lStack_98;
  
  uVar4 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_c0 = &LAB_00dd2580;
  local_b8 = FUN_00dd2690;
  local_b0 = &LAB_00dd26d0;
  local_a8 = FUN_00dd2700;
  puVar1 = *(undefined8 **)(param_1 + 8);
  local_a0 = uVar4;
  lStack_98 = lVar3;
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
        local_b0 = (undefined1 *)0x0;
        local_a8 = (code *)0x0;
        local_c0 = (undefined1 *)0x0;
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
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar2)(&local_a0);
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}


