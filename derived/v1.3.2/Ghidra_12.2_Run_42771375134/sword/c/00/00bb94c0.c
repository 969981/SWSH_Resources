/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb94c0; name: FUN_00bb94c0
 */


void FUN_00bb94c0(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long local_80;
  undefined8 *local_78;
  undefined8 local_70;
  long local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x4c0) == 0) {
    uVar9 = 0;
LAB_00bb9584:
    lVar6 = *(long *)(param_1 + 0x2b0);
  }
  else {
    lVar6 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (lVar6 == 0) {
      uVar9 = 0;
      lVar6 = *(long *)(param_1 + 0x2b0);
    }
    else {
      plVar7 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar6 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      local_78 = &local_48;
      local_48 = 0;
      local_70 = 0xe2c06acab97c29c2;
      FUN_01037340(lVar6,&local_78,0);
      uVar9 = local_48;
      if (lVar6 == 0) goto LAB_00bb9584;
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      lVar6 = *(long *)(param_1 + 0x2b0);
    }
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar6 + 0x2e8);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  FUN_00ff86a0(&local_78,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar6 = local_78[0xc];
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)(local_78[9] + 0x18))();
    local_78 = (undefined8 *)0x0;
  }
  FUN_00bbb900(param_1);
  local_78 = (undefined8 *)0xafc00106ba6ee7d0;
  FUN_0077eb10(lVar6,&local_78,lVar8);
  local_50 = lVar8;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar9,0,1,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if ((*(int *)(param_1 + 0x5cc) == 0) && (*(char *)(param_1 + 0x620) == '\0')) {
    uVar10 = FUN_00bb48a0(param_1);
    uVar10 = FUN_016b7950(uVar10,param_2);
    iVar3 = FUN_00bb5fc0(uVar10,uVar10);
    if (iVar3 == -1) goto LAB_00bb968c;
    local_78 = (undefined8 *)0x4177c07893c416f0;
    FUN_0077eb10(lVar6,&local_78,lVar8);
    local_58 = lVar8;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar9,1,3,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    FUN_006cf0a0(&local_78,&DAT_02637be8);
    FUN_016bbf30(uVar9,1,&local_78);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    uVar10 = 2;
    cVar1 = *(char *)(param_1 + 0x694);
  }
  else {
LAB_00bb968c:
    uVar10 = 1;
    cVar1 = *(char *)(param_1 + 0x694);
  }
  lVar2 = local_80;
  if (cVar1 != '\0') goto joined_r0x00bb97cc;
  uVar4 = FUN_00bb48a0(param_1);
  local_78 = (undefined8 *)FUN_016b7950(uVar4,param_2);
  if ((long)local_78 < -0x1d83eaf2669b46df) {
    if ((local_78 == (undefined8 *)0x994d3beae4ee3ab4) ||
       (local_78 == (undefined8 *)0xa349a2e1408b69fa)) goto LAB_00bb9750;
  }
  else if ((local_78 == (undefined8 *)0xe27c150d9964b921) ||
          ((local_78 == (undefined8 *)0xee647be89bc9dfab ||
           (local_78 == (undefined8 *)0xe3a8da0abceefdc1)))) {
LAB_00bb9750:
    lVar5 = FUN_00ffda40(param_1 + 0x100,&local_78);
    lVar2 = local_80;
    if (*(char *)(lVar5 + 0x82) == '\0') goto joined_r0x00bb97cc;
  }
  local_78 = (undefined8 *)0xafc00306ba6eeb36;
  FUN_0077eb10(lVar6,&local_78,lVar8);
  local_80 = lVar8;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar9,uVar10,0,&local_80);
  lVar2 = 0;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
    lVar2 = local_80;
  }
joined_r0x00bb97cc:
  local_80 = lVar2;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return;
}


