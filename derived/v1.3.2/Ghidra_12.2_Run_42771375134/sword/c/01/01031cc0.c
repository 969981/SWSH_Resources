/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01031cc0; name: FUN_01031cc0
 */


void FUN_01031cc0(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_1f8 [104];
  undefined1 *local_190;
  code *local_188;
  code *local_180;
  undefined1 *local_178;
  long *local_170 [12];
  undefined *local_110 [8];
  undefined1 *local_d0;
  code *local_c8;
  code *local_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [112];
  undefined8 local_40;
  undefined4 local_38;
  
  local_40 = 0;
  local_38 = 0;
  (**(code **)(*param_1 + 0x10))(param_1,&local_40);
  FUN_010345b0(local_110,local_40,*(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x288),local_38);
  pcVar1 = local_c8;
  local_190 = &LAB_01033dd0;
  local_188 = FUN_01033df0;
  local_180 = FUN_01033e00;
  local_178 = &LAB_01033e10;
  local_170[0] = param_1;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    puStack_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar1)(auStack_b0);
    if (local_180 == (code *)0x0) goto LAB_01031d8c;
  }
  (*local_180)(local_170,auStack_b0);
  local_c0 = local_180;
  puStack_b8 = local_178;
  local_d0 = local_190;
  local_c8 = local_188;
LAB_01031d8c:
  pcVar1 = local_188;
  if (local_188 != (code *)0x0) {
    local_180 = (code *)0x0;
    local_178 = (undefined1 *)0x0;
    local_190 = (undefined1 *)0x0;
    local_188 = (code *)0x0;
    (*pcVar1)(local_170);
  }
  FUN_01034150(auStack_1f8,local_110);
  FUN_01034430(auStack_1f8);
  FUN_01031e00(auStack_1f8);
  pcVar1 = local_c8;
  local_110[0] = PTR_DAT_02723870 + 0x10;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    puStack_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar1)(auStack_b0);
  }
  return;
}


