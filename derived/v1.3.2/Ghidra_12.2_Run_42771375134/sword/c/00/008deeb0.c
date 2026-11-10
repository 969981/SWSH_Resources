/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008deeb0; name: FUN_008deeb0
 */


void FUN_008deeb0(long param_1,ulong param_2,undefined8 *param_3,long param_4,long *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long local_70;
  long local_68;
  
  uVar1 = FUN_00884820(*param_3);
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      uVar2 = FUN_009c9810((uint)param_2 & 0xff,uVar4 & 0xffffffff);
      lVar3 = (**(code **)(*(long *)*param_3 + 0x50))((long *)*param_3,uVar4 & 0xffffffff);
      if (lVar3 == 0) {
        local_68 = 0;
        local_70 = *param_5;
        if (local_70 == 0) goto LAB_008def14;
LAB_008def9c:
        plVar5 = (long *)(local_70 + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_008df050(param_1,param_2 & 0xffffffff,uVar2,&local_68,param_4,&local_70);
        (**(code **)(*plVar5 + 0x18))(plVar5);
        local_70 = 0;
      }
      else {
        plVar5 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        local_68 = lVar3;
        (**(code **)(*plVar5 + 0x10))(plVar5);
        local_70 = *param_5;
        if (local_70 != 0) goto LAB_008def9c;
LAB_008def14:
        FUN_008df050(param_1,param_2 & 0xffffffff,uVar2,&local_68,param_4,&local_70);
      }
      if (lVar3 != 0) {
        plVar5 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar5 + 0x18))(plVar5);
        local_68 = 0;
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      uVar4 = uVar4 + 1;
      param_4 = param_4 + 0x30;
    } while (uVar1 != uVar4);
  }
  FUN_008df1e0(param_1,param_2 & 0xffffffff);
  FUN_00914110(param_1 + (param_2 & 0xff) * 0x38 + 8);
  return;
}


