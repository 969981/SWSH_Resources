/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00780780; name: FUN_00780780
 */


void FUN_00780780(long param_1,long param_2)

{
  char *__s;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  size_t sVar9;
  long lVar10;
  int *piVar11;
  code *pcVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  
  lVar10 = *(long *)(param_1 + 0x270);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  if (lVar10 != 0) {
    (**(code **)(**(long **)(param_1 + 0x278) + 0x18))
              (*(long **)(param_1 + 0x278),lVar10,*(undefined8 *)(param_1 + 0x280),
               *(undefined8 *)(param_1 + 0x288));
  }
  lVar10 = *(long *)(param_2 + 8);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(param_1 + 200);
  *(long *)(param_1 + 200) = lVar10;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  pcVar12 = *(code **)(param_1 + 0xd8);
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (*pcVar12)(param_1 + 0xf0);
  }
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 0xf0);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0xe8) = uVar3;
    *(undefined8 *)(param_1 + 0xd0) = uVar1;
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
  }
  pcVar12 = *(code **)(param_1 + 0x158);
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    (*pcVar12)(param_1 + 0x170);
  }
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x170);
    uVar1 = *(undefined8 *)(param_2 + 0x90);
    uVar2 = *(undefined8 *)(param_2 + 0x98);
    uVar3 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0x168) = uVar3;
    *(undefined8 *)(param_1 + 0x150) = uVar1;
    *(undefined8 *)(param_1 + 0x158) = uVar2;
  }
  if (*(long *)(param_1 + 200) == 0) {
    piVar11 = (int *)0x0;
  }
  else {
    puVar13 = *(uint **)(*(long *)(param_1 + 200) + 400);
    piVar11 = (int *)((long)puVar13 + (ulong)*puVar13);
  }
  FUN_007811f0(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 9) ||
     (uVar14 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[4], uVar14 == 0)) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  else {
    iVar4 = *(int *)((long)piVar11 + uVar14);
    *(int *)(param_1 + 0x6c) = iVar4;
    if (iVar4 != 0) {
      puVar13 = (uint *)((long)piVar11 + (ulong)*(ushort *)((long)piVar11 + (6 - (long)*piVar11)));
      uVar5 = *(uint *)((long)puVar13 + (ulong)*puVar13);
      uVar19 = (ulong)uVar5;
      plVar20 = (long *)(param_1 + 0x70);
      uVar14 = *(long *)(param_1 + 0x78) - *plVar20 >> 5;
      if (uVar14 < uVar19) {
        FUN_0071a680(plVar20,uVar19 - uVar14);
        iVar4 = *piVar11;
      }
      else {
        if (uVar14 != uVar19) {
          lVar10 = *plVar20 + uVar19 * 0x20;
          lVar8 = *(long *)(param_1 + 0x78);
          while (lVar7 = lVar8, lVar10 != lVar7) {
            lVar8 = lVar7 + -0x20;
            if (*(long *)(lVar7 + -8) != 0) {
              (**(code **)(*(long *)(*(long *)(lVar7 + -8) + 0x48) + 0x18))();
              *(undefined8 *)(lVar7 + -8) = 0;
            }
          }
          *(long *)(param_1 + 0x78) = lVar10;
        }
        iVar4 = *piVar11;
      }
      lVar10 = -(long)iVar4;
      if (uVar5 != 0) {
        uVar14 = 0;
        lVar8 = (long)piVar11 + 9;
        do {
          uVar22 = (ulong)*(ushort *)((long)piVar11 + lVar10 + 6);
          puVar13 = (uint *)((long)piVar11 + uVar22);
          uVar17 = (ulong)*puVar13;
          puVar13 = (uint *)((long)puVar13 + uVar14 * 4 + uVar17 + 4);
          uVar21 = (ulong)*puVar13;
          __s = (char *)((long)puVar13 + uVar21 + 4);
          sVar9 = strlen(__s);
          bVar6 = *(byte *)((long)puVar13 + uVar21 + 4);
          uVar15 = 0xcbf29ce484222645;
          if (bVar6 != 0) {
            uVar15 = 0xcbf29ce484222645;
            pbVar16 = (byte *)(lVar8 + uVar21 + uVar17 + uVar22);
            do {
              uVar15 = (uVar15 ^ bVar6) * 0x100000001b3;
              bVar6 = *pbVar16;
              pbVar16 = pbVar16 + 1;
            } while (bVar6 != 0);
          }
          puVar18 = (ulong *)(*plVar20 + uVar14 * 0x20);
          puVar18[2] = sVar9;
          *puVar18 = uVar15;
          puVar18[1] = (ulong)__s;
          puVar18 = puVar18 + 3;
          if (*puVar18 != 0) {
            (**(code **)(*(long *)(*puVar18 + 0x48) + 0x18))();
            *puVar18 = 0;
          }
          *puVar18 = 0;
          uVar14 = uVar14 + 1;
          lVar8 = lVar8 + 4;
          lVar10 = -(long)*piVar11;
        } while (uVar14 != uVar19);
      }
      if ((10 < *(ushort *)((long)piVar11 + lVar10)) &&
         (uVar14 = (ulong)((ushort *)((long)piVar11 + lVar10))[5], uVar14 != 0)) {
        switch(*(undefined4 *)((long)piVar11 + uVar14)) {
        case 0xc:
          *(undefined4 *)(param_1 + 0x68) = 4;
          break;
        case 0xf:
          *(undefined4 *)(param_1 + 0x68) = 3;
          break;
        case 0x14:
          *(undefined4 *)(param_1 + 0x68) = 2;
          break;
        case 0x1e:
          *(undefined4 *)(param_1 + 0x68) = 1;
          break;
        case 0x3c:
          *(undefined4 *)(param_1 + 0x68) = 0;
        }
      }
    }
  }
  return;
}


