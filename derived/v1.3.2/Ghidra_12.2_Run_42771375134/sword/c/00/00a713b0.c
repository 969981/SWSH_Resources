/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a713b0; name: FUN_00a713b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a713b0(long param_1,uint param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long local_390;
  undefined4 local_388 [2];
  undefined1 *local_380;
  code *local_378;
  undefined1 *local_370;
  undefined1 *local_368;
  long alStack_360 [13];
  long local_2f8;
  undefined1 *local_2f0;
  code *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  long alStack_2d0 [13];
  long local_268;
  undefined1 *local_260;
  code *local_258;
  undefined1 *local_250;
  undefined1 *local_248;
  long alStack_240 [13];
  long local_1d8;
  undefined1 *local_1d0;
  code *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  long alStack_1b0 [13];
  long local_148;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long local_120 [12];
  long local_c0 [3];
  int local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_74;
  undefined1 auStack_70 [16];
  
  uStack_98 = _UNK_01d4a138;
  local_a0 = _DAT_01d4a130;
  if (param_2 != 0xff) {
    lVar3 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x548);
    if (lVar3 != 0) {
      plVar8 = (long *)(lVar3 + 0x48);
      local_74 = param_3;
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_00a67970(param_1,param_2,&local_90,&local_a4);
      local_c0[0] = (ulong)(uint)(float)local_a4 << 0x20;
      local_c0[1] = 0;
      if (local_74 == 0) {
        *(undefined8 *)(lVar3 + 0x3d8) = local_88;
        *(undefined8 *)(lVar3 + 0x3d0) = local_90;
        *(undefined8 *)(lVar3 + 0x458) = 0;
        *(long *)(lVar3 + 0x450) = local_c0[0];
        *(undefined8 *)(lVar3 + 0x408) = uStack_98;
        *(undefined8 *)(lVar3 + 0x448) = 0;
        *(undefined8 *)(lVar3 + 0x400) = local_a0;
        *(undefined8 *)(lVar3 + 0x440) = 0;
        *(undefined8 *)(lVar3 + 0x438) = 0;
        *(undefined8 *)(lVar3 + 0x430) = 0;
      }
      else {
        local_140 = &LAB_00a8c7d0;
        local_138 = FUN_00a8c7f0;
        local_130 = &LAB_00a8c800;
        local_128 = &LAB_00a8c810;
        local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,param_4);
        local_120[0] = lVar3;
        lVar2 = FUN_00a8c820(&local_260,*(undefined8 *)(param_1 + 0xd8),&local_140,lVar3 + 0x3d0,
                             &local_90,&local_74,&local_1d0);
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
        }
        lVar4 = *(long *)(param_1 + 0x530);
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        local_148 = lVar2;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
        }
        FUN_015f6330(lVar4,&local_148,0x40);
        if (local_148 != 0) {
          (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
          local_148 = 0;
        }
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
        }
        local_1d0 = &LAB_00a8c960;
        local_1c8 = FUN_00a8c980;
        local_1c0 = &LAB_00a8c990;
        local_1b8 = &LAB_00a8c9a0;
        local_260 = (undefined1 *)CONCAT44(local_260._4_4_,param_4);
        alStack_1b0[0] = lVar3;
        lVar4 = FUN_00a8c820(&local_2f0,*(undefined8 *)(param_1 + 0xd8),&local_1d0,lVar3 + 0x450,
                             local_c0,&local_74,&local_260);
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        lVar5 = *(long *)(param_1 + 0x530);
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        local_1d8 = lVar4;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        FUN_015f6330(lVar5,&local_1d8,0x40);
        if (local_1d8 != 0) {
          (**(code **)(*(long *)(local_1d8 + 0x48) + 0x18))();
          local_1d8 = 0;
        }
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
        }
        local_260 = &LAB_00a8c9b0;
        local_258 = FUN_00a8c9d0;
        local_250 = &LAB_00a8c9e0;
        local_248 = &LAB_00a8c9f0;
        local_2f0 = (undefined1 *)CONCAT44(local_2f0._4_4_,param_4);
        alStack_240[0] = lVar3;
        lVar5 = FUN_00a8c820(&local_380,*(undefined8 *)(param_1 + 0xd8),&local_260,lVar3 + 0x400,
                             &local_a0,&local_74,&local_2f0);
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        lVar6 = *(long *)(param_1 + 0x530);
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        local_268 = lVar5;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        FUN_015f6330(lVar6,&local_268,0x40);
        if (local_268 != 0) {
          (**(code **)(*(long *)(local_268 + 0x48) + 0x18))();
          local_268 = 0;
        }
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
        local_2f0 = &LAB_00a8ca00;
        local_2e8 = FUN_00a8ca20;
        local_2e0 = &LAB_00a8ca30;
        local_2d8 = &LAB_00a8ca40;
        local_380 = (undefined1 *)CONCAT44(local_380._4_4_,param_4);
        alStack_2d0[0] = lVar3;
        lVar6 = FUN_00a8ca50(local_388,*(undefined8 *)(param_1 + 0xd8),&local_2f0,lVar3 + 0x430,
                             PTR_DAT_02715088,&local_74,&local_380);
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        lVar7 = *(long *)(param_1 + 0x530);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        local_2f8 = lVar6;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        FUN_015f6330(lVar7,&local_2f8,0x40);
        if (local_2f8 != 0) {
          (**(code **)(*(long *)(local_2f8 + 0x48) + 0x18))();
          local_2f8 = 0;
        }
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
        }
        local_380 = &LAB_00a8cb90;
        local_378 = FUN_00a8cbb0;
        local_370 = &LAB_00a8cbc0;
        local_368 = &LAB_00a8cbd0;
        local_388[0] = param_4;
        alStack_360[0] = lVar3;
        lVar3 = FUN_00a8ca50(auStack_70,*(undefined8 *)(param_1 + 0xd8),&local_380,lVar3 + 0x440,
                             PTR_DAT_02715088,&local_74,local_388);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        lVar7 = *(long *)(param_1 + 0x530);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        local_390 = lVar3;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        FUN_015f6330(lVar7,&local_390,0x40);
        if (local_390 != 0) {
          (**(code **)(*(long *)(local_390 + 0x48) + 0x18))();
          local_390 = 0;
        }
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
        }
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
        }
        pcVar1 = local_378;
        if (local_378 != (code *)0x0) {
          local_370 = (undefined1 *)0x0;
          local_368 = (undefined1 *)0x0;
          local_380 = (undefined1 *)0x0;
          local_378 = (code *)0x0;
          (*pcVar1)(alStack_360);
        }
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
        pcVar1 = local_2e8;
        if (local_2e8 != (code *)0x0) {
          local_2e0 = (undefined1 *)0x0;
          local_2d8 = (undefined1 *)0x0;
          local_2f0 = (undefined1 *)0x0;
          local_2e8 = (code *)0x0;
          (*pcVar1)(alStack_2d0);
        }
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
        }
        pcVar1 = local_258;
        if (local_258 != (code *)0x0) {
          local_250 = (undefined1 *)0x0;
          local_248 = (undefined1 *)0x0;
          local_260 = (undefined1 *)0x0;
          local_258 = (code *)0x0;
          (*pcVar1)(alStack_240);
        }
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
        }
        pcVar1 = local_1c8;
        if (local_1c8 != (code *)0x0) {
          local_1c0 = (undefined1 *)0x0;
          local_1b8 = (undefined1 *)0x0;
          local_1d0 = (undefined1 *)0x0;
          local_1c8 = (code *)0x0;
          (*pcVar1)(alStack_1b0);
        }
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
        }
        pcVar1 = local_138;
        if (local_138 != (code *)0x0) {
          local_128 = (undefined1 *)0x0;
          local_130 = (undefined1 *)0x0;
          local_138 = (code *)0x0;
          local_140 = (undefined1 *)0x0;
          (*pcVar1)(local_120);
        }
      }
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  return;
}


