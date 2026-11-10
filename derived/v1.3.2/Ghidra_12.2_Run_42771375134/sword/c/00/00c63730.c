/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c63730; name: FUN_00c63730
 */


/* WARNING: Removing unreachable block (ram,0x00c6383c) */

void FUN_00c63730(long param_1)

{
  code *pcVar1;
  undefined1 auStack_120 [96];
  code *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [96];
  undefined *local_40;
  undefined8 uStack_38;
  
  FUN_00c63840();
  local_c0 = FUN_00c65d70;
  local_b8 = FUN_00c66120;
  local_b0 = &LAB_00c66130;
  puStack_a8 = &LAB_00c66140;
  if (*(char *)(param_1 + 0x60) == '\0') {
    local_40 = &DAT_0215d458;
    uStack_38 = *(undefined8 *)(*(long *)PTR_DAT_0271be40 + 8);
    FUN_00c65d70(auStack_120,&uStack_38,&local_40);
    FUN_00c59ff0(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  FUN_00c66120(auStack_120);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(auStack_a0);
  }
  FUN_00c63980(param_1,1);
  FUN_00c646c0(param_1);
  FUN_00c64a80(param_1);
  return;
}


