/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00966620; name: FUN_00966620
 */


void FUN_00966620(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((param_5 & 1) != 0) {
    uVar2 = FUN_009423b0(param_1);
    FUN_00937200(uVar2,param_3,0xda);
    return;
  }
  if (param_4 == 1) {
    uVar2 = FUN_009423e0(param_1);
    uVar1 = FUN_0092f100(uVar2,param_2);
    uVar2 = FUN_009423b0(param_1);
    FUN_00937200(uVar2,param_3,uVar1);
    return;
  }
  uVar1 = FUN_008e0a00(param_2);
  uVar2 = FUN_009423b0(param_1);
  FUN_00937200(uVar2,param_2,0xdb);
  uVar2 = FUN_009423b0(param_1);
  FUN_0093a0c0(uVar2,uVar1,0);
  return;
}


