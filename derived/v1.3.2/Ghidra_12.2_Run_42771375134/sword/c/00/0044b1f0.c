/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044b1f0; name: FUN_0044b1f0
 */


undefined8 FUN_0044b1f0(long *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined4 local_34;
  uint *local_28;
  
  local_34 = param_3;
  local_28 = param_2;
  iVar3 = (**(code **)(*param_1 + 0x88))();
  if (iVar3 == 1) {
    local_28 = param_2 + 1;
    uVar5 = FUN_004854e0(param_1,&local_28,&local_34,0);
    if ((int)uVar5 == 1) {
      uVar1 = *local_28;
      if (uVar1 == 0) {
        uVar5 = 1;
      }
      else {
        local_28 = local_28 + 1;
        lVar6 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar1 << 3);
        param_1[0x17] = lVar6;
        if (lVar6 == 0) {
          uVar5 = 0x34;
        }
        else {
          uVar7 = 0;
          *(uint *)((long)param_1 + 0xc4) = uVar1;
          do {
            uVar2 = *local_28;
            local_28 = local_28 + 1;
            uVar5 = (**(code **)(*param_1 + 0x58))(param_1,uVar2);
            uVar7 = uVar7 + 1;
          } while (((int)uVar5 == 0xf || (int)uVar5 == 1) && uVar7 < uVar1);
        }
      }
    }
  }
  else {
    uVar5 = *(undefined8 *)PTR_DAT_02712ae0;
    lVar6 = param_1[2];
    uVar4 = (**(code **)(*param_1 + 0x88))(param_1);
    FUN_00449c90(uVar5,(int)lVar6,1,uVar4);
    uVar5 = 0x5a;
  }
  return uVar5;
}


