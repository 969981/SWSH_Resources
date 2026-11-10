/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075da40; name: FUN_0075da40
 */


void FUN_0075da40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  FUN_0175eea0();
  FUN_01760580(param_1,param_3,0);
  FUN_0175f270(param_1,0xffffffff);
  uVar1 = FUN_0175dbf0(param_1,0xfff0b9d8);
  FUN_0175ef30(param_1,0xfffffffe);
  if (param_1 != 0) {
    if (uVar1 < 0xfffffffe) {
      FUN_01760c90(param_1,0xfff0b9d8,(long)(int)uVar1);
      FUN_01761120(param_1,PTR_DAT_02715fb0);
    }
    else {
      FUN_01760310(param_1);
      FUN_01761120(param_1,PTR_DAT_02715fb0);
      if (uVar1 == 0xfffffffe) goto LAB_0075db00;
    }
    FUN_0175dcd0(param_1,0xfff0b9d8,uVar1);
  }
LAB_0075db00:
  FUN_017606a0(param_1,param_4);
  FUN_01761120(param_1,PTR_DAT_02715fd0);
  return;
}


