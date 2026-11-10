/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a13220; name: FUN_00a13220
 */


void FUN_00a13220(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x100;
  if ((int)param_2 == 2) {
    FUN_00ffa290(param_1,1,1);
    FUN_00ffd430(lVar1,&DAT_02154630);
    FUN_00ffd010(lVar1,&DAT_02154638);
    return;
  }
  if ((int)param_2 == 1) {
    FUN_00ffa290(param_1,param_2,1);
    FUN_00ffd430(lVar1,&DAT_02154638);
    FUN_00ffd010(lVar1,&DAT_02154630);
    return;
  }
  FUN_00ffd430(lVar1,&DAT_02154630);
  FUN_00ffd430(lVar1,&DAT_02154638);
  FUN_00ffa290(param_1,0,1);
  return;
}


