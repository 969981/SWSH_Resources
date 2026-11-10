/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044e110; name: FUN_0044e110
 */


ulong FUN_0044e110(long *param_1,ulong param_2,int param_3,undefined4 param_4,undefined8 param_5,
                  byte param_6)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined8 local_58;
  byte local_50;
  undefined4 local_4c;
  
  puVar2 = PTR_DAT_02712d98;
  local_50 = param_6 & 1;
  local_4c = 0xffffffff;
  local_68 = 0;
  local_60 = 0;
  plVar1 = param_1 + 6;
  uStack_64 = param_4;
  local_58 = param_5;
  uVar4 = (**(code **)(**(long **)PTR_DAT_02712d98 + 0x28))
                    (*(long **)PTR_DAT_02712d98,param_2,&local_68,0,plVar1,1);
  if (((int)uVar4 != 1) && ((param_6 & 1) != 0)) {
    local_50 = 0;
    uVar4 = (**(code **)(**(long **)puVar2 + 0x28))
                      (*(long **)puVar2,param_2 & 0xffffffff,&local_68,0,plVar1,1);
  }
  if ((int)uVar4 == 1) {
    uVar3 = (**(code **)(*(long *)param_1[6] + 0x30))();
    *(uint *)(param_1 + 3) = uVar3;
    if (uVar3 == 0) {
      uVar4 = 2;
    }
    else {
      lVar5 = *param_1;
      if (*(uint *)((long)param_1 + 0x14) < uVar3) {
        if (lVar5 != 0) {
          FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90,lVar5);
          uVar3 = *(uint *)(param_1 + 3);
        }
        if (uVar3 < 0x8001) {
          uVar3 = 0x8000;
        }
        *(uint *)((long)param_1 + 0x14) = uVar3;
        lVar5 = FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,uVar3,0x20);
        *param_1 = lVar5;
      }
      if (lVar5 == 0) {
        uVar4 = 0x34;
      }
      else if (param_3 == 0) {
        uVar4 = 1;
      }
      else {
        local_70 = 0;
        uVar4 = (**(code **)(*(long *)*plVar1 + 0x50))((long *)*plVar1,param_3,0,&local_70);
        if ((int)uVar4 == 1) {
          param_3 = param_3 - (int)local_70;
          uVar3 = FUN_0044df40(param_1,param_3,&local_74);
          if (local_74 != param_3) {
            uVar3 = 2;
          }
          uVar4 = (ulong)uVar3;
        }
      }
    }
  }
  return uVar4;
}


