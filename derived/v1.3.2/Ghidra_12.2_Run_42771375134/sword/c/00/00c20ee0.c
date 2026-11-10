/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c20ee0; name: FUN_00c20ee0
 */


void FUN_00c20ee0(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  long local_438;
  undefined1 *local_410;
  code *local_408;
  undefined1 *local_400;
  undefined1 *puStack_3f8;
  long *local_3f0;
  undefined4 local_3e8;
  long local_3e0;
  undefined1 *local_390;
  code *local_388;
  undefined1 *local_380;
  undefined1 *puStack_378;
  long *local_370;
  undefined4 local_368;
  long local_360;
  long local_310;
  long local_308;
  undefined1 auStack_300 [672];
  
  if ((param_1[0xd] != 0) &&
     (puVar12 = *(undefined8 **)(param_1[0xd] + 0x60), puVar12 != (undefined8 *)0x0)) {
    plVar5 = (long *)(**(code **)*puVar12)(puVar12);
    lVar6 = FUN_00be66c0();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar6) {
        FUN_00c1ce80(&local_308,puVar12 + -10);
        goto joined_r0x00c20fb0;
      }
    }
  }
  FUN_00c1ce80(&local_308,0);
joined_r0x00c20fb0:
  if ((local_308 != 0) &&
     (puVar12 = *(undefined8 **)(local_308 + 0x60), puVar12 != (undefined8 *)0x0)) {
    plVar5 = (long *)(**(code **)*puVar12)(puVar12);
    lVar6 = FUN_00c22170();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar6) {
        puVar12 = puVar12 + -10;
        goto LAB_00c20fb8;
      }
    }
  }
  puVar12 = (undefined8 *)0x0;
LAB_00c20fb8:
  auVar13 = FUN_00bdad60(puVar12);
  if (local_308 != 0) {
    (**(code **)(*(long *)(local_308 + 0x48) + 0x18))();
    local_308 = 0;
  }
  if ((auVar13._0_8_ & 0xff) != 0) {
    FUN_00c213e0(&local_308,param_1);
    if ((char)local_308 != '\0') {
      lVar6 = FUN_00c1d960(param_1);
      if (((lVar6 == 0) || (*(long *)PTR_DAT_02716748 == 0)) || (lVar7 = FUN_007ad1c0(), lVar7 == 0)
         ) {
        *(undefined4 *)(param_1 + 0x12) = param_4;
        return;
      }
      (**(code **)(*param_1 + 0x10))(&local_310,param_1);
      lVar4 = local_310;
      if ((local_310 == 0) || ((**(code **)(*(long *)(local_310 + 0x48) + 0x10))(), local_310 == 0))
      {
        local_438 = 0;
        bVar2 = true;
      }
      else {
        local_438 = local_310;
        (**(code **)(*(long *)(local_310 + 0x48) + 0x10))();
        bVar2 = false;
      }
      cVar1 = *(char *)((long)param_1 + 0xc4);
      uVar10 = *(undefined8 *)(lVar7 + 0x10);
      uVar8 = FUN_00bd9f20(lVar6);
      local_380 = (undefined1 *)0x0;
      puStack_378 = (undefined1 *)0x0;
      local_360 = lVar4;
      local_390 = (undefined1 *)0x0;
      local_388 = (code *)0x0;
      local_370 = param_1;
      local_368 = param_3;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      local_390 = &LAB_00c22e60;
      local_388 = FUN_00c22e90;
      local_380 = &LAB_00c22ed0;
      puStack_378 = &LAB_00c22f00;
      local_400 = (undefined1 *)0x0;
      puStack_3f8 = (undefined1 *)0x0;
      local_3e0 = local_438;
      local_410 = (undefined1 *)0x0;
      local_408 = (code *)0x0;
      local_3f0 = param_1;
      local_3e8 = param_4;
      if (!bVar2) {
        (**(code **)(*(long *)(local_438 + 0x48) + 0x10))();
      }
      local_410 = &LAB_00c22f30;
      local_408 = FUN_00c22f60;
      local_400 = &LAB_00c22fa0;
      puStack_3f8 = &LAB_00c22fd0;
      uVar9 = FUN_0122fd50(auVar13._8_8_,uVar10,uVar8,param_5,param_6,cVar1 != '\0',auStack_300,
                           &local_390,&local_410);
      pcVar3 = local_408;
      if (local_408 != (code *)0x0) {
        local_400 = (undefined1 *)0x0;
        puStack_3f8 = (undefined1 *)0x0;
        local_410 = (undefined1 *)0x0;
        local_408 = (code *)0x0;
        (*pcVar3)(&local_3f0);
      }
      pcVar3 = local_388;
      if (local_388 != (code *)0x0) {
        local_380 = (undefined1 *)0x0;
        puStack_378 = (undefined1 *)0x0;
        local_390 = (undefined1 *)0x0;
        local_388 = (code *)0x0;
        (*pcVar3)(&local_370);
      }
      puVar11 = *(undefined1 **)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
      if (puVar11 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(puVar11 + 0x48) + 0x10))();
      }
      local_390 = puVar11;
      lVar6 = FUN_00fe2800(&local_390);
      FUN_012ae720(*(undefined8 *)(lVar6 + 0x80));
      if (local_390 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_390 + 0x48) + 0x18))();
        local_390 = (undefined1 *)0x0;
      }
      if ((uVar9 & 1) == 0) {
        param_2 = param_4;
      }
      *(undefined4 *)(param_1 + 0x12) = param_2;
      if (!bVar2) {
        (**(code **)(*(long *)(local_438 + 0x48) + 0x18))((long *)(local_438 + 0x48));
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      if (local_310 == 0) {
        return;
      }
      (**(code **)(*(long *)(local_310 + 0x48) + 0x18))();
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x12) = param_4;
  return;
}


