/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c64a80; name: FUN_00c64a80
 */


/* WARNING: Removing unreachable block (ram,0x00c64c4c) */

void FUN_00c64a80(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 auStack_230 [96];
  code *local_1d0;
  code *local_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 auStack_1b0 [96];
  code *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 auStack_130 [96];
  code *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [96];
  undefined *local_50;
  undefined *local_48;
  
  puVar1 = PTR_DAT_027108e0;
  local_d0 = FUN_00c67ed0;
  local_c8 = FUN_00c684b0;
  local_150 = FUN_00c67ed0;
  local_148 = FUN_00c684b0;
  local_c0 = &LAB_00c684c0;
  puStack_b8 = &LAB_00c684d0;
  local_140 = &LAB_00c684c0;
  puStack_138 = &LAB_00c684d0;
  if (*(char *)(param_1 + 0x29b8) == '\0') {
    local_48 = PTR_DAT_0271c058;
    local_1d0 = *(code **)(*(long *)PTR_DAT_027108e0 + 0x48);
    FUN_00c67ed0(auStack_130,&local_1d0,&local_48);
    FUN_00c60880(param_1 + 0x29b0);
    *(char *)(param_1 + 0x29b8) = '\x01';
    pcVar2 = local_148;
    if (local_148 == (code *)0x0) goto LAB_00c64b0c;
  }
  else {
    pcVar2 = FUN_00c684b0;
  }
  local_140 = (undefined1 *)0x0;
  puStack_138 = (undefined1 *)0x0;
  local_150 = (code *)0x0;
  local_148 = (code *)0x0;
  (*pcVar2)(auStack_130);
LAB_00c64b0c:
  local_1c0 = &LAB_00c68580;
  puStack_1b8 = &LAB_00c68590;
  local_1d0 = FUN_00c684e0;
  local_1c8 = FUN_00c68570;
  if (*(char *)(param_1 + 0x3480) == '\0') {
    local_50 = PTR_DAT_0271c058;
    local_48 = *(undefined **)(*(long *)puVar1 + 0x28);
    FUN_00c684e0(auStack_230,&local_48,&local_50);
    FUN_00c625f0(param_1 + 0x3478);
    *(char *)(param_1 + 0x3480) = '\x01';
  }
  FUN_00c68570(auStack_230);
  pcVar2 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (undefined1 *)0x0;
    puStack_1b8 = (undefined1 *)0x0;
    local_1d0 = (code *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar2)(auStack_1b0);
  }
  pcVar2 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    puStack_b8 = (undefined1 *)0x0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar2)(auStack_b0);
  }
  return;
}


