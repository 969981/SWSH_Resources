/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ccd80; name: FUN_004ccd80
 */


void FUN_004ccd80(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  int local_58;
  undefined4 local_54;
  float local_50 [4];
  int local_34;
  
  (**(code **)(**(long **)(param_1 + 0x58) + 0x68))();
  if ((param_2 < 2) && (*(int *)(param_1 + 0x68) != 0)) {
    if ((*(byte *)(param_1 + 0x82) >> 1 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x88))();
    }
    else {
      *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xfd;
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 10) >> 6 & 1) != 0) {
    plVar5 = *(long **)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x68);
    iVar3 = (**(code **)(*plVar5 + 0x50))(plVar5,&local_34);
    local_58 = 0;
    if (iVar3 == 2) {
      local_54 = 2;
    }
    else {
      (**(code **)(*plVar5 + 0x28))(plVar5,local_50);
      uVar1 = local_34 + iVar2;
      local_58 = (int)((float)uVar1 / local_50[0]);
      local_54 = 0x11;
      if (iVar3 != 0x11) {
        uVar4 = (**(code **)(*plVar5 + 0x58))(plVar5);
        local_54 = 0x11;
        if (uVar1 < uVar4) {
          local_54 = 1;
        }
      }
    }
    FUN_00490e30(*(undefined8 *)PTR_DAT_02712db8,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x1d8),
                 param_1,&local_58);
  }
  return;
}


