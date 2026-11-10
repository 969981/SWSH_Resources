/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d2100; name: FUN_004d2100
 */


void FUN_004d2100(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 local_50;
  int iStack_4c;
  ushort local_48;
  undefined1 local_46;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  long *local_30 [2];
  
  plVar2 = *(long **)(param_1 + 0x328);
  if (plVar2 != (long *)0x0) {
    plVar4 = (long *)plVar2[0xc];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,PTR_PTR_02713088);
      *(undefined8 *)(*(long *)(param_1 + 0x328) + 0x60) = 0;
      plVar2 = *(long **)(param_1 + 0x328);
    }
    (**(code **)(*plVar2 + 0x28))();
    *(undefined4 *)(*(long *)(param_1 + 0x328) + 0x68) = 0xffffffff;
  }
  local_30[0] = (long *)0x0;
  FUN_004ca460(param_1 + 0x70,local_30);
  if (local_30[0] == (long *)0x0) {
    return;
  }
  *(int *)(*(long *)(param_1 + 0x328) + 0x68) = (int)local_30[0][6];
  if (local_30[0][7] == 0) goto LAB_004d231c;
  local_40 = 0;
  local_36 = 0;
  local_38 = 1;
  lVar3 = FUN_00461800(*(undefined8 *)(param_1 + 0x328),local_30[0],*(long *)(param_1 + 0x20) + 0x10
                       ,*(long *)(param_1 + 0x20) + 0x50,1);
  if ((lVar3 == 0) ||
     (iVar1 = FUN_0045f0b0(*(undefined4 *)(*(long *)(param_1 + 0x328) + 0x68),
                           *(long *)(param_1 + 0x328) + 0x60,&local_40), iVar1 != 1)) {
LAB_004d22c8:
    plVar2 = *(long **)(param_1 + 0x328);
    if (plVar2 != (long *)0x0) {
LAB_004d22d0:
      plVar4 = (long *)plVar2[0xc];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,PTR_PTR_02713088);
        *(undefined8 *)(*(long *)(param_1 + 0x328) + 0x60) = 0;
        plVar2 = *(long **)(param_1 + 0x328);
      }
      (**(code **)(*plVar2 + 0x28))();
      *(undefined4 *)(*(long *)(param_1 + 0x328) + 0x68) = 0xffffffff;
    }
  }
  else {
    iVar1 = FUN_0045f330(*(undefined4 *)(*(long *)(param_1 + 0x328) + 0x68),6,&local_40);
    if (iVar1 != 0) {
      if (iVar1 != 0x2e) goto LAB_004d22c8;
      lVar3 = *(long *)(param_1 + 0x328);
      if (((*(uint *)(lVar3 + 0x68) & 0xfff0) == 0x10a0) &&
         (puVar5 = *(undefined8 **)(lVar3 + 0x60), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)(puVar5);
        (**(code **)(*(long *)PTR_PTR_02713088 + 0x18))(PTR_PTR_02713088,puVar5);
        lVar3 = *(long *)(param_1 + 0x328);
      }
      *(undefined8 *)(lVar3 + 0x60) = 0;
      plVar2 = *(long **)(param_1 + 0x328);
      if (plVar2 == (long *)0x0) goto LAB_004d2314;
      goto LAB_004d22d0;
    }
    iStack_4c = *(int *)(param_1 + 0x90);
    local_50 = *(undefined4 *)PTR_DAT_02712b38;
    local_48 = (ushort)(iStack_4c << 8) | 0x20;
    local_46 = 5;
    plVar2 = *(long **)(*(long *)(param_1 + 0x328) + 0x60);
    iVar1 = (**(code **)(*plVar2 + 0x38))
                      (plVar2,PTR_PTR_02713088,param_1 + 0xc0,
                       *(undefined8 *)(*(long *)(param_1 + 0x328) + 8),&local_50);
    if ((iVar1 != 1) ||
       (iVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x328) + 0x60) + 0x18))(), iVar1 != 1))
    goto LAB_004d22c8;
  }
LAB_004d2314:
  if (local_30[0] == (long *)0x0) {
    return;
  }
LAB_004d231c:
  (**(code **)(*local_30[0] + 0x18))(local_30[0]);
  return;
}


