/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca7850; name: FUN_00ca7850
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ca7850(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong local_5d0;
  byte *pbStack_5c8;
  undefined8 local_5c0;
  long local_5b8;
  char *local_5b0;
  char *local_5a8;
  char *local_5a0;
  char *local_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  char *local_540;
  char *local_538;
  char *local_530;
  char *local_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4b0;
  undefined4 local_490;
  byte local_478;
  undefined7 uStack_477;
  long local_278 [2];
  undefined1 *local_268;
  long local_260;
  long local_258;
  undefined8 local_78;
  char *local_70 [2];
  
  local_70[0] = "bin/archive/chara/data/resident_chara_nx64.gfpak";
  pcVar6 = *(code **)(param_1 + 0xe8);
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    (*pcVar6)(param_1 + 0x100);
  }
  *(long *)(param_1 + 0x100) = param_1;
  *(undefined8 *)(param_1 + 0xe0) = &LAB_00cb7290;
  *(undefined1 **)(param_1 + 0xe8) = &LAB_00cb7360;
  *(undefined1 **)(param_1 + 0xf0) = &LAB_00cb7370;
  *(undefined1 **)(param_1 + 0xf8) = &LAB_00cb7380;
  lVar9 = *(long *)(param_1 + 0xd8);
  if (lVar9 != 0) {
    plVar10 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_006e1e70(lVar9,param_1 + 0xd0,1);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  FUN_008d4da0(local_278,local_70);
  uVar4 = FUN_00c65260();
  FUN_006dccd0(&local_478,*(undefined8 *)PTR_DAT_02710788,1,local_278,1,uVar4,0);
  if (*(long *)(param_1 + 0xd8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xd8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  lVar9 = CONCAT71(uStack_477,local_478);
  *(long *)(param_1 + 0xd8) = lVar9;
  if (lVar9 != 0) {
    plVar10 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    if ((*(long *)(param_1 + 0xe0) != 0) || (*(long *)(param_1 + 0x160) != 0)) {
      FUN_006e1e70(lVar9,param_1 + 0xd0,1);
    }
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  if ((local_260 != 0) && (local_278[0] != 0)) {
    (**(code **)(*(long *)(local_278[0] + 0x48) + 0x18))();
  }
  local_278[0] = 0;
  local_278[1] = 0xcbf29ce484222645;
  local_268 = &DAT_01d38550;
  local_260 = 0;
  if (local_258 != 0) {
    (**(code **)(*(long *)(local_258 + 0x48) + 0x18))();
    local_258 = 0;
  }
  uVar3 = _UNK_01d4a138;
  uVar4 = _DAT_01d4a130;
  local_78 = 0x79479c9171128967;
  uVar8 = 0;
  do {
    lVar9 = 0;
    do {
      lVar11 = param_1 + (lVar9 + uVar8 * 3) * 0x1a0;
      local_5d0 = (&DAT_0215d978)[uVar8 * 3 + lVar9];
      local_510 = 0;
      uStack_508 = 0;
      local_4b0 = 0;
      local_520 = 0;
      uStack_518 = 0;
      local_490 = 0;
      local_530 = (char *)0x0;
      local_528 = (char *)0x0;
      local_540 = (char *)0x0;
      local_538 = (char *)0x0;
      local_550 = 0;
      uStack_548 = 0;
      local_560 = 0;
      uStack_558 = 0;
      local_570 = 0;
      uStack_568 = 0;
      local_580 = 0;
      uStack_578 = 0;
      local_590 = 0;
      uStack_588 = 0;
      local_5a0 = (char *)0x0;
      local_598 = (char *)0x0;
      local_5b0 = (char *)0x0;
      local_5a8 = (char *)0x0;
      uStack_4f8 = uVar3;
      local_500 = uVar4;
      local_4f0 = 0;
      local_4d8 = 0;
      uStack_4d0 = 0;
      local_4e8 = 0;
      uStack_4e0 = 0;
      FUN_00cb2d10(param_1,&local_5b0,uVar8 & 0xffffffff);
      if ((local_530 != (char *)0x0) && (local_5a0 != (char *)0x0)) {
        lVar1 = lVar11 + 0x200;
        snprintf((char *)&local_478,0x200,"%s/%s",local_5b0,local_5a0);
        snprintf((char *)local_278,0x200,"%s/%s",local_540,local_530);
        local_5d0 = 0xcbf29ce484222645;
        if (local_478 != 0) {
          local_5d0 = 0xcbf29ce484222645;
          pbVar7 = (byte *)((ulong)&local_478 | 1);
          bVar2 = local_478;
          do {
            local_5d0 = (local_5d0 ^ bVar2) * 0x100000001b3;
            bVar2 = *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while (bVar2 != 0);
        }
        pbStack_5c8 = &local_478;
        local_5c0 = 0x1ff;
        local_5b8 = 0;
        FUN_00cb3b30(lVar1,&local_5d0);
        if (local_5b8 != 0) {
          (**(code **)(*(long *)(local_5b8 + 0x48) + 0x18))();
        }
        local_5d0 = 0xcbf29ce484222645;
        if ((byte)local_278[0] != 0) {
          local_5d0 = 0xcbf29ce484222645;
          pbVar7 = (byte *)((ulong)local_278 | 1);
          bVar2 = (byte)local_278[0];
          do {
            local_5d0 = (local_5d0 ^ bVar2) * 0x100000001b3;
            bVar2 = *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while (bVar2 != 0);
        }
        pbStack_5c8 = (byte *)local_278;
        local_5c0 = 0x1ff;
        local_5b8 = 0;
        uVar5 = FUN_00c65260();
        FUN_00cb3cc0(lVar1,&local_5d0,uVar5,*(undefined8 *)(*(long *)PTR_DAT_0271bf90 + 0x248));
        if (local_5b8 != 0) {
          (**(code **)(*(long *)(local_5b8 + 0x48) + 0x18))();
          local_5b8 = 0;
        }
      }
      if ((local_528 != (char *)0x0) && (local_598 != (char *)0x0)) {
        lVar11 = lVar11 + 0xbc0;
        snprintf((char *)&local_478,0x200,"%s/%s",local_5a8,local_598);
        snprintf((char *)local_278,0x200,"%s/%s",local_538,local_528);
        local_5d0 = 0xcbf29ce484222645;
        if (local_478 != 0) {
          local_5d0 = 0xcbf29ce484222645;
          pbVar7 = (byte *)((ulong)&local_478 | 1);
          bVar2 = local_478;
          do {
            local_5d0 = (local_5d0 ^ bVar2) * 0x100000001b3;
            bVar2 = *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while (bVar2 != 0);
        }
        pbStack_5c8 = &local_478;
        local_5c0 = 0x1ff;
        local_5b8 = 0;
        FUN_00cb3ea0(lVar11,&local_5d0);
        if (local_5b8 != 0) {
          (**(code **)(*(long *)(local_5b8 + 0x48) + 0x18))();
        }
        local_5d0 = 0xcbf29ce484222645;
        if ((byte)local_278[0] != 0) {
          local_5d0 = 0xcbf29ce484222645;
          pbVar7 = (byte *)((ulong)local_278 | 1);
          bVar2 = (byte)local_278[0];
          do {
            local_5d0 = (local_5d0 ^ bVar2) * 0x100000001b3;
            bVar2 = *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while (bVar2 != 0);
        }
        pbStack_5c8 = (byte *)local_278;
        local_5c0 = 0x1ff;
        local_5b8 = 0;
        uVar5 = FUN_00c65260();
        FUN_00cb4030(lVar11,&local_5d0,uVar5,*(undefined8 *)(*(long *)PTR_DAT_0271bf90 + 0x268));
        if (local_5b8 != 0) {
          (**(code **)(*(long *)(local_5b8 + 0x48) + 0x18))();
          local_5b8 = 0;
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 3);
    uVar8 = uVar8 + 1;
  } while (uVar8 != 2);
  return;
}


