/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0101e050; name: FUN_0101e050
 */


void FUN_0101e050(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  code *local_98;
  undefined1 auStack_90 [96];
  
  local_b0 = &LAB_0101e450;
  local_a8 = FUN_0101e480;
  local_a0 = &LAB_0101e490;
  local_98 = FUN_0101e4a0;
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
    if (local_98 != (code *)0x0) {
      (*local_98)(auStack_90,puVar1 + 4);
      pcVar2 = local_a8;
      puVar1[3] = local_98;
      *puVar1 = local_b0;
      puVar1[1] = local_a8;
      puVar1[2] = local_a0;
      if (local_a8 != (code *)0x0) {
        local_a0 = (undefined1 *)0x0;
        local_98 = (code *)0x0;
        local_b0 = (undefined1 *)0x0;
        local_a8 = (code *)0x0;
        (*pcVar2)(auStack_90);
      }
    }
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x80;
    pcVar2 = local_a8;
  }
  else {
    FUN_0101e1a0(param_1,&local_b0);
    pcVar2 = local_a8;
  }
  if (pcVar2 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar2)(auStack_90);
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}


