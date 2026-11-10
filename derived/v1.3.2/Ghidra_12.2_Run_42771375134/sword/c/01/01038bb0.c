/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01038bb0; name: FUN_01038bb0
 */


void FUN_01038bb0(long param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long local_b8;
  undefined1 *local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 *local_98;
  long local_90 [12];
  
  local_a0 = (code *)0x0;
  local_98 = (undefined1 *)0x0;
  local_b0 = (undefined1 *)0x0;
  local_a8 = (code *)0x0;
  iVar2 = FUN_0077d480(*(undefined8 *)(param_1 + 0x20));
  if (iVar2 == 0) goto LAB_01039008;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  local_b8 = *(long *)(param_1 + 0x20);
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
  }
  FUN_016b4ab0(uVar7,0,&local_b8);
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    local_b8 = 0;
  }
  iVar2 = FUN_0077d480(*(undefined8 *)(param_1 + 0x28));
  if (iVar2 == 0) {
    iVar2 = 1;
    pcVar6 = local_a8;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    local_b8 = *(long *)(param_1 + 0x28);
    if (local_b8 != 0) {
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
    }
    FUN_016b4ab0(uVar7,1,&local_b8);
    if (local_b8 != 0) {
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
      local_b8 = 0;
    }
    iVar2 = FUN_0077d480(*(undefined8 *)(param_1 + 0x30));
    if (iVar2 == 0) {
      iVar2 = 2;
      pcVar6 = local_a8;
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      local_b8 = *(long *)(param_1 + 0x30);
      if (local_b8 != 0) {
        (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
      }
      FUN_016b4ab0(uVar7,2,&local_b8);
      if (local_b8 != 0) {
        (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
        local_b8 = 0;
      }
      iVar2 = FUN_0077d480(*(undefined8 *)(param_1 + 0x38));
      if (iVar2 == 0) {
        iVar2 = 3;
        pcVar6 = local_a8;
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x18);
        local_b8 = *(long *)(param_1 + 0x38);
        if (local_b8 != 0) {
          (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
        }
        FUN_016b4ab0(uVar7,3,&local_b8);
        if (local_b8 != 0) {
          (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
          local_b8 = 0;
        }
        iVar2 = FUN_0077d480(*(undefined8 *)(param_1 + 0x40));
        if (iVar2 == 0) {
          iVar2 = 4;
          pcVar6 = local_a8;
        }
        else {
          uVar7 = *(undefined8 *)(param_1 + 0x18);
          local_b8 = *(long *)(param_1 + 0x40);
          if (local_b8 != 0) {
            (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
          }
          FUN_016b4ab0(uVar7,4,&local_b8);
          if (local_b8 != 0) {
            (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
            local_b8 = 0;
          }
          iVar2 = FUN_0077d480(*(undefined8 *)(param_1 + 0x48));
          if (iVar2 == 0) {
            iVar2 = 5;
            pcVar6 = local_a8;
          }
          else {
            uVar7 = *(undefined8 *)(param_1 + 0x18);
            local_b8 = *(long *)(param_1 + 0x48);
            if (local_b8 != 0) {
              (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
            }
            FUN_016b4ab0(uVar7,5,&local_b8);
            if (local_b8 != 0) {
              (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
              local_b8 = 0;
            }
            iVar2 = FUN_0077d480(*(undefined8 *)(param_1 + 0x50));
            if (iVar2 == 0) {
              iVar2 = 6;
              pcVar6 = local_a8;
            }
            else {
              uVar7 = *(undefined8 *)(param_1 + 0x18);
              local_b8 = *(long *)(param_1 + 0x50);
              if (local_b8 != 0) {
                (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
              }
              FUN_016b4ab0(uVar7,6,&local_b8);
              if (local_b8 == 0) {
                iVar2 = 7;
                local_b8 = 0;
                pcVar6 = local_a8;
              }
              else {
                (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
                local_b8 = 0;
                iVar2 = 7;
                pcVar6 = local_a8;
              }
            }
          }
        }
      }
    }
  }
  if (pcVar6 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar6)(local_90);
  }
  local_b0 = &LAB_01039220;
  local_a8 = FUN_01039260;
  local_a0 = FUN_01039270;
  local_98 = &LAB_01039280;
  lVar8 = *(long *)(param_1 + 0x18);
  pcVar6 = *(code **)(lVar8 + 0x168);
  local_90[0] = param_1;
  if (pcVar6 == (code *)0x0) {
LAB_01038ea0:
    (*local_a0)(local_90,lVar8 + 0x180);
    *(undefined1 **)(lVar8 + 0x178) = local_98;
    *(code **)(lVar8 + 0x168) = local_a8;
    *(code **)(lVar8 + 0x170) = local_a0;
    *(undefined8 *)(lVar8 + 0x160) = local_b0;
  }
  else {
    *(undefined8 *)(lVar8 + 0x170) = 0;
    *(undefined8 *)(lVar8 + 0x178) = 0;
    *(undefined8 *)(lVar8 + 0x160) = 0;
    *(undefined8 *)(lVar8 + 0x168) = 0;
    (*pcVar6)(lVar8 + 0x180);
    if (local_a0 != (code *)0x0) goto LAB_01038ea0;
  }
  FUN_016b4ca0(*(undefined8 *)(param_1 + 0x18),0);
  FUN_016b4ca0(*(undefined8 *)(param_1 + 0x18),1);
  FUN_016b4ca0(*(undefined8 *)(param_1 + 0x18),2);
  FUN_016b4ca0(*(undefined8 *)(param_1 + 0x18),3);
  FUN_016b4ca0(*(undefined8 *)(param_1 + 0x18),4);
  FUN_016b4ca0(*(undefined8 *)(param_1 + 0x18),5);
  FUN_016b4ca0(*(undefined8 *)(param_1 + 0x18),6);
  if (*(char *)(param_1 + 0xf4) != '\0') {
    sVar1 = *(short *)(param_1 + 0xf6);
    uVar5 = iVar2 - 1;
    if ((uint)(int)sVar1 <= uVar5 && (int)sVar1 != 0xffffffff) {
      uVar5 = (uint)sVar1;
    }
    FUN_016b4ac0(*(undefined8 *)(param_1 + 0x18),uVar5,&DAT_02162bc8,1);
  }
  switch(*(undefined4 *)(param_1 + 0xe0)) {
  case 0:
    FUN_016b4e20(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0xe8),iVar2);
    goto switchD_01038f74_default;
  case 1:
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined4 *)(param_1 + 0xf0);
    uVar3 = 0;
    break;
  case 2:
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined4 *)(param_1 + 0xf0);
    uVar3 = 1;
    break;
  case 3:
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined4 *)(param_1 + 0xf0);
    uVar3 = 2;
    break;
  case 4:
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined4 *)(param_1 + 0xf0);
    uVar3 = 3;
    break;
  case 5:
    FUN_016b53f0(*(undefined8 *)(param_1 + 0x18),param_1 + 0x100,iVar2);
  default:
    goto switchD_01038f74_default;
  }
  FUN_016b5480(uVar7,uVar3,uVar4,iVar2);
switchD_01038f74_default:
  *(undefined1 *)(param_1 + 0x58) = 1;
  FUN_016b5d60(*(undefined8 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0xf8));
LAB_01039008:
  pcVar6 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar6)(local_90);
  }
  return;
}


