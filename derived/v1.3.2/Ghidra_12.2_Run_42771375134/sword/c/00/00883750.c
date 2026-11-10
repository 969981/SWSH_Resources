/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00883750; name: FUN_00883750
 */


int FUN_00883750(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                uint *param_5)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 local_60;
  undefined2 local_5c;
  int local_58;
  undefined1 local_54;
  
  iVar4 = FUN_008783b0(param_2);
  uVar5 = FUN_008783c0(param_2);
  uVar7 = FUN_00879860(param_2);
  if ((((uVar7 & 1) == 0) ||
      (((iVar6 = FUN_008783b0(param_2), iVar6 != 0x19 && (iVar6 != 0x34)) && (iVar6 != 0x85)))) &&
     (uVar7 = FUN_0087d610(param_2,2), (uVar7 & 1) == 0)) {
    uVar2 = FUN_008787f0(param_2);
    uVar7 = (**(code **)(*param_1 + 0x28))(param_1,uVar2);
    if ((uVar7 & 1) == 0) {
      if ((iVar4 == 0x29e) && (sVar3 = FUN_008783c0(param_2), sVar3 == 5)) {
        iVar4 = 0x29e;
      }
      else {
        FUN_00864d20(iVar4,uVar5);
        bVar1 = FUN_00864d90();
        if (bVar1 != 0) {
          uVar9 = 0;
          do {
            local_60 = FUN_00864da0(uVar9);
            local_5c = FUN_00864db0(uVar9);
            iVar6 = FUN_00864dc0(uVar9);
            local_58 = iVar6;
            uVar8 = FUN_00864df0(uVar9);
            local_54 = (undefined1)uVar8;
            uVar7 = FUN_008838c0(uVar8,param_2,param_3,param_4,&local_60);
            if ((uVar7 & 1) != 0) {
              if (param_5 == (uint *)0x0) {
                return iVar6;
              }
              *param_5 = uVar9;
              return iVar6;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < bVar1);
        }
      }
    }
  }
  return iVar4;
}


