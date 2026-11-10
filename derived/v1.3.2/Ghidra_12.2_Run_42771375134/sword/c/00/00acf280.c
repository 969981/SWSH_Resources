/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00acf280; name: FUN_00acf280
 */


void FUN_00acf280(long *param_1,undefined4 param_2,ulong param_3,ulong param_4)

{
  char cVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  uint6 local_60;
  ushort uStack_5a;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  (**(code **)(*param_1 + 0x178))();
  uVar2 = FUN_00aa56c0(param_1[0x78] + 0x3d0);
  *(uint *)(param_1 + 0xb4) = uVar2;
  if (uVar2 == 0x10) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar3 = (long *)param_1[0x78];
  lVar7 = plVar3[(ulong)uVar2 * 4 + 0x17];
  if ((param_3 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x79) = param_2;
  }
  _local_60 = (ulong)uStack_5a << 0x30;
  local_58 = (ulong)local_58._6_2_ << 0x30;
  local_50 = 0;
  local_48 = 0xffffffff;
  uVar4 = (**(code **)(*plVar3 + 0x810))(plVar3,param_2);
  FUN_014ad910(&local_60,uVar4);
  if ((param_3 & 1) == 0) {
    plVar3 = (long *)param_1[0x78];
    if ((*(char *)((long)plVar3 + 0x14c2) != '\0') &&
       (((cVar1 = (**(code **)(*plVar3 + 0x8e8))(plVar3,(int)param_1[0x79]), cVar1 == '\x02' ||
         (cVar1 = (**(code **)(*(long *)param_1[0x78] + 0x8e8))
                            ((long *)param_1[0x78],(int)param_1[0x79]), cVar1 == '\x03')) &&
        (((uint)local_60 & 0xfffffffe) == 0x378)))) {
      local_60 = (uint6)(uint)local_60;
    }
    goto LAB_00acf418;
  }
  if ((param_4 & 1) == 0) {
    (**(code **)(*(long *)param_1[0x78] + 0x7f8))((long *)param_1[0x78],param_2);
    uVar5 = FUN_008e1570();
    if ((uVar5 & 1) != 0) {
      _local_60 = param_1[0x9e];
      local_58 = param_1[0x9f];
      local_48 = (undefined4)param_1[0xa1];
      local_50._0_4_ = (undefined4)param_1[0xa0];
    }
    (**(code **)(*(long *)param_1[0x78] + 0x7f8))((long *)param_1[0x78],param_2);
    uVar5 = FUN_008e50f0();
    if ((uVar5 & 1) == 0) goto LAB_00acf418;
    (**(code **)(*(long *)param_1[0x78] + 0x7f8))((long *)param_1[0x78],param_2);
    uVar5 = FUN_008e0a10();
    if ((uVar5 & 1) == 0) goto LAB_00acf418;
    uVar6 = 1;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_1 + 0x504);
  }
  local_50 = CONCAT44(uVar6,(undefined4)local_50);
LAB_00acf418:
  FUN_00acf460(param_1,lVar7,&local_60);
  return;
}


