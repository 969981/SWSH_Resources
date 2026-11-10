/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00883990; name: FUN_00883990
 */


int FUN_00883990(long *param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 local_60;
  undefined2 local_5c;
  int local_58;
  undefined1 local_54;
  
  iVar3 = FUN_008783b0(param_2);
  uVar4 = FUN_008783c0(param_2);
  uVar6 = FUN_00879860(param_2);
  if ((((uVar6 & 1) == 0) ||
      (((iVar5 = FUN_008783b0(param_2), iVar5 != 0x19 && (iVar5 != 0x34)) && (iVar5 != 0x85)))) &&
     (uVar6 = FUN_0087d610(param_2,2), (uVar6 & 1) == 0)) {
    uVar2 = FUN_008787f0(param_2);
    uVar6 = (**(code **)(*param_1 + 0x28))(param_1,uVar2);
    if ((iVar3 == 0x40) || ((uVar6 & 1) == 0)) {
      FUN_00864d20(iVar3,uVar4);
      bVar1 = FUN_00864d90();
      if (bVar1 != 0) {
        uVar7 = 0;
        do {
          local_60 = FUN_00864da0(uVar7);
          local_5c = FUN_00864db0(uVar7);
          iVar5 = FUN_00864dc0(uVar7);
          local_58 = iVar5;
          local_54 = FUN_00864df0(uVar7);
          uVar6 = FUN_00883ae0(param_1,param_2,param_3,&local_60);
          if ((uVar6 & 1) != 0) {
            *param_4 = uVar7;
            return iVar5;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < bVar1);
      }
    }
  }
  return iVar3;
}


