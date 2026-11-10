/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e7a10; name: FUN_003e7a10
 */


void FUN_003e7a10(long param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined1 auStack_38 [8];
  undefined1 auStack_28 [8];
  
  plVar3 = *(long **)(*(long *)(param_1 + 0x720) + 0x6e8);
  (**(code **)(*plVar3 + 0x60))(plVar3,param_2[8] + 0x20);
  (**(code **)(**(long **)(param_1 + 0x760) + 0x28))
            (*(long **)(param_1 + 0x760),*(undefined4 *)(param_2 + 9));
  lVar5 = param_1 + (long)*(int *)(param_2[8] + 0x48) * 4;
  *(int *)(lVar5 + 0x1298) = *(int *)(lVar5 + 0x1298) + -1;
  FUN_003fc7d0(param_2,param_3 & 1);
  piVar8 = *(int **)(param_1 + 0x1138);
  (**(code **)*param_2)(param_2);
  if ((char)piVar8[8] == '\0') {
    iVar4 = piVar8[6];
  }
  else {
    FUN_003f1c40(*(undefined8 *)(piVar8 + 4),piVar8[6],auStack_28,auStack_38,0x20);
    iVar4 = piVar8[6];
  }
  iVar4 = iVar4 + -1;
  if (-1 < iVar4) {
    iVar6 = 0;
    do {
      uVar2 = iVar4 + iVar6 >> 1;
      puVar7 = *(undefined8 **)(*(long *)(piVar8 + 4) + (ulong)uVar2 * 0x18);
      puVar1 = (undefined8 *)((long)puVar7 + (ulong)(uint)(*piVar8 * piVar8[1]));
      if ((puVar7 <= param_2 && param_2 <= puVar1) && (param_2 < puVar7 || puVar1 != param_2)) {
        lVar5 = *(long *)(piVar8 + 4) + (ulong)uVar2 * 0x18;
        *param_2 = *(undefined8 *)(lVar5 + 8);
        *(undefined8 **)(lVar5 + 8) = param_2;
        if ((char)piVar8[8] != '\0') {
          piVar8[2] = uVar2;
        }
        *(undefined1 *)(piVar8 + 8) = 0;
        return;
      }
      if (puVar7 < param_2) {
        iVar6 = uVar2 + 1;
      }
      else {
        iVar4 = uVar2 - 1;
      }
    } while (iVar6 <= iVar4);
  }
  return;
}


