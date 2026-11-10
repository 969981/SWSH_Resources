/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0122fd50; name: FUN_0122fd50
 */


/* WARNING: Removing unreachable block (ram,0x01230034) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0122fd50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,byte param_6,void *param_7,undefined8 param_8,undefined8 param_9)

{
  bool bVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long alStack_4c0 [12];
  undefined1 *local_460;
  code *local_458;
  code *local_450;
  undefined1 *local_448;
  undefined1 local_440 [96];
  undefined1 *local_3e0;
  code *local_3d8;
  code *local_3d0;
  undefined1 *local_3c8;
  long local_3c0 [12];
  long local_360;
  long local_358;
  long local_350;
  undefined8 uStack_348;
  undefined4 local_340;
  undefined4 local_33c;
  undefined8 local_338;
  undefined8 uStack_330;
  byte local_328;
  undefined1 auStack_327 [671];
  long local_88;
  long local_80;
  char *local_78;
  long local_70 [2];
  
  lVar7 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (lVar7 == 0) {
    if (_DAT_00000060 != 0) {
      return 0;
    }
  }
  else {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    FUN_01127680(&local_350,lVar7);
    lVar10 = *(long *)(local_350 + 0x60);
    if (local_350 != 0) {
      (**(code **)(*(long *)(local_350 + 0x48) + 0x18))();
    }
    if (lVar10 != 0) {
      uVar8 = 0;
      goto LAB_01230358;
    }
  }
  lVar10 = *(long *)(*(long *)PTR_DAT_02710540 + 200);
  FUN_0122b4d0(&local_80,lVar10,param_8);
  FUN_0122b4d0(&local_88,lVar10,param_9);
  local_350 = lVar10;
  uStack_348 = param_1;
  local_340 = param_4;
  local_33c = param_5;
  local_338 = param_2;
  uStack_330 = param_3;
  local_328 = param_6 & 1;
  memcpy(auStack_327,param_7,0x298);
  local_78 = "RequestEndRound";
  local_70[0] = lVar10;
  lVar10 = FUN_01203310(&local_358,lVar10,local_70,&local_78);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  FUN_012303a0(&local_78,lVar10,&local_350);
  pcVar2 = local_78;
  if (lVar7 == 0) {
    local_360 = 0;
  }
  else {
    FUN_01127680(&local_360,lVar7);
  }
  (**(code **)(**(long **)(local_360 + 0x80) + 0x10))(local_70);
  local_358 = local_70[0];
  FUN_0122c210(local_70,pcVar2,&local_358);
  lVar3 = local_70[0];
  local_3c0[0] = local_80;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
  }
  local_3d0 = FUN_01247140;
  local_3e0 = &LAB_012470f0;
  local_3d8 = FUN_01247100;
  local_3c8 = &LAB_01247160;
  iVar4 = FUN_007dc9a0(lVar3);
  if (iVar4 == 0) {
    pcVar6 = *(code **)(lVar3 + 0x128);
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(lVar3 + 0x130) = 0;
      *(undefined8 *)(lVar3 + 0x138) = 0;
      *(undefined8 *)(lVar3 + 0x120) = 0;
      *(undefined8 *)(lVar3 + 0x128) = 0;
      (*pcVar6)(lVar3 + 0x140);
    }
    if (local_3d0 != (code *)0x0) {
      (*local_3d0)(local_3c0,lVar3 + 0x140);
      *(undefined1 **)(lVar3 + 0x138) = local_3c8;
      *(code **)(lVar3 + 0x128) = local_3d8;
      *(code **)(lVar3 + 0x130) = local_3d0;
      *(undefined8 *)(lVar3 + 0x120) = local_3e0;
    }
LAB_01230088:
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  else if (lVar3 != 0) goto LAB_01230088;
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
  }
  local_450 = FUN_012471c0;
  local_460 = &LAB_01247170;
  local_458 = FUN_01247180;
  local_448 = &LAB_012471e0;
  iVar4 = FUN_007dc9a0(lVar3);
  if (iVar4 == 0) {
    pcVar6 = *(code **)(lVar3 + 0x228);
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(lVar3 + 0x230) = 0;
      *(undefined8 *)(lVar3 + 0x238) = 0;
      *(undefined8 *)(lVar3 + 0x220) = 0;
      *(undefined8 *)(lVar3 + 0x228) = 0;
      (*pcVar6)(lVar3 + 0x240);
    }
    if (local_450 != (code *)0x0) {
      (*local_450)(local_440,lVar3 + 0x240);
      *(undefined1 **)(lVar3 + 0x238) = local_448;
      *(code **)(lVar3 + 0x228) = local_458;
      *(code **)(lVar3 + 0x230) = local_450;
      *(undefined8 *)(lVar3 + 0x220) = local_460;
    }
LAB_012300f4:
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  else if (lVar3 != 0) goto LAB_012300f4;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  alStack_4c0[0] = lVar7;
  iVar4 = FUN_007dc9a0(lVar3);
  if (iVar4 == 0) {
    pcVar6 = *(code **)(lVar3 + 0x1a8);
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(lVar3 + 0x1b0) = 0;
      *(undefined8 *)(lVar3 + 0x1b8) = 0;
      *(undefined8 *)(lVar3 + 0x1a0) = 0;
      *(undefined8 *)(lVar3 + 0x1a8) = 0;
      (*pcVar6)(lVar3 + 0x1c0);
    }
    FUN_01247290(alStack_4c0,lVar3 + 0x1c0);
    *(undefined1 **)(lVar3 + 0x1b8) = &LAB_012472b0;
    *(code **)(lVar3 + 0x1a8) = FUN_01247250;
    *(code **)(lVar3 + 0x1b0) = FUN_01247290;
    *(undefined8 *)(lVar3 + 0x1a0) = &LAB_012471f0;
LAB_0123015c:
    plVar9 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_007dcc80(lVar3);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(plVar9);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar9);
    bVar1 = false;
  }
  else {
    if (lVar3 != 0) goto LAB_0123015c;
    FUN_007dcc80(0);
    bVar1 = true;
  }
  FUN_01247250(alStack_4c0);
  if (!bVar1) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  pcVar6 = local_458;
  if (local_458 != (code *)0x0) {
    local_450 = (code *)0x0;
    local_448 = (undefined1 *)0x0;
    local_460 = (undefined1 *)0x0;
    local_458 = (code *)0x0;
    (*pcVar6)(local_440);
  }
  if (!bVar1) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  pcVar6 = local_3d8;
  if (local_3d8 != (code *)0x0) {
    local_3d0 = (code *)0x0;
    local_3c8 = (undefined1 *)0x0;
    local_3e0 = (undefined1 *)0x0;
    local_3d8 = (code *)0x0;
    (*pcVar6)(local_3c0);
  }
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    local_70[0] = 0;
  }
  if (local_358 != 0) {
    (**(code **)(*(long *)(local_358 + 0x48) + 0x18))();
    local_358 = 0;
  }
  if (local_360 != 0) {
    (**(code **)(*(long *)(local_360 + 0x48) + 0x18))();
    local_360 = 0;
  }
  if (local_78 != (char *)0x0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = (char *)0x0;
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  if (lVar7 == 0) {
    lVar10 = 0;
  }
  else {
    FUN_01127680(local_70,lVar7);
    lVar10 = local_70[0];
  }
  local_70[0] = lVar10;
  if (lVar3 != 0) {
    plVar9 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  lVar5 = *(long *)(lVar10 + 0x60);
  *(long *)(lVar10 + 0x60) = lVar3;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  FUN_012ae6d0(*(undefined8 *)(lVar10 + 0x80),0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    local_70[0] = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  uVar8 = 1;
  if (lVar7 == 0) {
    return 1;
  }
LAB_01230358:
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  return uVar8;
}


