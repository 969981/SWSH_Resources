/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004676e0; name: FUN_004676e0
 */


void FUN_004676e0(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (uVar4 = (ulong)*(uint *)(param_1 + 0x20), *(uint *)(param_1 + 0x20) != 0)) {
    lVar5 = *(long *)(param_1 + 0x18);
    lVar6 = lVar5;
    do {
      if (*(long *)(lVar6 + 0x10) != 0) {
        FUN_00480a30(*(long *)(lVar6 + 0x10),param_1);
        *(undefined8 *)(lVar6 + 0x10) = 0;
        lVar5 = *(long *)(param_1 + 0x18);
        uVar4 = (ulong)*(uint *)(param_1 + 0x20);
      }
      lVar6 = lVar6 + 0x30;
    } while (lVar6 != lVar5 + uVar4 * 0x30);
  }
  *(long *)(param_1 + 0x30) = param_2;
  puVar1 = PTR_DAT_02712ae8;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    lVar6 = *(long *)(param_1 + 0x18);
    do {
      if ((*(long *)(lVar6 + 0x10) == 0) &&
         (plVar3 = (long *)FUN_00435260(*(undefined8 *)puVar1,*(undefined4 *)(lVar6 + 8),0),
         plVar3 != (long *)0x0)) {
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (plVar3[0xf] != 0 && plVar3[0xf] == *(long *)(param_1 + 0x30))) {
          *(long **)(lVar6 + 0x10) = plVar3;
          iVar2 = FUN_00480880(plVar3,param_1);
          if (iVar2 != 1) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
          }
        }
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      lVar6 = lVar6 + 0x30;
    } while (lVar6 != *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30);
  }
  return;
}


