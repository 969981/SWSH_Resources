/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e9000; name: FUN_003e9000
 */


void FUN_003e9000(long param_1,ulong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_38 [8];
  
  puVar8 = (undefined8 *)param_2[1];
  if (puVar8 != (undefined8 *)0x0) {
    piVar7 = *(int **)(param_1 + 0x1140);
    if ((char)piVar7[8] == '\0') {
      iVar3 = piVar7[6];
    }
    else {
      FUN_003f1c40(*(undefined8 *)(piVar7 + 4),piVar7[6],auStack_60,auStack_68,0x20);
      iVar3 = piVar7[6];
    }
    iVar3 = iVar3 + -1;
    if (-1 < iVar3) {
      iVar5 = 0;
      do {
        uVar2 = iVar3 + iVar5 >> 1;
        puVar6 = *(undefined8 **)(*(long *)(piVar7 + 4) + (ulong)uVar2 * 0x18);
        puVar1 = (undefined8 *)((long)puVar6 + (ulong)(uint)(*piVar7 * piVar7[1]));
        if ((puVar6 <= puVar8 && puVar8 <= puVar1) && (puVar8 < puVar6 || puVar1 != puVar8)) {
          lVar4 = *(long *)(piVar7 + 4) + (ulong)uVar2 * 0x18;
          *puVar8 = *(undefined8 *)(lVar4 + 8);
          *(undefined8 **)(lVar4 + 8) = puVar8;
          if ((char)piVar7[8] != '\0') {
            piVar7[2] = uVar2;
          }
          *(undefined1 *)(piVar7 + 8) = 0;
          puVar8 = (undefined8 *)*param_2;
          goto joined_r0x003e9184;
        }
        if (puVar6 < puVar8) {
          iVar5 = uVar2 + 1;
        }
        else {
          iVar3 = uVar2 - 1;
        }
      } while (iVar5 <= iVar3);
    }
  }
  puVar8 = (undefined8 *)*param_2;
joined_r0x003e9184:
  if (puVar8 != (undefined8 *)0x0) {
    piVar7 = *(int **)(param_1 + 0x1148);
    if ((char)piVar7[8] == '\0') {
      iVar3 = piVar7[6];
    }
    else {
      FUN_003f1c40(*(undefined8 *)(piVar7 + 4),piVar7[6],auStack_50,auStack_58,0x20);
      iVar3 = piVar7[6];
    }
    iVar3 = iVar3 + -1;
    if (-1 < iVar3) {
      iVar5 = 0;
      do {
        uVar2 = iVar3 + iVar5 >> 1;
        puVar6 = *(undefined8 **)(*(long *)(piVar7 + 4) + (ulong)uVar2 * 0x18);
        puVar1 = (undefined8 *)((long)puVar6 + (ulong)(uint)(*piVar7 * piVar7[1]));
        if ((puVar6 <= puVar8 && puVar8 <= puVar1) && (puVar8 < puVar6 || puVar1 != puVar8)) {
          lVar4 = *(long *)(piVar7 + 4) + (ulong)uVar2 * 0x18;
          *puVar8 = *(undefined8 *)(lVar4 + 8);
          *(undefined8 **)(lVar4 + 8) = puVar8;
          if ((char)piVar7[8] != '\0') {
            piVar7[2] = uVar2;
          }
          *(undefined1 *)(piVar7 + 8) = 0;
          break;
        }
        if (puVar6 < puVar8) {
          iVar5 = uVar2 + 1;
        }
        else {
          iVar3 = uVar2 - 1;
        }
      } while (iVar5 <= iVar3);
    }
  }
  puVar8 = (undefined8 *)param_2[2];
  if (puVar8 != (undefined8 *)0x0) {
    piVar7 = *(int **)(param_1 + 0x1138);
    if ((char)piVar7[8] == '\0') {
      iVar3 = piVar7[6];
    }
    else {
      FUN_003f1c40(*(undefined8 *)(piVar7 + 4),piVar7[6],auStack_38,auStack_48,0x20);
      iVar3 = piVar7[6];
    }
    iVar3 = iVar3 + -1;
    if (-1 < iVar3) {
      iVar5 = 0;
      do {
        uVar2 = iVar3 + iVar5 >> 1;
        puVar6 = *(undefined8 **)(*(long *)(piVar7 + 4) + (ulong)uVar2 * 0x18);
        puVar1 = (undefined8 *)((long)puVar6 + (ulong)(uint)(*piVar7 * piVar7[1]));
        if ((puVar6 <= puVar8 && puVar8 <= puVar1) && (puVar8 < puVar6 || puVar1 != puVar8)) {
          lVar4 = *(long *)(piVar7 + 4) + (ulong)uVar2 * 0x18;
          *puVar8 = *(undefined8 *)(lVar4 + 8);
          *(undefined8 **)(lVar4 + 8) = puVar8;
          if ((char)piVar7[8] != '\0') {
            piVar7[2] = uVar2;
          }
          *(undefined1 *)(piVar7 + 8) = 0;
          return;
        }
        if (puVar6 < puVar8) {
          iVar5 = uVar2 + 1;
        }
        else {
          iVar3 = uVar2 - 1;
        }
      } while (iVar5 <= iVar3);
    }
  }
  return;
}


