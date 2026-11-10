/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01420690; name: FUN_01420690
 */


void FUN_01420690(long param_1)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  long alStack_80 [12];
  
  if (*(char *)(param_1 + 0x6b8) != '\0') {
    *(undefined1 *)(param_1 + 0x6b8) = 0;
    local_a0 = &LAB_01421410;
    local_98 = FUN_01421480;
    local_90 = &LAB_01421490;
    local_88 = &LAB_014214a0;
    alStack_80[0] = param_1;
    FUN_00ffd030(param_1 + 0x100,"anime_out",&local_a0);
    pcVar1 = local_98;
    if (local_98 != (code *)0x0) {
      local_90 = (undefined1 *)0x0;
      local_88 = (undefined1 *)0x0;
      local_a0 = (undefined1 *)0x0;
      local_98 = (code *)0x0;
      (*pcVar1)(alStack_80);
    }
  }
  return;
}


