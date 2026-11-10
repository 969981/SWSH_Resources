/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099e8a0; name: FUN_0099e8a0
 */


undefined8 FUN_0099e8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char local_38 [4];
  char local_34 [4];
  
  local_34[0] = '\0';
  local_38[0] = '\x1f';
  uVar3 = FUN_008e0b50(param_2);
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_009423e0(param_1);
    uVar3 = FUN_0092d720(uVar4,param_2,param_4,param_3,local_38,local_34);
    if ((uVar3 & 1) == 0) {
      if (local_34[0] == '\0') {
        FUN_009423b0(param_1);
        FUN_009366b0();
      }
      return 0;
    }
  }
  uVar3 = FUN_008e0b50(param_2);
  if ((uVar3 & 1) == 0) {
    FUN_0099e9d0(param_1,param_2,param_3,param_4);
  }
  uVar4 = FUN_009423e0(param_1);
  FUN_0092d8b0(uVar4,param_2);
  uVar3 = FUN_008e0b50(param_2);
  cVar1 = local_38[0];
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_008e2ec0(param_2);
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_009423b0(param_1);
      uVar2 = FUN_008e0a00(param_2);
      FUN_0093a080(uVar4,uVar2,1);
    }
    if (cVar1 != '\x1f') {
      uVar4 = FUN_009423b0(param_1);
      FUN_0093a080(uVar4,cVar1,1);
      return 1;
    }
  }
  return 1;
}


