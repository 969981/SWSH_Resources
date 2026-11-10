/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094cb40; name: FUN_0094cb40
 */


void FUN_0094cb40(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  *param_2 = 0;
  FUN_00942390();
  uVar1 = FUN_009319a0();
  uVar2 = FUN_00913dd0(uVar1,*param_3);
  if ((uVar2 & 1) != 0) {
    FUN_009424e0(param_1,*param_3);
    uVar2 = FUN_008e1600();
    if ((uVar2 & 1) == 0) {
      uVar1 = FUN_009423b0(param_1);
      FUN_00939310(uVar1,*param_3,param_3[1],param_3[2],param_3[3],param_3[4],param_3[5],param_3[6],
                   param_3[7],param_3[8]);
      *param_2 = 1;
    }
  }
  return;
}


