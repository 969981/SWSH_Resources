/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e1140; name: FUN_003e1140
 */


void FUN_003e1140(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined1 auStack_88 [40];
  
  lVar15 = *(long *)(param_1 + 0x728);
  lVar9 = *(long *)(param_1 + 0x720);
  *(int *)(lVar9 + 0xa30) =
       *(int *)(lVar9 + 0xa30) + *(int *)(lVar15 + 400) + *(int *)(lVar15 + 0x1a0) +
       *(int *)(lVar15 + 0x1b0) + *(int *)(lVar15 + 0x1c0);
  if (param_2 == 0) {
    FUN_003df7d0(param_1);
    return;
  }
  (**(code **)(**(long **)(lVar9 + 0x6e8) + 0xa8))(auStack_88);
  uVar4 = *(uint *)(param_1 + 0x110c);
  iVar17 = *(int *)(lVar15 + 400);
  if (iVar17 == 0) {
    iVar17 = *(int *)(lVar15 + 0x1a0);
  }
  else {
    puVar18 = *(undefined8 **)(lVar15 + 0x188);
    puVar1 = (undefined8 *)(param_1 + 0x1048);
    do {
      uVar2 = *puVar18;
      uVar3 = puVar18[1];
      iVar17 = iVar17 + -1;
      lVar9 = FUN_003cd720(*puVar1,uVar2,uVar3);
      puVar18[2] = lVar9;
      if (lVar9 != 0) {
        bVar6 = *(byte *)(lVar9 + 0x24);
        if (bVar6 == 2) {
LAB_003e127c:
          lVar16 = param_1 + (ulong)bVar6 * 0x10;
          uVar5 = *(uint *)(lVar9 + 0x18);
          plVar8 = (long *)(lVar16 + 0x38);
          puVar10 = (uint *)(lVar16 + 0x40);
          uVar7 = *puVar10 - 1;
          *puVar10 = uVar7;
          *(undefined8 *)(*plVar8 + (ulong)uVar5 * 8) = *(undefined8 *)(*plVar8 + (ulong)uVar7 * 8);
          *(undefined4 *)(lVar9 + 0x18) = 0xffffffff;
          if (uVar5 < uVar7) {
            *(uint *)(*(long *)(*plVar8 + (ulong)uVar5 * 8) + 0x18) = uVar5;
          }
          puVar11 = (uint *)(param_1 + (ulong)bVar6 * 4 + 0x68);
          uVar7 = *puVar11;
          if (uVar5 < uVar7) {
            uVar7 = uVar7 - 1;
            *puVar11 = uVar7;
            if (uVar7 < *puVar10) {
              lVar16 = *plVar8;
              lVar12 = *(long *)(lVar16 + (ulong)uVar7 * 8);
              lVar13 = (ulong)uVar5 * 8;
              lVar14 = *(long *)(lVar16 + lVar13);
              *(long *)(lVar16 + lVar13) = lVar12;
              *(long *)(*plVar8 + (ulong)uVar7 * 8) = lVar14;
              *(uint *)(lVar14 + 0x18) = uVar7;
              *(uint *)(lVar12 + 0x18) = uVar5;
            }
          }
          FUN_003cd6e0(*puVar1,lVar9);
        }
        else if (bVar6 == 0) {
          FUN_003d01e0(*puVar1,lVar9,4,0,auStack_88,uVar4 >> 4 & 1);
          lVar16 = *(long *)(*(long *)(lVar9 + 8) + 0x48);
          plVar8 = *(long **)(*(long *)(lVar16 + 0x720) + 0x6e8);
          (**(code **)(*plVar8 + 0x48))(plVar8,*(undefined8 *)(lVar9 + 0x58));
          FUN_0011da90(*(undefined8 *)(lVar16 + 0x720),*(undefined8 *)(lVar9 + 0x58));
          *(undefined8 *)(lVar9 + 0x58) = 0;
          FUN_003f9440(lVar9);
          bVar6 = *(byte *)(lVar9 + 0x24);
          goto LAB_003e127c;
        }
        FUN_003cd800(*puVar1,uVar2,uVar3,param_2,lVar9,auStack_88,uVar4 >> 4 & 1);
      }
      puVar18 = puVar18 + 3;
    } while (iVar17 != 0);
    iVar17 = *(int *)(lVar15 + 0x1a0);
  }
  if (iVar17 != 0) {
    puVar18 = *(undefined8 **)(lVar15 + 0x198);
    do {
      puVar18[2] = 0;
      iVar17 = iVar17 + -1;
      FUN_003cd800(*(undefined8 *)(param_1 + 0x1048),*puVar18,puVar18[1],param_2,0,auStack_88,
                   uVar4 >> 4 & 1);
      puVar18 = puVar18 + 3;
    } while (iVar17 != 0);
  }
  iVar17 = *(int *)(lVar15 + 0x1b0);
  if (iVar17 != 0) {
    puVar18 = *(undefined8 **)(lVar15 + 0x1a8);
    do {
      puVar18[2] = 0;
      iVar17 = iVar17 + -1;
      FUN_003cd800(*(undefined8 *)(param_1 + 0x1048),*puVar18,puVar18[1],param_2,0,auStack_88,
                   uVar4 >> 4 & 1);
      puVar18 = puVar18 + 3;
    } while (iVar17 != 0);
  }
  iVar17 = *(int *)(lVar15 + 0x1c0);
  if (iVar17 != 0) {
    puVar18 = *(undefined8 **)(lVar15 + 0x1b8);
    do {
      puVar18[2] = 0;
      iVar17 = iVar17 + -1;
      FUN_003cd800(*(undefined8 *)(param_1 + 0x1048),*puVar18,puVar18[1],param_2,0,auStack_88,
                   uVar4 >> 4 & 1);
      puVar18 = puVar18 + 3;
    } while (iVar17 != 0);
  }
  FUN_003df7d0(param_1);
  (**(code **)(**(long **)(lVar15 + 0x118) + 0xa0))();
  FUN_00133b80(lVar15);
  return;
}


