/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cda740; name: FUN_00cda740
 */


void FUN_00cda740(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  long *plVar7;
  long local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar6 = *(long *)(*(long *)(param_1 + 200) + 0x10);
  FUN_00cd4e00(param_1,*(undefined4 *)(lVar6 + 0x6a0));
  if (*(int *)(lVar6 + 0x6a0) == 0) {
    *(undefined4 *)(param_1 + 0xf4) = 4;
    iVar1 = *(int *)(param_1 + 0xf4);
    goto joined_r0x00cda7a4;
  }
  lVar6 = *(long *)(param_1 + 0x78);
  iVar1 = *(int *)(lVar6 + 0x5cc);
  puVar5 = (undefined4 *)(lVar6 + 0x5cc);
  if (iVar1 - 6U < 3) {
    *(undefined4 *)(param_1 + 0xf4) = 4;
LAB_00cda7f8:
    *puVar5 = 0;
  }
  else if (iVar1 != 0) {
    if (iVar1 == 4) {
      FUN_00ccf440(lVar6,2);
      FUN_006cf0a0(auStack_50,&DAT_02643c28);
      FUN_016d3620(auStack_50);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x78) + 0x5cc);
    }
    goto LAB_00cda7f8;
  }
  iVar1 = *(int *)(param_1 + 0xf4);
joined_r0x00cda7a4:
  if (iVar1 == 4) {
    uVar3 = FUN_016b8190(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x5e0));
    plVar7 = *(long **)(param_1 + 0xb0);
    uVar3 = uVar3 >> 0x20;
    if (plVar7 != (long *)0x0) {
      (**(code **)(plVar7[9] + 0x10))();
    }
    uVar4 = (**(code **)(*plVar7 + 0x50))(plVar7,uVar3);
    if (plVar7 != (long *)0x0) {
      (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
    }
    uVar2 = FUN_008783b0(uVar4);
    *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x2e0) = uVar2;
    FUN_00cd4ff0(param_1,uVar3,uVar4,1);
    plVar7 = *(long **)(*(long *)(param_1 + 0xd0) + 0x60);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 200) + 0x10);
    local_58 = (**(code **)(*plVar7 + 0x50))
                         (plVar7,*(undefined1 *)(*(long *)(param_1 + 0xd0) + 0x2d9));
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    }
    FUN_011820e0(uVar4,&local_58,uVar3);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    FUN_01182e90(*(undefined8 *)(*(long *)(param_1 + 200) + 0x10));
    FUN_00ccd8c0(*(undefined8 *)(param_1 + 0x78),0);
    FUN_00ccd860(*(undefined8 *)(param_1 + 0x78),0,1);
    FUN_00ccd420(*(undefined8 *)(param_1 + 0x78),0);
    FUN_00cd5a60(param_1);
  }
  return;
}


