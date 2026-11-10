/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a6c20; name: FUN_013a6c20
 */


void FUN_013a6c20(long param_1)

{
  code *pcVar1;
  undefined8 local_a0;
  code *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [96];
  
  FUN_013a64b0();
  (**(code **)(*(long *)(param_1 + 0x5a0) + 0x60))(param_1 + 0x5a0);
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  local_98 = (code *)0x0;
  FUN_01390050(param_1,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    local_98 = (code *)0x0;
    (*pcVar1)(auStack_80);
  }
  FUN_012dc480(param_1,0);
  return;
}


