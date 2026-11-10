/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d4c90; name: FUN_004d4c90
 */


void FUN_004d4c90(long param_1,long *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  if ((*(byte *)(param_1 + 0x344) & 3) != 1) {
    uVar5 = 0xf;
    if ((*(byte *)(param_1 + 0x344) & 1) != 0) {
      uVar5 = 0;
    }
    FUN_004d46a0(param_1,uVar5);
  }
  if ((*(long *)(param_1 + 0x328) == 0) ||
     (plVar3 = *(long **)(*(long *)(param_1 + 0x328) + 0x60), plVar3 == (long *)0x0)) {
    lVar4 = FUN_004d4eb0(param_1);
    *param_2 = lVar4;
    if (*(int *)(param_1 + 0x348) == 1) {
      *(undefined2 *)(param_1 + 0x342) = *(undefined2 *)(param_1 + 0x340);
    }
    if (*(long *)(param_1 + 0x20) == 0) {
      bVar2 = false;
      lVar4 = *(long *)(param_1 + 0xa8);
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0x38);
      if ((*(byte *)(param_1 + 0x60) >> 2 & 1) != 0) {
        uVar5 = *(undefined4 *)(param_1 + 0xb4);
      }
      *(undefined4 *)(param_1 + 0xb0) = uVar5;
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x38);
      local_24[0] = 1;
      local_28[0] = 0;
      uStack_34 = *(undefined4 *)(lVar4 + 8);
      local_38 = 0;
      puVar1 = (undefined4 *)0x0;
      if ((*(byte *)(param_1 + 0xb8) & 2) != 0) {
        puVar1 = &local_38;
      }
      FUN_004d06a0(0x3f800000,param_1,*(long *)(param_1 + 0x20),uStack_34,0,local_28,local_24,puVar1
                  );
      bVar2 = false;
      *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 4;
      lVar4 = *(long *)(param_1 + 0xa8);
    }
  }
  else {
    (**(code **)(*plVar3 + 0x58))(plVar3,param_1 + 0x88);
    lVar4 = FUN_004d4eb0(param_1);
    *param_2 = lVar4;
    if (*(int *)(param_1 + 0x348) == 1) {
      *(undefined2 *)(param_1 + 0x342) = *(undefined2 *)(param_1 + 0x340);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x38);
      if ((*(byte *)(param_1 + 0x60) >> 2 & 1) != 0) {
        uVar5 = *(undefined4 *)(param_1 + 0xb4);
      }
      *(undefined4 *)(param_1 + 0xb0) = uVar5;
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x38);
      local_24[0] = 1;
      local_28[0] = 0;
      uStack_34 = *(undefined4 *)(lVar4 + 8);
      local_38 = 0;
      puVar1 = (undefined4 *)0x0;
      if ((*(byte *)(param_1 + 0xb8) & 2) != 0) {
        puVar1 = &local_38;
      }
      FUN_004d06a0(0x3f800000,param_1,*(long *)(param_1 + 0x20),uStack_34,0,local_28,local_24,puVar1
                  );
      *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 4;
    }
    plVar3 = *(long **)(*(long *)(param_1 + 0x328) + 0x60);
    (**(code **)(*plVar3 + 0x60))(plVar3,*param_2);
    bVar2 = true;
    lVar4 = *(long *)(param_1 + 0xa8);
  }
  if ((lVar4 != 0) &&
     (FUN_004d5140(*(undefined4 *)(param_1 + 0xb4),*param_2),
     (*(byte *)(param_1 + 0xb8) & 0x7c) != 0)) {
    FUN_00457d60(*(undefined8 *)PTR_DAT_02712d50,*(undefined4 *)(*(long *)(param_1 + 0x70) + 0x10),
                 *(long *)(param_1 + 0xa8),*(undefined4 *)(*(long *)(param_1 + 0xa8) + 8));
  }
  if (bVar2) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x328) + 0x60);
    (**(code **)(*plVar3 + 0x68))(plVar3,*param_2,*(undefined8 *)(param_1 + 0xa8));
  }
  return;
}


