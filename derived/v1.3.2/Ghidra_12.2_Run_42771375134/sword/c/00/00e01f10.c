/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e01f10; name: FUN_00e01f10
 */


void FUN_00e01f10(undefined4 *param_1,long param_2,long *param_3)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  
  *param_1 = 0;
  param_1[0x1c] = 0;
  puVar6 = *(uint **)(*(long *)(param_2 + 0x68) + 400);
  piVar1 = (int *)((long)puVar6 + (ulong)*puVar6);
  puVar9 = (ushort *)((long)piVar1 - (long)*piVar1);
  if (*puVar9 < 7) {
    puVar6 = (uint *)0x0;
    uVar3 = uRam0000000000000000;
  }
  else {
    puVar6 = (uint *)0x0;
    if ((ulong)puVar9[3] != 0) {
      puVar6 = (uint *)((long)piVar1 + (ulong)puVar9[3]);
      puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    }
    uVar3 = *puVar6;
  }
  if (uVar3 != 0) {
    uVar10 = 0;
    puVar6 = puVar6 + 7;
    do {
      uVar7 = (ulong)puVar6[-6];
      lVar8 = uVar7 - (long)*(int *)((long)puVar6 + (uVar7 - 0x18));
      uVar4 = *(ushort *)((long)puVar6 + lVar8 + -0x18);
      if ((uVar4 < 5) || (uVar11 = (ulong)*(ushort *)((long)puVar6 + lVar8 + -0x14), uVar11 == 0)) {
        if (*param_3 == 0) goto LAB_00e02070;
      }
      else if (*param_3 == *(long *)((long)puVar6 + uVar7 + uVar11 + -0x18)) {
LAB_00e02070:
        *param_1 = 1;
        fVar12 = 0.0;
        if ((6 < uVar4) && (uVar10 = (ulong)*(ushort *)((long)puVar6 + lVar8 + -0x12), uVar10 != 0))
        {
          uVar4 = *(ushort *)((long)puVar6 + uVar10 + uVar7 + -0x18);
          fVar12 = 0.0;
          if (uVar4 != 0) {
            fVar12 = 1.0 / (float)uVar4;
          }
        }
        param_1[0x1c] = fVar12;
        uVar10 = (ulong)*(ushort *)((long)puVar6 + lVar8 + -0x10);
        lVar2 = uVar10 + *(uint *)((long)puVar6 + uVar10 + uVar7 + -0x18) + uVar7;
        uVar5 = *(undefined8 *)((long)puVar6 + lVar2 + -0x14);
        *(ulong *)(param_1 + 6) = (ulong)*(uint *)((long)puVar6 + lVar2 + -0xc);
        *(undefined8 *)(param_1 + 4) = uVar5;
        uVar10 = (ulong)*(ushort *)((long)puVar6 + lVar8 + -0x10);
        puVar6 = (uint *)((long)puVar6 +
                         uVar10 + *(uint *)((long)puVar6 + uVar10 + uVar7 + -0x18) + uVar7);
        uVar5 = *(undefined8 *)(puVar6 + -2);
        *(ulong *)(param_1 + 10) = (ulong)*puVar6;
        *(undefined8 *)(param_1 + 8) = uVar5;
        return;
      }
      uVar10 = uVar10 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar10 < uVar3);
  }
  if ((*puVar9 < 9) || ((ulong)puVar9[4] == 0)) {
    puVar6 = (uint *)0x0;
    uVar3 = uRam0000000000000000;
  }
  else {
    puVar6 = (uint *)((long)piVar1 + (ulong)puVar9[4]);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    uVar3 = *puVar6;
  }
  if (uVar3 != 0) {
    uVar10 = 0;
    puVar6 = puVar6 + 0xd;
    do {
      uVar7 = (ulong)puVar6[-0xc];
      lVar8 = uVar7 - (long)*(int *)((long)puVar6 + (uVar7 - 0x30));
      if ((*(ushort *)((long)puVar6 + lVar8 + -0x30) < 5) ||
         (uVar11 = (ulong)*(ushort *)((long)puVar6 + lVar8 + -0x2c), uVar11 == 0)) {
        if (*param_3 == 0) goto LAB_00e0212c;
      }
      else if (*param_3 == *(long *)((long)puVar6 + uVar7 + uVar11 + -0x30)) {
LAB_00e0212c:
        *param_1 = 2;
        uVar10 = (ulong)*(ushort *)((long)puVar6 + lVar8 + -0x28);
        lVar2 = uVar10 + *(uint *)((long)puVar6 + uVar10 + uVar7 + -0x30) + uVar7;
        uVar5 = *(undefined8 *)((long)puVar6 + lVar2 + -0x2c);
        *(ulong *)(param_1 + 0xe) = (ulong)*(uint *)((long)puVar6 + lVar2 + -0x24);
        *(undefined8 *)(param_1 + 0xc) = uVar5;
        uVar10 = (ulong)*(ushort *)((long)puVar6 + lVar8 + -0x28);
        lVar2 = uVar10 + *(uint *)((long)puVar6 + uVar10 + uVar7 + -0x30) + uVar7;
        uVar5 = *(undefined8 *)((long)puVar6 + lVar2 + -0x20);
        *(ulong *)(param_1 + 0x12) = (ulong)*(uint *)((long)puVar6 + lVar2 + -0x18);
        *(undefined8 *)(param_1 + 0x10) = uVar5;
        uVar10 = (ulong)*(ushort *)((long)puVar6 + lVar8 + -0x28);
        lVar2 = uVar10 + *(uint *)((long)puVar6 + uVar10 + uVar7 + -0x30) + uVar7;
        uVar5 = *(undefined8 *)((long)puVar6 + lVar2 + -0x14);
        *(ulong *)(param_1 + 0x16) = (ulong)*(uint *)((long)puVar6 + lVar2 + -0xc);
        *(undefined8 *)(param_1 + 0x14) = uVar5;
        uVar10 = (ulong)*(ushort *)((long)puVar6 + lVar8 + -0x28);
        puVar6 = (uint *)((long)puVar6 +
                         uVar10 + *(uint *)((long)puVar6 + uVar10 + uVar7 + -0x30) + uVar7);
        uVar5 = *(undefined8 *)(puVar6 + -2);
        *(ulong *)(param_1 + 0x1a) = (ulong)*puVar6;
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        return;
      }
      uVar10 = uVar10 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar10 < uVar3);
  }
  return;
}


