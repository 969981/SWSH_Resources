/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca1dc0; name: FUN_00ca1dc0
 */


void FUN_00ca1dc0(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 auStack_90 [104];
  long local_28;
  
  lVar2 = *param_2;
  local_28 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_b0 = &LAB_00ca47d0;
  local_a8 = FUN_00ca4800;
  local_a0 = &LAB_00ca4810;
  puStack_98 = &LAB_00ca4820;
  FUN_00ca1e70(&local_28,&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(auStack_90);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


