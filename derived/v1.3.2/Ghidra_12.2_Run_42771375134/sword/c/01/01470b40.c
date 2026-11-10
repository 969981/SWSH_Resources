/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01470b40; name: FUN_01470b40
 */


void FUN_01470b40(long param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
  if (*(long *)(param_1 + 0x608) != 0) {
    FUN_00ff86a0(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),1);
    lVar6 = *(long *)(local_48 + 0x60);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    lVar8 = *(long *)(param_1 + 0x2b0);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    lVar7 = *(long *)(lVar8 + 0x2e8);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    FUN_016bbde0(*(undefined8 *)(param_1 + 0x608),0);
    FUN_016bbde0(*(undefined8 *)(param_1 + 0x608),1);
    FUN_016bbde0(*(undefined8 *)(param_1 + 0x608),2);
    FUN_016bbde0(*(undefined8 *)(param_1 + 0x608),3);
    FUN_016bbde0(*(undefined8 *)(param_1 + 0x608),4);
    piVar10 = *(int **)(param_1 + 0x5d0);
    if (*piVar10 == 0) {
      lVar8 = *(long *)(param_1 + 0x740);
      iVar2 = FUN_00884820(*(undefined8 *)(piVar10 + 2));
      if (iVar2 != 0) {
        uVar4 = 0;
        do {
          (**(code **)(**(long **)(piVar10 + 2) + 0x50))(*(long **)(piVar10 + 2),uVar4);
          sVar1 = FUN_008787f0();
          if (sVar1 != 0) {
            uVar5 = 0;
            goto LAB_01470c88;
          }
          uVar4 = uVar4 + 1;
          uVar3 = FUN_00884820(*(undefined8 *)(piVar10 + 2));
        } while (uVar4 < uVar3);
      }
      uVar5 = 1;
LAB_01470c88:
      *(undefined1 *)(lVar8 + 0x141) = uVar5;
      lVar8 = *(long *)(param_1 + 0x5d0);
      iVar2 = FUN_00884820(*(undefined8 *)(lVar8 + 8));
      if (iVar2 != 0) {
        uVar4 = 0;
        do {
          (**(code **)(**(long **)(lVar8 + 8) + 0x50))(*(long **)(lVar8 + 8),uVar4);
          sVar1 = FUN_008787f0();
          if (sVar1 != 0) {
            local_48 = -0x1d9a564d2467ed57;
            FUN_0077eb10(lVar6,&local_48,lVar7);
            uVar9 = *(undefined8 *)(param_1 + 0x608);
            local_50 = lVar7;
            if (lVar7 != 0) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
            }
            FUN_016bb930(uVar9,2,2,&local_50);
            if (local_50 != 0) {
              (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
              local_50 = 0;
            }
            break;
          }
          uVar4 = uVar4 + 1;
          uVar3 = FUN_00884820(*(undefined8 *)(lVar8 + 8));
        } while (uVar4 < uVar3);
      }
      uVar4 = FUN_00884820(*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 8));
      if (1 < uVar4) {
        local_48 = -0x1d9a574d2467ef0a;
        FUN_0077eb10(lVar6,&local_48,lVar7);
        uVar9 = *(undefined8 *)(param_1 + 0x608);
        local_58 = lVar7;
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        FUN_016bb930(uVar9,1,3,&local_58);
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          local_58 = 0;
        }
      }
    }
    local_48 = -0x1d9a594d2467f270;
    FUN_0077eb10(lVar6,&local_48,lVar7);
    uVar9 = *(undefined8 *)(param_1 + 0x608);
    local_60 = lVar7;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar9,3,0,&local_60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    local_48 = -0x1d9a584d2467f0bd;
    FUN_0077eb10(lVar6,&local_48,lVar7);
    uVar9 = *(undefined8 *)(param_1 + 0x608);
    local_68 = lVar7;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar9,0,1,&local_68);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
  }
  return;
}


