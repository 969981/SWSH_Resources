/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00949860; name: FUN_00949860
 */


uint FUN_00949860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_008e12a0(param_2,0x12);
  uVar2 = FUN_008e12a0(param_3,0x12);
  uVar4 = FUN_008dd610(uVar1);
  if (((((uVar4 & 1) == 0) && (uVar4 = FUN_008dd610(uVar2), (uVar4 & 1) == 0)) &&
      (uVar4 = FUN_008e0a10(param_2), (uVar4 & 1) == 0)) &&
     (uVar4 = FUN_008e0a10(param_3), (uVar4 & 1) == 0)) {
    FUN_00942390(param_1);
    uVar5 = FUN_009319a0();
    uVar2 = FUN_008e0a00(param_2);
    uVar4 = FUN_00913dd0(uVar5,uVar2);
    if ((uVar4 & 1) != 0) {
      FUN_00942390(param_1);
      uVar5 = FUN_009319a0();
      uVar2 = FUN_008e0a00(param_3);
      uVar4 = FUN_00913dd0(uVar5,uVar2);
      if ((uVar4 & 1) != 0) {
        uVar5 = FUN_009423e0(param_1);
        uVar2 = FUN_008e0a00(param_3);
        uVar3 = FUN_0092ea30(uVar5,uVar2,uVar1,param_4);
        uVar3 = uVar3 ^ 1;
        goto LAB_0094995c;
      }
    }
  }
  uVar3 = 1;
LAB_0094995c:
  return uVar3 & 1;
}


