/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015078c0; name: FUN_015078c0
 */


int FUN_015078c0(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long local_58;
  
  plVar1 = (long *)(param_1 + 0x50a60);
  if (*plVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_0150b1c0();
  lVar6 = *param_2;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  iVar2 = iVar2 * 0x1e;
  if (*plVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0150b1c0();
    if (iVar3 == 0) goto joined_r0x015079e0;
    uVar7 = 0;
    iVar3 = 0;
    if (lVar6 == 0) {
      do {
        local_58 = 0;
        iVar4 = FUN_015073c0(param_1,uVar7,&local_58,1);
        iVar3 = iVar4 + iVar3;
        uVar7 = uVar7 + 1;
        uVar5 = FUN_0150b1c0(*plVar1);
      } while (uVar7 < uVar5);
    }
    else {
      do {
        local_58 = lVar6;
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(lVar6 + 0x48);
        iVar4 = FUN_015073c0(param_1,uVar7,&local_58,1);
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))(lVar6 + 0x48);
        local_58 = 0;
        iVar3 = iVar4 + iVar3;
        uVar7 = uVar7 + 1;
        uVar5 = FUN_0150b1c0(*plVar1);
      } while (uVar7 < uVar5);
    }
  }
  iVar2 = iVar2 - iVar3;
joined_r0x015079e0:
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return iVar2;
}


