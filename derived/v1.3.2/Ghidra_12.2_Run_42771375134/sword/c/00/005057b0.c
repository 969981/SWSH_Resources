/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005057b0; name: FUN_005057b0
 */


int FUN_005057b0(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  int local_60;
  undefined4 local_5c;
  float local_58 [5];
  int local_44;
  
  if ((*(byte *)(param_1 + 0x20) >> 1 & 1) == 0) {
LAB_00505830:
    iVar6 = 1;
  }
  else {
    plVar7 = *(long **)(param_1 + 0x58);
    iVar6 = *(int *)(param_1 + 0x68);
    iVar3 = (**(code **)(*plVar7 + 0x50))(plVar7,local_58);
    if (iVar3 - 0x2dU < 2) {
      uVar1 = (int)local_58[0] + iVar6;
      uVar4 = (**(code **)(*plVar7 + 0x58))(plVar7);
      iVar6 = 0x2d;
      if (uVar1 < uVar4) {
        iVar6 = 0x2e;
      }
    }
    else {
      iVar6 = 0x2d;
      if (iVar3 != 0x11) {
        iVar6 = iVar3;
      }
    }
    if (iVar6 == 0x2e) {
      iVar6 = 0x3f;
      bVar2 = *(byte *)(*(long *)(param_1 + 0x18) + 10);
      goto joined_r0x0050583c;
    }
    if (iVar6 == 0x2d) goto LAB_00505830;
  }
  bVar2 = *(byte *)(*(long *)(param_1 + 0x18) + 10);
joined_r0x0050583c:
  if ((bVar2 >> 6 & 1) != 0) {
    plVar7 = *(long **)(param_1 + 0x58);
    iVar3 = *(int *)(param_1 + 0x68);
    iVar5 = (**(code **)(*plVar7 + 0x50))(plVar7,&local_44);
    local_60 = 0;
    if (iVar5 == 2) {
      local_5c = 2;
    }
    else {
      (**(code **)(*plVar7 + 0x28))(plVar7,local_58);
      uVar1 = local_44 + iVar3;
      local_60 = (int)((float)uVar1 / local_58[0]);
      local_5c = 0x11;
      if (iVar5 != 0x11) {
        uVar4 = (**(code **)(*plVar7 + 0x58))(plVar7);
        local_5c = 0x11;
        if (uVar1 < uVar4) {
          local_5c = 1;
        }
      }
    }
    FUN_00490e30(*(undefined8 *)PTR_DAT_02712db8,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x1d8),
                 param_1,&local_60);
  }
  return iVar6;
}


