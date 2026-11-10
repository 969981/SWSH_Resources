/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d0510; name: FUN_004d0510
 */


uint FUN_004d0510(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar4 = *(long **)(param_1 + 0x20);
  if ((*(ushort *)((long)plVar4 + 0x154) >> 5 & 1) == 0) {
    (**(code **)(*plVar4 + 0x50))(plVar4,0);
  }
  else if ((*(ushort *)((long)plVar4 + 0x154) >> 9 & 1) != 0) {
    (**(code **)(*plVar4 + 0x58))();
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar2 = FUN_004515b0(*(undefined8 *)(param_1 + 0x20));
  if ((uVar2 & 1) != 0) {
    FUN_00450df0(*(undefined8 *)(param_1 + 0x20),param_1 + 0x50);
    iVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + 0x148) + 0x88))();
    puVar1 = PTR_DAT_02712ae8;
    if (*(int *)(param_1 + 0x58) != 0) {
      plVar4 = *(long **)(param_1 + 0x50);
      if (iVar3 == 10) {
        do {
          if (((*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x48) != *plVar4) ||
              ((int)plVar4[2] == 2)) &&
             (plVar5 = (long *)FUN_00435260(*(undefined8 *)puVar1,(int)plVar4[1],1),
             plVar5 != (long *)0x0)) {
            uVar6 = FUN_00453750(plVar5);
            if ((uVar6 & 1) != 0) {
              FUN_004c5fc0(plVar5,plVar4,param_1);
            }
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
          plVar4 = plVar4 + 4;
        } while (plVar4 != (long *)(*(long *)(param_1 + 0x50) +
                                   (ulong)*(uint *)(param_1 + 0x58) * 0x20));
      }
      else {
        do {
          plVar5 = (long *)FUN_00435260(*(undefined8 *)puVar1,(int)plVar4[1],1);
          if (plVar5 != (long *)0x0) {
            uVar6 = FUN_00453750(plVar5);
            if ((uVar6 & 1) != 0) {
              FUN_004c5fc0(plVar5,plVar4,param_1);
            }
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
          plVar4 = plVar4 + 4;
        } while (plVar4 != (long *)(*(long *)(param_1 + 0x50) +
                                   (ulong)*(uint *)(param_1 + 0x58) * 0x20));
      }
    }
  }
  return uVar2 & 1;
}


