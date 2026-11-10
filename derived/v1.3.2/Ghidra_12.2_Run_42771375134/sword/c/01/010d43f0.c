/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d43f0; name: FUN_010d43f0
 */


void FUN_010d43f0(long param_1,long *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_48;
  
  lVar4 = *(long *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar4 + 0x2e0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = *param_2;
  if (lVar4 != 0) {
    uVar2 = FUN_008d3fc0(*(undefined4 *)((long)param_2 + 0x24),0);
    FUN_014c7aa0(lVar3,0,lVar4,uVar2,0,0);
    FUN_010d4b10(param_1,1,0x7fda360bb79cd71f,0xd0cb6e805100d4c5);
  }
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    uVar2 = FUN_008d3fc0(*(undefined4 *)((long)param_2 + 0x24),0);
    FUN_014c7aa0(lVar3,0,lVar4,uVar2,0,0);
    FUN_010d4b10(param_1,1,0xcfb0de7f00da5eba,0xd0cb6b805100cfac);
  }
  if ((char)param_2[2] != '\0') {
    if ((char)param_2[3] == '\0') {
LAB_010d45ec:
      cVar1 = (char)param_2[2];
    }
    else {
      FUN_014ca220(lVar3,0,*(undefined4 *)((long)param_2 + 0x14),2,0,1);
      FUN_010d4b10(param_1,1,0xcfad5c7f00d74bfd,0xd0cb69805100cc46);
      FUN_014ca220(lVar3,0,*(undefined4 *)((long)param_2 + 0x1c),2,0,1);
      FUN_010d4b10(param_1,1,0xcfad5b7f00d74a4a,0xd0cb6a805100cdf9);
      lVar4 = *(long *)(param_1 + 0x2b0);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        local_48 = 0xd0cb6a805100cdf9;
        FUN_0167b9b0(lVar4,&local_48,1);
        (**(code **)(*plVar5 + 0x18))(plVar5);
        goto LAB_010d45ec;
      }
      local_48 = 0xd0cb6a805100cdf9;
      FUN_0167b9b0(0,&local_48,1);
      cVar1 = (char)param_2[2];
    }
    if (cVar1 != '\0') {
      if ((char)param_2[3] != '\0') goto LAB_010d47a4;
      FUN_014ca220(lVar3,0,*(undefined4 *)((long)param_2 + 0x14),2,0,1);
      FUN_010d4b10(param_1,1,0xcfad5c7f00d74bfd,0xd0cb69805100cc46);
      lVar4 = *(long *)(param_1 + 0x2b0);
      if (lVar4 == 0) {
        local_48 = 0xd0cb6a805100cdf9;
        FUN_0167b9b0(0,&local_48,0);
        cVar1 = (char)param_2[2];
      }
      else {
        plVar5 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        local_48 = 0xd0cb6a805100cdf9;
        FUN_0167b9b0(lVar4,&local_48,0);
        (**(code **)(*plVar5 + 0x18))(plVar5);
        cVar1 = (char)param_2[2];
      }
      if (cVar1 != '\0') goto LAB_010d47a4;
    }
  }
  if ((char)param_2[3] != '\0') {
    FUN_014ca220(lVar3,0,*(undefined4 *)((long)param_2 + 0x1c),2,0,1);
    FUN_010d4b10(param_1,1,0xcfad5b7f00d74a4a,0xd0cb69805100cc46);
    lVar4 = *(long *)(param_1 + 0x2b0);
    if (lVar4 == 0) {
      local_48 = 0xd0cb6a805100cdf9;
      FUN_0167b9b0(0,&local_48,0);
    }
    else {
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      local_48 = 0xd0cb6a805100cdf9;
      FUN_0167b9b0(lVar4,&local_48,0);
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
LAB_010d47a4:
  FUN_014ca220(lVar3,0,(int)param_2[4],2,0,1);
  FUN_010d4b10(param_1,1,0xcfa6c97f00d1e686,0xdbd7d004636df30d);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


