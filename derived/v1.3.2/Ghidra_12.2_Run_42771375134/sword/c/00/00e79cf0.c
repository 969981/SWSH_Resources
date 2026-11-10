/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e79cf0; name: FUN_00e79cf0
 */


undefined8
FUN_00e79cf0(float param_1,float param_2,undefined8 param_3,long *param_4,undefined4 param_5,
            uint param_6,uint param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *local_90;
  ulong uStack_88;
  long local_78;
  
  puVar3 = PTR_DAT_027194d8;
  puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    plVar7 = (long *)*puVar1;
    if ((plVar7 != (long *)0x0 && plVar7[0x34] == *param_4) &&
       (uVar4 = (**(code **)(*plVar7 + 0x88))(plVar7), (uVar4 & 1) == 0)) break;
    puVar1 = puVar1 + 1;
  }
  plVar6 = plVar7 + 9;
  (**(code **)(*plVar6 + 0x10))(plVar6);
  uVar9 = FUN_00a92fd0(param_1 - (float)plVar7[0x16],param_2 - (float)plVar7[0x17]);
  if (plVar7[0x3b] == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)FUN_00e87000(&local_90);
    if (plVar5 != (long *)0x0) {
      (**(code **)(plVar5[9] + 0x10))();
    }
    plVar5[0xe] = (long)plVar7;
    (**(code **)(*plVar5 + 0x38))(plVar5);
    lVar8 = plVar7[0x3d];
    local_90 = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(plVar5[9] + 0x10))();
    }
    FUN_01591030(plVar7 + 0x3d,lVar8,&local_90);
    if (local_90 != (long *)0x0) {
      (**(code **)(local_90[9] + 0x18))();
      local_90 = (long *)0x0;
    }
    (**(code **)(plVar5[9] + 0x18))();
  }
  FUN_00df4be0(uVar9,param_3,plVar5,plVar7 + 0x14,param_5,param_6 & 1,param_7 & 1,1);
  plVar7 = *(long **)(*(long *)puVar3 + 0xb0);
  plVar5 = *(long **)(*(long *)puVar3 + 0xb8);
  uStack_88 = (ulong)(uint)param_2;
  local_90 = (long *)(ulong)(uint)param_1;
  do {
    if (plVar7 == plVar5) {
LAB_00e79f58:
      (**(code **)(*plVar6 + 0x18))(plVar6);
      return 1;
    }
    lVar8 = *plVar7;
    uVar4 = FUN_01593610(lVar8 + 0x50);
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar8 + 0x1a0) == *param_4)) &&
       (uVar4 = (**(code **)(*(long *)*plVar7 + 0x88))(), (uVar4 & 1) == 0)) {
      plVar7 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      local_78 = lVar8;
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_00e7fce0(&local_78,&local_90,2,7,0,0);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      local_78 = 0;
      (**(code **)(*plVar7 + 0x18))(plVar7);
      goto LAB_00e79f58;
    }
    plVar7 = plVar7 + 1;
  } while( true );
}


