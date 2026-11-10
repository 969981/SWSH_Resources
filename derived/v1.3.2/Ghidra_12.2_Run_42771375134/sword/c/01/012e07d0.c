/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e07d0; name: FUN_012e07d0
 */


void FUN_012e07d0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_d0 [2];
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined1 auStack_a0 [96];
  
  local_b0 = 0;
  local_a8 = (code *)0x0;
  local_c0 = 0;
  local_b8 = (code *)0x0;
  local_d0[0] = param_2;
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,auStack_a0);
    local_c0 = *param_3;
    local_b8 = (code *)param_3[1];
    local_b0 = param_3[2];
    local_a8 = (code *)param_3[3];
  }
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  if (puVar1 < *(undefined8 **)(param_1 + 0x120)) {
    uVar4 = *(undefined8 *)(param_1 + 0x128);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    puVar1[3] = 0;
    *puVar1 = local_d0[0];
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    if (local_a8 != (code *)0x0) {
      (*local_a8)(auStack_a0,puVar1 + 6);
      pcVar2 = local_b8;
      puVar1[5] = local_a8;
      puVar1[2] = local_c0;
      puVar1[3] = local_b8;
      puVar1[4] = local_b0;
      if (local_b8 != (code *)0x0) {
        local_b0 = 0;
        local_a8 = (code *)0x0;
        local_c0 = 0;
        local_b8 = (code *)0x0;
        (*pcVar2)(auStack_a0);
      }
    }
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + 0x90;
    pcVar2 = local_b8;
  }
  else {
    FUN_012e1bd0(param_1 + 0x110,local_d0);
    pcVar2 = local_b8;
  }
  if (pcVar2 != (code *)0x0) {
    local_b0 = 0;
    local_a8 = (code *)0x0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar2)(auStack_a0);
  }
  return;
}


