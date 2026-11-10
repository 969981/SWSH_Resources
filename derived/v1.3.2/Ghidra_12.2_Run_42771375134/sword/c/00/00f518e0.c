/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f518e0; name: FUN_00f518e0
 */


void FUN_00f518e0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 *local_80 [12];
  undefined8 local_18;
  
  if ((*(char *)(param_1 + 0x44) != '\0') && (*(char *)(*(long *)(param_1 + 0x48) + 0x2b0) != '\0'))
  {
    local_80[0] = &local_18;
    local_a0 = &LAB_00f55360;
    local_98 = FUN_00f55410;
    local_90 = &LAB_00f55420;
    local_88 = &LAB_00f55430;
    local_18 = param_2;
    FUN_00de7380(*(long *)(param_1 + 0x48),&local_a0);
    pcVar1 = local_98;
    if (local_98 != (code *)0x0) {
      local_90 = (undefined1 *)0x0;
      local_88 = (undefined1 *)0x0;
      local_a0 = (undefined1 *)0x0;
      local_98 = (code *)0x0;
      (*pcVar1)(local_80);
    }
  }
  return;
}


