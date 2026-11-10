/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01473440; name: FUN_01473440
 */


void FUN_01473440(long param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *local_e0;
  code *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  long alStack_c0 [12];
  long local_60;
  long local_58;
  
  if (*param_2 == -0x340d631b7bddd9bb || *param_2 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x4c0) == 0) {
    return;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (lVar3 == 0) {
    return;
  }
  plVar4 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  lVar3 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_e0 = &local_58;
  local_58 = 0;
  local_d8 = (code *)0x18cd1891cbc1757a;
  FUN_008a0cd0(lVar3,&local_e0,0);
  lVar1 = local_58;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar1 == 0) {
    return;
  }
  FUN_00ff86a0(&local_e0,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar3 = local_e0[0xc];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(local_e0[9] + 0x18))();
    local_e0 = (long *)0x0;
  }
  lVar6 = *(long *)(param_1 + 0x2b0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar6 + 0x2e8);
  plVar4 = (long *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  lVar6 = *param_2;
  if (lVar5 == 0) {
    if ((lVar6 != -0x340d631b7bddd9bb) && (lVar6 != 0)) {
      FUN_0077eb10(lVar3,param_2,0);
      local_60 = 0;
      FUN_016b4ab0(lVar1,0,&local_60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
    }
    lVar6 = param_2[1];
    if ((lVar6 != -0x340d631b7bddd9bb) && (lVar6 != 0)) {
      FUN_0077eb10(lVar3,param_2 + 1,0);
      local_60 = 0;
      FUN_016b4ab0(lVar1,1,&local_60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
    }
    lVar6 = param_2[2];
    if ((lVar6 != -0x340d631b7bddd9bb) && (lVar6 != 0)) {
      FUN_0077eb10(lVar3,param_2 + 2,0);
      local_60 = 0;
      FUN_016b4ab0(lVar1,2,&local_60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
    }
    lVar6 = param_2[3];
    if ((lVar6 != -0x340d631b7bddd9bb) && (lVar6 != 0)) {
      FUN_0077eb10(lVar3,param_2 + 3,0);
      local_60 = 0;
      FUN_016b4ab0(lVar1,3,&local_60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
    }
    lVar6 = param_2[4];
    if ((lVar6 != -0x340d631b7bddd9bb) && (lVar6 != 0)) {
      FUN_0077eb10(lVar3,param_2 + 4,0);
      local_60 = 0;
      FUN_016b4ab0(lVar1,4,&local_60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
    }
    lVar6 = param_2[5];
    if ((lVar6 != -0x340d631b7bddd9bb) && (lVar6 != 0)) {
      FUN_0077eb10(lVar3,param_2 + 5,0);
      local_60 = 0;
      FUN_016b4ab0(lVar1,5,&local_60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
    }
    lVar6 = param_2[6];
    if ((lVar6 != -0x340d631b7bddd9bb) && (lVar6 != 0)) {
      FUN_0077eb10(lVar3,param_2 + 6,0);
      local_60 = 0;
      goto LAB_01473a0c;
    }
  }
  else {
    if ((lVar6 != -0x340d631b7bddd9bb) && (lVar6 != 0)) {
      FUN_0077eb10(lVar3,param_2,lVar5);
      local_60 = lVar5;
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar4);
      FUN_016b4ab0(lVar1,0,&local_60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
    }
    lVar6 = param_2[1];
    if ((lVar6 != -0x340d631b7bddd9bb) && (lVar6 != 0)) {
      FUN_0077eb10(lVar3,param_2 + 1,lVar5);
      local_60 = lVar5;
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar4);
      FUN_016b4ab0(lVar1,1,&local_60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
    }
    lVar6 = param_2[2];
    if ((lVar6 != -0x340d631b7bddd9bb) && (lVar6 != 0)) {
      FUN_0077eb10(lVar3,param_2 + 2,lVar5);
      local_60 = lVar5;
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar4);
      FUN_016b4ab0(lVar1,2,&local_60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
    }
    lVar6 = param_2[3];
    if ((lVar6 != -0x340d631b7bddd9bb) && (lVar6 != 0)) {
      FUN_0077eb10(lVar3,param_2 + 3,lVar5);
      local_60 = lVar5;
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar4);
      FUN_016b4ab0(lVar1,3,&local_60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
    }
    lVar6 = param_2[4];
    if ((lVar6 != -0x340d631b7bddd9bb) && (lVar6 != 0)) {
      FUN_0077eb10(lVar3,param_2 + 4,lVar5);
      local_60 = lVar5;
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar4);
      FUN_016b4ab0(lVar1,4,&local_60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
    }
    lVar6 = param_2[5];
    if ((lVar6 != -0x340d631b7bddd9bb) && (lVar6 != 0)) {
      FUN_0077eb10(lVar3,param_2 + 5,lVar5);
      local_60 = lVar5;
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar4);
      FUN_016b4ab0(lVar1,5,&local_60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
    }
    lVar6 = param_2[6];
    if ((lVar6 != -0x340d631b7bddd9bb) && (lVar6 != 0)) {
      FUN_0077eb10(lVar3,param_2 + 6,lVar5);
      local_60 = lVar5;
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar4);
LAB_01473a0c:
      FUN_016b4ab0(lVar1,6,&local_60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
    }
  }
  pcVar2 = *(code **)(lVar1 + 0x168);
  local_e0 = (long *)&LAB_01476ca0;
  local_d8 = FUN_01476cc0;
  local_d0 = FUN_01476cd0;
  local_c8 = &LAB_01476ce0;
  alStack_c0[0] = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x170) = 0;
    *(undefined8 *)(lVar1 + 0x178) = 0;
    *(undefined8 *)(lVar1 + 0x160) = 0;
    *(undefined8 *)(lVar1 + 0x168) = 0;
    (*pcVar2)(lVar1 + 0x180);
    if (local_d0 == (code *)0x0) goto LAB_01473ab8;
  }
  (*local_d0)(alStack_c0,lVar1 + 0x180);
  *(undefined1 **)(lVar1 + 0x178) = local_c8;
  *(code **)(lVar1 + 0x168) = local_d8;
  *(code **)(lVar1 + 0x170) = local_d0;
  *(undefined8 *)(lVar1 + 0x160) = local_e0;
LAB_01473ab8:
  pcVar2 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (long *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar2)(alStack_c0);
  }
  if (lVar5 != 0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


