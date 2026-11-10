/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1ef10; name: FUN_00a1ef10
 */


void FUN_00a1ef10(long param_1,undefined8 param_2,byte param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long local_a0;
  undefined8 uStack_98;
  byte local_90;
  undefined8 local_40;
  undefined8 local_38;
  
  bVar2 = (param_3 & 1) == 0;
  local_38 = 0x98a1b03a6fb843a5;
  if (bVar2) {
    local_38 = 0x6cd33a7b91f8f0f8;
  }
  local_40 = 0x965722f047194102;
  if (bVar2) {
    local_40 = 0x416a99ca0916df8f;
  }
  FUN_00ffd010(param_1 + 0x100,&local_38);
  local_c0 = &LAB_00a1f9c0;
  local_b8 = FUN_00a1fa20;
  local_b0 = &LAB_00a1fa30;
  local_a8 = &LAB_00a1fa50;
  local_a0 = param_1;
  uStack_98 = param_2;
  local_90 = param_3 & 1;
  FUN_00ffd120(param_1 + 0x100,&local_40,&local_c0);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(&local_a0);
  }
  return;
}


