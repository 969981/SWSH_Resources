/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00935bf0; name: FUN_00935bf0
 */


undefined8 FUN_00935bf0(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar2 = FUN_00943f40(param_2);
  uVar1 = FUN_00943fb0(param_2);
  uVar5 = FUN_00943fc0(param_2);
  uVar6 = FUN_00943ff0(param_2);
  if ((uVar6 & 1) == 0) {
    iVar4 = FUN_00943f50(param_2);
    if (iVar4 == 2) {
      FUN_00935f70(param_1,uVar2,uVar1,uVar5);
    }
    else {
      if (iVar4 != 1) {
        return 0;
      }
      FUN_00935ec0(param_1,uVar2,uVar1,uVar5);
    }
  }
  else {
    uVar3 = FUN_00944000(param_2);
    iVar4 = FUN_00943f50(param_2);
    if (iVar4 == 2) {
      FUN_00935de0(param_1,uVar2,uVar3,uVar1,uVar5);
    }
    else {
      if (iVar4 != 1) {
        return 0;
      }
      FUN_00935d00(param_1,uVar2,uVar3,uVar1,uVar5);
    }
  }
  return 1;
}


