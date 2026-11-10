/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f55b0; name: FUN_008f55b0
 */


void FUN_008f55b0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_38;
  
  lVar2 = param_1;
  if (*(long *)(param_2 + 0x3c0) == 0) {
LAB_008f5618:
    if (*(long *)(param_2 + 0x3d0) == 0) goto LAB_008f569c;
LAB_008f5620:
    local_38 = *(long *)(param_1 + 0x420);
    if (local_38 == 0) {
      lVar2 = FUN_008f57e0(lVar2,&local_38,1,param_2 + 0x3d0);
      goto LAB_008f569c;
    }
    plVar4 = (long *)(local_38 + 0x48);
    uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_008f57e0(uVar1,&local_38,1,param_2 + 0x3d0);
    lVar2 = (**(code **)(*plVar4 + 0x18))(plVar4);
    if (*(long *)(param_2 + 0x3e0) != 0) goto LAB_008f56a4;
LAB_008f56e8:
    lVar3 = *(long *)(param_2 + 0x3f0);
  }
  else {
    local_38 = *(long *)(param_1 + 0x418);
    if (local_38 != 0) {
      plVar4 = (long *)(local_38 + 0x48);
      uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_008f57e0(uVar1,&local_38,0,param_2 + 0x3c0);
      lVar2 = (**(code **)(*plVar4 + 0x18))(plVar4);
      goto LAB_008f5618;
    }
    lVar2 = FUN_008f57e0(param_1,&local_38,0,param_2 + 0x3c0);
    if (*(long *)(param_2 + 0x3d0) != 0) goto LAB_008f5620;
LAB_008f569c:
    if (*(long *)(param_2 + 0x3e0) == 0) goto LAB_008f56e8;
LAB_008f56a4:
    local_38 = *(long *)(param_1 + 0x428);
    if (local_38 != 0) {
      plVar4 = (long *)(local_38 + 0x48);
      uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_008f57e0(uVar1,&local_38,2,param_2 + 0x3e0);
      lVar2 = (**(code **)(*plVar4 + 0x18))(plVar4);
      goto LAB_008f56e8;
    }
    lVar2 = FUN_008f57e0(lVar2,&local_38,2,param_2 + 0x3e0);
    lVar3 = *(long *)(param_2 + 0x3f0);
  }
  if (lVar3 != 0) {
    local_38 = *(long *)(param_1 + 0x430);
    if (local_38 != 0) {
      plVar4 = (long *)(local_38 + 0x48);
      uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_008f57e0(uVar1,&local_38,3,param_2 + 0x3f0);
      lVar2 = (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar3 = *(long *)(param_2 + 0x400);
      goto joined_r0x008f5738;
    }
    lVar2 = FUN_008f57e0(lVar2,&local_38,3,param_2 + 0x3f0);
  }
  lVar3 = *(long *)(param_2 + 0x400);
joined_r0x008f5738:
  if (lVar3 != 0) {
    local_38 = *(long *)(param_1 + 0x438);
    if (local_38 == 0) {
      FUN_008f57e0(lVar2,&local_38,4,param_2 + 0x400);
    }
    else {
      plVar4 = (long *)(local_38 + 0x48);
      uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_008f57e0(uVar1,&local_38,4,param_2 + 0x400);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  return;
}


