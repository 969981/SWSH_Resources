/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00882f80; name: FUN_00882f80
 */


undefined4
FUN_00882f80(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint *param_5)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  
  uVar3 = FUN_008783b0(param_2);
  uVar4 = FUN_008783c0(param_2);
  uVar6 = FUN_00879860(param_2);
  if ((((uVar6 & 1) == 0) ||
      (((iVar5 = FUN_008783b0(param_2), iVar5 != 0x19 && (iVar5 != 0x34)) && (iVar5 != 0x85)))) &&
     (uVar6 = FUN_0087d610(param_2,2), (uVar6 & 1) == 0)) {
    uVar2 = FUN_008787f0(param_2);
    uVar6 = (**(code **)(*param_1 + 0x28))(param_1,uVar2);
    if ((uVar6 & 1) == 0) {
      FUN_00864d20(uVar3,uVar4);
      bVar1 = FUN_00864d90();
      if (bVar1 != 0) {
        uVar8 = 0;
        do {
          local_60 = FUN_00864da0(uVar8);
          local_5c = FUN_00864db0(uVar8);
          uVar4 = FUN_00864dc0(uVar8);
          local_58 = uVar4;
          uVar7 = FUN_00864df0(uVar8);
          local_54 = (undefined1)uVar7;
          uVar6 = FUN_008830d0(uVar7,param_2,param_3,param_4,&local_60);
          if ((uVar6 & 1) != 0) {
            if (param_5 == (uint *)0x0) {
              return uVar4;
            }
            *param_5 = uVar8;
            return uVar4;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < bVar1);
      }
    }
  }
  return uVar3;
}


