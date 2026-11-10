/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01342460; name: FUN_01342460
 */


void FUN_01342460(undefined8 param_1)

{
  code *pcVar1;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 auStack_90 [96];
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_b0 = &LAB_01342b60;
  local_a8 = FUN_01342b70;
  local_a0 = &LAB_01342b80;
  local_98 = &LAB_01342b90;
  local_30 = 0xb29b22742b6691e;
  uStack_28 = 0;
  FUN_01312010(param_1,&local_30,&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(auStack_90);
  }
  local_b0 = &LAB_01342ba0;
  local_a8 = FUN_01342bb0;
  local_a0 = &LAB_01342bc0;
  local_98 = &LAB_01342bd0;
  local_30 = 0x275dbcecced052c0;
  uStack_28 = 0;
  FUN_01312010(param_1,&local_30,&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(auStack_90);
  }
  return;
}


