/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0134bdc0; name: FUN_0134bdc0
 */


void FUN_0134bdc0(undefined8 param_1)

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
  
  puVar4 = PTR_LAB_02728378;
  puVar3 = PTR_LAB_02728370;
  puVar2 = PTR_FUN_02728368;
  puVar1 = PTR_LAB_02728360;
  local_a8 = PTR_LAB_02728358;
  local_a0 = 0;
  local_c0 = PTR_LAB_02728370;
  local_d0 = PTR_LAB_02728360;
  local_c8 = (code *)PTR_FUN_02728368;
  local_b8 = PTR_LAB_02728378;
  local_50 = 0x16debc0f88d5c007;
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
  local_a8 = PTR_LAB_02728380;
  local_a0 = 0;
  local_d0 = puVar1;
  local_c8 = (code *)puVar2;
  local_c0 = puVar3;
  local_b8 = puVar4;
  local_50 = 0xb64b889ec73aee52;
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


