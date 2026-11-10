/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f4bd0; name: FUN_008f4bd0
 */


void FUN_008f4bd0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long local_58;
  long local_50;
  long local_48;
  undefined1 auStack_38 [8];
  
  if (*(char *)(*(long *)(param_1 + 0x88) + 0x3bb) == '\x01') {
    uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                         *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),0);
    if ((uVar1 & 1) != 0) {
      FUN_008f5360(param_1,0);
    }
    uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                         *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),1);
    if ((uVar1 & 1) != 0) {
      FUN_008f5360(param_1,1);
    }
    uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                         *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),2);
    if ((uVar1 & 1) != 0) {
      FUN_008f5360(param_1,2);
    }
    uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                         *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),3);
    if ((uVar1 & 1) != 0) {
      FUN_008f5360(param_1,3);
    }
    uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                         *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),4);
    if ((uVar1 & 1) != 0) {
      FUN_008f5360(param_1,4);
      return;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    lVar3 = *(long *)(param_1 + 0x140);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    plVar4 = (long *)(param_1 + 0x1e8);
    lVar2 = FUN_008ea4d0(auStack_38,uVar5);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (*plVar4 != 0) {
      (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
      *plVar4 = 0;
    }
    *(long *)(param_1 + 0x1e8) = lVar2;
    FUN_01524b60(lVar2,lVar3);
    FUN_008fabc0(param_1,plVar4);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    lVar3 = *(long *)(param_2 + 0xa20);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0x48);
      local_48 = lVar3;
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_008f4e30(param_1,param_1 + 600,&local_48);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      local_48 = 0;
    }
    lVar3 = *(long *)(param_2 + 0xa30);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0x48);
      local_50 = lVar3;
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_008f4e30(param_1,param_1 + 0x338,&local_50);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      local_50 = 0;
    }
    local_58 = *(long *)(param_2 + 0xa28);
    if (local_58 != 0) {
      plVar4 = (long *)(local_58 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_008f4e30(param_1,param_1 + 0x2c8,&local_58);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  return;
}


