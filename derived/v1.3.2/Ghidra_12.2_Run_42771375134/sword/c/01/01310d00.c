/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01310d00; name: FUN_01310d00
 */


void FUN_01310d00(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *local_d0;
  code *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar4 = PTR_LAB_02727e80;
  puVar3 = PTR_LAB_02727e78;
  puVar2 = PTR_FUN_02727e70;
  puVar1 = PTR_LAB_02727e68;
  local_a8 = PTR_LAB_02727e60;
  local_a0 = 0;
  local_c0 = PTR_LAB_02727e78;
  local_d0 = PTR_LAB_02727e68;
  local_c8 = (code *)PTR_FUN_02727e70;
  local_b8 = PTR_LAB_02727e80;
  local_50 = 0x7812cfa83cd0147f;
  uStack_48 = 0;
  local_b0 = param_1;
  FUN_01312010(param_1,&local_50,&local_d0);
  pcVar5 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined *)0x0;
    local_b8 = (undefined *)0x0;
    local_d0 = (undefined *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar5)(&local_b0);
  }
  local_a8 = PTR_LAB_02727e88;
  local_a0 = 0;
  local_d0 = puVar1;
  local_c8 = (code *)puVar2;
  local_c0 = puVar3;
  local_b8 = puVar4;
  local_50 = 0xcb2087a9d0717484;
  uStack_48 = 0;
  local_b0 = param_1;
  FUN_01312010(param_1,&local_50,&local_d0);
  pcVar5 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined *)0x0;
    local_b8 = (undefined *)0x0;
    local_d0 = (undefined *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar5)(&local_b0);
  }
  return;
}


