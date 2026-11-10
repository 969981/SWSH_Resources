/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01506280; name: FUN_01506280
 */


undefined8 FUN_01506280(long param_1,long *param_2,long *param_3,uint *param_4,undefined8 param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  plVar1 = (long *)(param_1 + 0x50a60);
  if (*plVar1 != 0) {
    uVar2 = FUN_01509eb0();
    if (uVar2 != 0) {
      uVar5 = *param_4;
      uVar3 = 0;
      do {
        lVar6 = *param_2;
        if (uVar2 <= uVar5) {
          uVar5 = 0;
        }
        local_68 = lVar6;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        local_70 = *param_3;
        if (local_70 == 0) {
          uVar4 = FUN_015064c0(param_1,&local_68,&local_70,uVar5,param_5);
        }
        else {
          plVar7 = (long *)(local_70 + 0x48);
          (**(code **)(*plVar7 + 0x10))(plVar7);
          uVar4 = FUN_015064c0(param_1,&local_68,&local_70,uVar5,param_5);
          (**(code **)(*plVar7 + 0x18))(plVar7);
          local_70 = 0;
        }
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
          local_68 = 0;
        }
        if ((uVar4 & 1) != 0) {
          *param_4 = uVar5;
          return 1;
        }
        uVar3 = uVar3 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar3 < uVar2);
    }
    uVar3 = FUN_0150b1c0(*plVar1);
    if (uVar2 < uVar3) {
      do {
        lVar6 = *param_2;
        local_78 = lVar6;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        local_80 = *param_3;
        if (local_80 == 0) {
          uVar4 = FUN_015064c0(param_1,&local_78,&local_80,uVar2,param_5);
        }
        else {
          plVar7 = (long *)(local_80 + 0x48);
          (**(code **)(*plVar7 + 0x10))(plVar7);
          uVar4 = FUN_015064c0(param_1,&local_78,&local_80,uVar2,param_5);
          (**(code **)(*plVar7 + 0x18))(plVar7);
          local_80 = 0;
        }
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
          local_78 = 0;
        }
        if ((uVar4 & 1) != 0) {
          *param_4 = uVar2;
          return 1;
        }
        uVar2 = uVar2 + 1;
        uVar3 = FUN_0150b1c0(*plVar1);
      } while (uVar2 < uVar3);
    }
  }
  return 0;
}


