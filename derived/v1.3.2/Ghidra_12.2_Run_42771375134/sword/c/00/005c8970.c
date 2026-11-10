/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c8970; name: FUN_005c8970
 */


void FUN_005c8970(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = (long)(PTR_DAT_02713ef0 + 0x10);
  FUN_005bf710(param_1 + 1);
  plVar2 = param_1 + 3;
  param_1[0x23] = param_2;
  param_1[0x24] = (long)plVar2;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0x80;
  param_1[0x28] = 1;
  if (param_2 == 0) {
    lVar1 = FUN_005bc740();
    if (lVar1 == 0) {
      lVar1 = FUN_005bc6f0();
    }
    else {
      lVar1 = FUN_005bc740();
    }
    plVar2 = (long *)param_1[0x24];
    param_1[0x23] = lVar1;
  }
  *(undefined1 *)plVar2 = 0;
  plVar2 = param_1 + 0x13;
  param_1[0x29] = param_2;
  param_1[0x2a] = (long)plVar2;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x80;
  param_1[0x2e] = 1;
  if (param_2 == 0) {
    lVar1 = FUN_005bc740();
    if (lVar1 == 0) {
      lVar1 = FUN_005bc6f0();
    }
    else {
      lVar1 = FUN_005bc740();
    }
    plVar2 = (long *)param_1[0x2a];
    param_1[0x29] = lVar1;
  }
  *(undefined1 *)plVar2 = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  FUN_005c55d0(param_1 + 0x33,0x10,"Unknown",0xffffffffffffffff);
  FUN_005c55d0(param_1 + 0x35,0x20,"Unknown",0xffffffffffffffff);
  param_1[0x31] = 0x100000001;
  param_1[0x32] = 0x100000001;
  param_1[0x2f] = 1;
  return;
}


