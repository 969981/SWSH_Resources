/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d4220; name: FUN_010d4220
 */


void FUN_010d4220(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar2 + 0x2e0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  FUN_010d4b10(param_1,1,0xb61ed9bd84380415,0xd0cb6d805100d312);
  FUN_010d4b10(param_1,1,0xcfad4d7f00d73280,0xd0cb6c805100d15f);
  FUN_010d4b10(param_1,1,0xcfaa4e7f00d4fe5c,0xdbd7cf04636df15a);
  FUN_014ca220(lVar1,0,1,1,0,1);
  FUN_010d4b10(param_1,0,0x5fbe807668d14c60,0x7e249b32c3a86a3c);
  FUN_010d4b10(param_1,0,0x5fbe877668d15845,0x7e249c32c3a86bef);
  FUN_014ca220(lVar1,0,2,1,0,1);
  FUN_010d4b10(param_1,0,0x5fbe867668d15692,0x7e249d32c3a86da2);
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010d43d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


