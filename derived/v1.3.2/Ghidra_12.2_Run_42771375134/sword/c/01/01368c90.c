/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01368c90; name: FUN_01368c90
 */


void FUN_01368c90(undefined8 param_1)

{
  code *pcVar1;
  undefined *local_b0;
  code *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_88 = PTR_LAB_02728910;
  local_80 = 0;
  local_b0 = PTR_LAB_02728918;
  local_a8 = (code *)PTR_FUN_02728920;
  local_a0 = PTR_LAB_02728928;
  local_98 = PTR_LAB_02728930;
  local_30 = 0x879969739bb92d3d;
  uStack_28 = 0;
  local_90 = param_1;
  FUN_01312010(param_1,&local_30,&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined *)0x0;
    local_98 = (undefined *)0x0;
    local_b0 = (undefined *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(&local_90);
  }
  return;
}


