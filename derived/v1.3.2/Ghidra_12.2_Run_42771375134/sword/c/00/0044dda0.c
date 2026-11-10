/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044dda0; name: FUN_0044dda0
 */


ulong FUN_0044dda0(long *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_02712d98;
  local_4c = 0xffffffff;
  local_68 = 0;
  local_50 = 1;
  plVar1 = param_1 + 6;
  local_60 = 0;
  local_58 = param_4;
  iVar3 = (**(code **)(**(long **)PTR_DAT_02712d98 + 0x20))
                    (*(long **)PTR_DAT_02712d98,param_2,&local_68,0,plVar1,1);
  if (iVar3 != 1) {
    local_50 = 0;
    uVar5 = (**(code **)(**(long **)puVar2 + 0x20))(*(long **)puVar2,param_2,&local_68,0,plVar1,1);
    if ((int)uVar5 != 1) {
      return uVar5;
    }
  }
  uVar4 = (**(code **)(*(long *)param_1[6] + 0x30))();
  *(uint *)(param_1 + 3) = uVar4;
  if (uVar4 == 0) {
    uVar5 = 2;
  }
  else {
    lVar6 = *param_1;
    if (*(uint *)((long)param_1 + 0x14) < uVar4) {
      if (lVar6 != 0) {
        FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90,lVar6);
        uVar4 = *(uint *)(param_1 + 3);
      }
      if (uVar4 < 0x8001) {
        uVar4 = 0x8000;
      }
      *(uint *)((long)param_1 + 0x14) = uVar4;
      lVar6 = FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,uVar4,0x20);
      *param_1 = lVar6;
    }
    if (lVar6 == 0) {
      uVar5 = 0x34;
    }
    else if (param_3 == 0) {
      uVar5 = 1;
    }
    else {
      local_38 = 0;
      uVar5 = (**(code **)(*(long *)*plVar1 + 0x50))((long *)*plVar1,param_3,0,&local_38);
      if ((int)uVar5 == 1) {
        param_3 = param_3 - (int)local_38;
        uVar4 = FUN_0044df40(param_1,param_3,&local_6c);
        if (local_6c != param_3) {
          uVar4 = 2;
        }
        uVar5 = (ulong)uVar4;
      }
    }
  }
  return uVar5;
}


