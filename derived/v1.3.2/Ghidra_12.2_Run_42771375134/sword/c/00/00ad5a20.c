/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad5a20; name: FUN_00ad5a20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ad5a20(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [12];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar5 = (**(code **)(*param_2 + 400))();
  if ((uVar5 & 1) == 0) {
LAB_00ad5af0:
    uVar4 = _DAT_01d4b130;
    uVar3 = _UNK_01d4a138;
    uVar2 = _DAT_01d4a130;
    param_1[1] = _UNK_01d4b138;
    *param_1 = uVar4;
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    return;
  }
  (**(code **)(*param_2 + 0x1d8))(&local_40,param_2);
  if ((int)param_2[0x9a] == 2) {
    lVar6 = FUN_00ad1430(param_2);
    if (lVar6 == 0) goto LAB_00ad5af0;
    auVar1 = FUN_00ac7610(param_2);
    uStack_38 = CONCAT44((int)((ulong)uStack_38 >> 0x20),(float)uStack_38 * auVar1._8_4_);
    local_40 = CONCAT44((float)((ulong)local_40 >> 0x20) * auVar1._4_4_,
                        (float)local_40 * auVar1._0_4_);
    local_30 = CONCAT44(auVar1._4_4_ * (float)((ulong)local_30 >> 0x20),
                        auVar1._0_4_ * (float)local_30);
    uStack_28 = CONCAT44((int)((ulong)uStack_28 >> 0x20),auVar1._8_4_ * (float)uStack_28);
  }
  *param_1 = local_40;
  param_1[1] = uStack_38;
  param_1[2] = local_30;
  param_1[3] = uStack_28;
  return;
}


