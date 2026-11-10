/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c0070; name: FUN_005c0070
 */


undefined8 FUN_005c0070(long *param_1,undefined *param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  time_t tVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_178 [16];
  undefined8 local_f8 [16];
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined8 local_50;
  
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  if ((int)param_1[3] != 1) {
    return 1;
  }
  FUN_005c3410();
  if (param_2 == (undefined *)0x0) {
    param_2 = PTR_DAT_02713df8;
  }
  (**(code **)(*param_1 + 0x58))(param_1,param_2);
  uVar3 = (**(code **)(*param_1 + 0x60))(param_1);
  FUN_005c0440(param_1,uVar3);
  plVar4 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
  plVar9 = (long *)PTR_DAT_02713df8;
  if (plVar4 == (long *)0x0) {
    plVar5 = (long *)param_1[500];
    bVar2 = plVar5 == (long *)PTR_DAT_02713df8;
    param_1[0x1ef] = (long)PTR_DAT_02713df8;
    if (bVar2) goto LAB_005c0194;
    if ((*(byte *)(param_1 + 0x1fc) & 1) == 0) {
      lVar8 = param_1[0x1f8];
      goto joined_r0x005c0178;
    }
  }
  else {
    param_1[0x1ef] = (long)plVar4;
    plVar5 = (long *)param_1[500];
    if (plVar5 == plVar4) goto LAB_005c0194;
    plVar9 = plVar4;
    if ((*(byte *)(param_1 + 0x1fc) & 1) == 0) {
      lVar8 = param_1[0x1f8];
joined_r0x005c0178:
      if (lVar8 != 0) {
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x48))
                    (plVar5,lVar8,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
        }
        param_1[0x1f8] = 0;
      }
    }
  }
  param_1[0x1f6] = 0;
  param_1[0x1f5] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1fa] = 0;
  param_1[500] = (long)plVar9;
LAB_005c0194:
  plVar9 = param_1 + 0x92;
  uVar3 = (**(code **)(*param_1 + 0x60))(param_1);
  FUN_005c8c00(plVar9,uVar3);
  plVar4 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
  plVar5 = (long *)param_1[0xd0];
  if (plVar5 == plVar4) {
    if (((param_1[0xd8] & 1U) == 0) && (param_1[0xd4] != 0)) {
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_1[0xd4],"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      param_1[0xd4] = 0;
    }
  }
  else {
    plVar1 = param_1 + 0xd4;
    if (((param_1[0xd8] & 1U) == 0) && (*plVar1 != 0)) {
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x48))
                  (plVar5,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar1 = 0;
    }
    param_1[0xd2] = 0;
    param_1[0xd1] = 0;
    param_1[0xd8] = 0;
    *plVar1 = 0;
    param_1[0xd5] = 0;
    param_1[0xd6] = 0;
    param_1[0xd0] = (long)plVar4;
  }
  param_1[0xd2] = 0x100;
  param_1[0xd1] = 0;
  param_1[0xd4] = (long)(param_1 + 0xd9);
  param_1[0xd6] = 0;
  param_1[0xd5] = 0;
  param_1[0xd8] = 1;
  plVar4 = (long *)(**(code **)(*param_1 + 0xb8))(param_1,0);
  param_1[0x1d9] = (long)plVar4;
  (**(code **)(*plVar4 + 0x40))();
  plVar4 = (long *)param_1[0x1d9];
  local_f8[0] = 0;
  local_178[0] = 0;
  uVar3 = FUN_005ca8d0(local_178);
  (**(code **)(*plVar4 + 0x58))(plVar4,local_f8,uVar3);
  plVar4 = (long *)param_1[0x1d9];
  uVar3 = (**(code **)(*param_1 + 0xc0))(param_1);
  (**(code **)(*param_1 + 0xc0))(param_1);
  uVar6 = FUN_005ca8d0();
  (**(code **)(*plVar4 + 0x58))(plVar4,uVar3,uVar6);
  (**(code **)(*(long *)param_1[0x1d9] + 0x48))();
  (**(code **)(*param_1 + 0xd0))(param_1,&DAT_0212220c,param_1[0x1d9]);
  FUN_005c8860(local_f8,param_1 + 4,1);
  plVar4 = (long *)(**(code **)(*param_1 + 0x60))(param_1);
  plVar5 = (long *)param_1[0x1db];
  if (plVar5 != plVar4) {
    plVar1 = param_1 + 0x1df;
    if (((*(byte *)(param_1 + 0x1e3) & 1) == 0) && (*plVar1 != 0)) {
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x48))
                  (plVar5,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar1 = 0;
    }
    param_1[0x1dd] = 0;
    param_1[0x1dc] = 0;
    param_1[0x1e3] = 0;
    *plVar1 = 0;
    param_1[0x1e0] = 0;
    param_1[0x1e1] = 0;
    param_1[0x1db] = (long)plVar4;
  }
  FUN_005c88a0(local_f8);
  nn::time::Initialize();
  FUN_005c8e60(plVar9);
  FUN_005c93b0();
  FUN_005c8df0(plVar9);
  (**(code **)(*(long *)param_1[0x91] + 0x58))((long *)param_1[0x91],auStack_78);
  FUN_005c59e0(local_f8,0x80,local_70);
  FUN_005c59e0(local_178,0x80,local_50);
  tVar7 = time((time_t *)0x0);
  srand((uint)tVar7);
  FUN_005ca750();
  return 1;
}


