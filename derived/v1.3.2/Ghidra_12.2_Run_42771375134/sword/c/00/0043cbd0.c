/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043cbd0; name: FUN_0043cbd0
 */


undefined8 FUN_0043cbd0(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_2 != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x28);
    if (puVar4 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
      do {
        puVar5 = puVar4;
        if (puVar5[2] == param_2) {
          lVar3 = *(long *)(param_2 + 8);
          if (*(short *)(lVar3 + 0x34) == 0x503) {
            iVar1 = *(int *)(lVar3 + 0xe8);
            *(undefined4 *)(lVar3 + 0xe8) = 0;
            iVar1 = iVar1 + -1;
          }
          else {
            iVar1 = 0;
          }
          FUN_0043a7c0(param_1,*(undefined4 *)(lVar3 + 0x30),param_2,iVar1);
          puVar4 = (undefined8 *)(param_1 + 0x28);
          if (*(undefined8 **)(param_1 + 0x28) != puVar5) {
            puVar4 = puVar6;
          }
          *puVar4 = *puVar5;
          if (*(undefined8 **)(param_1 + 0x30) == puVar5) {
            *(undefined8 **)(param_1 + 0x30) = puVar6;
          }
          *puVar5 = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 **)(param_1 + 0x38) = puVar5;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
          return 1;
        }
        puVar4 = (undefined8 *)*puVar5;
        puVar6 = puVar5;
      } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
    }
    for (plVar2 = *(long **)(param_1 + 0x50); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2[2] == param_2) {
        if (*(short *)(*(long *)(param_2 + 8) + 0x34) == 0x503) {
          iVar1 = *(int *)(param_2 + 0x34) + *(int *)(*(long *)(param_2 + 8) + 0xe8);
        }
        else {
          iVar1 = *(int *)(param_2 + 0x34) + 1;
        }
        *(int *)(param_2 + 0x34) = iVar1;
        return 1;
      }
    }
  }
  return 1;
}


