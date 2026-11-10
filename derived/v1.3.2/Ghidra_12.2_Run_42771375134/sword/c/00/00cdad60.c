/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cdad60; name: FUN_00cdad60
 */


void FUN_00cdad60(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar3 = FUN_012ae400(param_1 + 0xe0);
  if (lVar3 < 1) {
    uVar2 = FUN_016dce00(*(undefined8 *)(param_1 + 0xd8),2);
    plVar5 = *(long **)(param_1 + 0xb0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(plVar5[9] + 0x10))();
    }
    uVar4 = (**(code **)(*plVar5 + 0x50))(plVar5,uVar2);
    if (plVar5 != (long *)0x0) {
      (**(code **)(plVar5[9] + 0x18))(plVar5 + 9);
    }
    FUN_00cd4ff0(param_1,uVar2,uVar4,1);
    FUN_00cd5a60(param_1);
    if (*(char *)(param_1 + 0xf0) == *(char *)(*(long *)(param_1 + 0xd0) + 0x2d9)) {
      *(undefined4 *)(param_1 + 0xf4) = 3;
      FUN_00ccd420(*(undefined8 *)(param_1 + 0x78),1);
      FUN_00ccd810(*(undefined8 *)(param_1 + 0x78),1);
      FUN_00ccd8c0(*(undefined8 *)(param_1 + 0x78),1);
      FUN_00ccd860(*(undefined8 *)(param_1 + 0x78),1,1);
      lVar3 = *(long *)(param_1 + 0x78);
      iVar1 = *(int *)(lVar3 + 0x5cc);
    }
    else {
      *(undefined4 *)(param_1 + 0xf4) = 4;
      lVar3 = *(long *)(param_1 + 0x78);
      iVar1 = *(int *)(lVar3 + 0x5cc);
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x78);
    iVar1 = *(int *)(lVar3 + 0x5cc);
  }
  if (iVar1 != 0) {
    if (iVar1 == 4) {
      FUN_00ccf440(lVar3,2);
      FUN_006cf0a0(auStack_50,&DAT_02643c28);
      FUN_016d3620(auStack_50);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      lVar3 = *(long *)(param_1 + 0x78);
    }
    *(undefined4 *)(lVar3 + 0x5cc) = 0;
  }
  return;
}


