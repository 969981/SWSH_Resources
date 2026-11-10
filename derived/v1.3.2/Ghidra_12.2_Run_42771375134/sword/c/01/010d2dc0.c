/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d2dc0; name: FUN_010d2dc0
 */


void FUN_010d2dc0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0x5cb) != '\0') {
    local_28 = 0x84800ae152bcc465;
    uVar1 = FUN_00ffdef0(param_1 + 0x100,&local_28);
    FUN_016b2da0(uVar1,0);
    FUN_00ffdc80(param_1 + 0x100,"normal_panel");
    FUN_016b2eb0();
    if ((param_2 & 1) != 0) {
      FUN_010364c0(param_1,1);
    }
    FUN_010364c0(param_1,3);
    *(undefined1 *)(param_1 + 0x5cb) = 0;
  }
  return;
}


