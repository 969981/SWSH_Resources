/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c63840; name: FUN_00c63840
 */


void FUN_00c63840(long param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_120 [96];
  code *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [96];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *local_28;
  
  if (((DAT_02a57600 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_02a57600), iVar2 != 0)) {
    DAT_02a575f8 = *(long *)PTR_DAT_02710560 + -0x200000;
    __cxa_guard_release(&DAT_02a57600);
  }
  local_c0 = FUN_00c65cb0;
  local_b8 = FUN_00c65d40;
  local_b0 = &LAB_00c65d50;
  puStack_a8 = &LAB_00c65d60;
  if (*(char *)(param_1 + 0x18) == '\0') {
    local_28 = &DAT_02a575f8;
    local_40 = param_2;
    FUN_00c65cb0(auStack_120,&local_40,&local_28);
    if (*(long *)(*(long *)PTR_DAT_0271be40 + 8) != 0) {
      FUN_008d4280(&local_40);
      *(undefined8 *)(param_1 + 0x48) = local_40;
      *(undefined8 *)(param_1 + 0x50) = uStack_38;
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  FUN_00c65d40(auStack_120);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(auStack_a0);
  }
  return;
}


