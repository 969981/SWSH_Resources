/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00760430; name: FUN_00760430
 */


undefined8 FUN_00760430(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 == 0) {
LAB_0076052c:
    uVar3 = 0;
  }
  else {
    if (param_3 < 9) {
      param_3 = 8;
    }
    uVar1 = param_3;
    if (0xfff < param_3) {
      uVar1 = 0x1000;
    }
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    lVar5 = param_2 - uVar2 * uVar1;
    lVar4 = 0;
    if (lVar5 != 0) {
      lVar4 = uVar1 - lVar5;
    }
    lVar4 = lVar4 + param_2;
    lVar5 = FUN_0075f910(param_1,lVar4,param_3,0);
    if (lVar5 == 0) {
      lVar5 = FUN_0075f910(param_1,lVar4 + param_3,param_3,1);
      if (((lVar5 == 0) && (lVar5 = FUN_0075fc70(param_1,lVar4,param_3,0), lVar5 == 0)) &&
         (lVar5 = FUN_0075fc70(param_1,lVar4 + param_3,param_3,1), lVar5 == 0)) goto LAB_0076052c;
    }
    uVar3 = FUN_0075f220(lVar5);
    FUN_0075f270(lVar5,param_3);
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
    lVar4 = FUN_0075f240(lVar5);
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + lVar4;
  }
  return uVar3;
}


