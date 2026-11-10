/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a8250; name: FUN_009a8250
 */


void FUN_009a8250(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  char local_40 [4];
  char local_3c [4];
  undefined1 auStack_38 [8];
  
  uVar2 = FUN_008e1600(param_2);
  if ((uVar2 & 1) == 0) {
    FUN_00942390(param_1);
    uVar3 = FUN_009319a0();
    uVar1 = FUN_008e0a00(param_2);
    uVar2 = FUN_00913dd0(uVar3,uVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_009423b0(param_1);
      uVar1 = FUN_008e0a00(param_2);
      FUN_00938820(uVar3,uVar1,param_3,local_40,auStack_38,local_3c);
      if (local_40[0] != '\0') {
        if (local_3c[0] == '\0') {
          FUN_009a8460(param_1,param_2,param_3);
        }
        else {
          FUN_009a8320(param_1,param_2,param_3,auStack_38);
        }
      }
    }
  }
  return;
}


