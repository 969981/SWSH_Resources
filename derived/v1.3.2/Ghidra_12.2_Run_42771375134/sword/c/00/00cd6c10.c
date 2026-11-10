/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd6c10; name: FUN_00cd6c10
 */


void FUN_00cd6c10(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined1 auStack_50 [24];
  long local_38;
  
  uVar3 = FUN_012ae400(param_1 + 0xf8);
  FUN_00cd4e00(param_1,uVar3);
  lVar4 = FUN_012ae400(param_1 + 0xf8);
  if (lVar4 < 1) {
    *(undefined4 *)(param_1 + 0xf4) = 5;
    iVar1 = *(int *)(param_1 + 0xf4);
    goto joined_r0x00cd6c84;
  }
  lVar4 = *(long *)(param_1 + 0x78);
  iVar1 = *(int *)(lVar4 + 0x5cc);
  puVar6 = (undefined4 *)(lVar4 + 0x5cc);
  if (iVar1 - 6U < 3) {
    *(undefined4 *)(param_1 + 0xf4) = 5;
LAB_00cd6cd8:
    *puVar6 = 0;
  }
  else if (iVar1 != 0) {
    if (iVar1 == 4) {
      FUN_00ccf440(lVar4,2);
      FUN_006cf0a0(auStack_50,&DAT_02643800);
      FUN_016d3620(auStack_50);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      puVar6 = (undefined4 *)(*(long *)(param_1 + 0x78) + 0x5cc);
    }
    goto LAB_00cd6cd8;
  }
  iVar1 = *(int *)(param_1 + 0xf4);
joined_r0x00cd6c84:
  if (iVar1 == 5) {
    uVar5 = FUN_016b8190(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x5e0));
    plVar7 = *(long **)(param_1 + 0xb0);
    if (plVar7 != (long *)0x0) {
      (**(code **)(plVar7[9] + 0x10))();
    }
    uVar3 = (**(code **)(*plVar7 + 0x50))(plVar7,uVar5 >> 0x20);
    if (plVar7 != (long *)0x0) {
      (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
    }
    uVar2 = FUN_008783b0(uVar3);
    *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x2e0) = uVar2;
    FUN_00cd4ff0(param_1,uVar5 >> 0x20,uVar3,0);
    FUN_00ccd8c0(*(undefined8 *)(param_1 + 0x78),0);
    FUN_00ccd860(*(undefined8 *)(param_1 + 0x78),0,1);
    FUN_00cd53d0(param_1);
    FUN_00ccd420(*(undefined8 *)(param_1 + 0x78),0);
  }
  return;
}


