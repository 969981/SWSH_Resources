/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00605750; name: FUN_00605750
 */


undefined8 FUN_00605750(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  ulong *puVar15;
  long *plVar16;
  
  if (param_1 == 0) {
    uVar6 = 0x21;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      uVar5 = *(uint *)(param_1 + 0x14);
      if (uVar5 != 0) {
        lVar13 = param_1 + (ulong)uVar5 * 8;
        puVar9 = (undefined8 *)(param_1 + 0x18);
        while ((undefined8 *)*puVar9 != param_2) {
          puVar9 = puVar9 + 1;
          if ((undefined8 *)(lVar13 + 0x18) <= puVar9) {
            return 0x22;
          }
        }
        *(uint *)(param_1 + 0x14) = uVar5 - 1;
        puVar7 = (undefined8 *)(lVar13 + 0x10);
        if (puVar9 < puVar7) {
          uVar8 = param_1 + (((ulong)uVar5 * 8 + 0xf) - (long)puVar9);
          uVar5 = ((uint)(uVar8 >> 3) & 0x1fffffff) + 1;
          if ((uVar5 & 3) != 0) {
            lVar13 = -((ulong)uVar5 & 3);
            puVar12 = puVar9;
            do {
              puVar9 = puVar12 + 1;
              *puVar12 = *puVar9;
              lVar13 = lVar13 + 1;
              puVar12 = puVar9;
            } while (lVar13 != 0);
          }
          if (0x17 < uVar8) {
            do {
              *puVar9 = puVar9[1];
              puVar9[1] = puVar9[2];
              puVar9[2] = puVar9[3];
              puVar12 = puVar9 + 4;
              puVar9[3] = *puVar12;
              puVar9 = puVar12;
            } while (puVar12 < puVar7);
          }
        }
        *puVar7 = 0;
        puVar15 = (ulong *)*param_2;
        lVar13 = param_2[1];
        lVar3 = param_2[2];
        puVar10 = puVar15;
        if ((lVar13 != 0) && (*(undefined8 **)(lVar13 + 0x130) == param_2)) {
          *(undefined8 *)(lVar13 + 0x130) = 0;
          puVar10 = (ulong *)*param_2;
        }
        uVar8 = *puVar10;
        if (((((uint)uVar8 >> 1 & 1) != 0) && (plVar16 = (long *)param_2[1], plVar16 != (long *)0x0)
            ) && (plVar14 = (long *)plVar16[0x23], plVar14 != (long *)0x0)) {
          lVar13 = *plVar16;
          do {
            if ((undefined8 *)plVar14[2] == param_2) {
              if ((*(int *)(param_2[3] + 0x48) == 0x6f75746c) && (param_2[0xd] != 0)) {
                (**(code **)(*(long *)(param_2[3] + 0x70) + 0x28))();
              }
              lVar11 = *plVar14;
              plVar4 = (long *)plVar14[1];
              plVar1 = plVar16 + 0x23;
              if (lVar11 != 0) {
                plVar1 = (long *)(lVar11 + 8);
              }
              *plVar1 = (long)plVar4;
              plVar1 = plVar16 + 0x24;
              if (plVar4 != (long *)0x0) {
                plVar1 = plVar4;
              }
              *plVar1 = lVar11;
              (**(code **)(lVar13 + 0x10))(lVar13,plVar14);
              lVar13 = plVar16[0x23];
              goto joined_r0x00605910;
            }
            plVar14 = (long *)plVar14[1];
          } while (plVar14 != (long *)0x0);
        }
        goto LAB_0060593c;
      }
    }
    uVar6 = 0x22;
  }
  return uVar6;
joined_r0x00605910:
  if (lVar13 == 0) goto LAB_0060592c;
  lVar11 = *(long *)(lVar13 + 0x10);
  if (*(int *)(lVar11 + 0x20) == 0x6f75746c) goto LAB_00605930;
  lVar13 = *(long *)(lVar13 + 8);
  goto joined_r0x00605910;
LAB_0060592c:
  lVar11 = 0;
LAB_00605930:
  plVar16[0x25] = lVar11;
  uVar8 = *(ulong *)*param_2;
LAB_0060593c:
  if (((uVar8 & 1) != 0) && (lVar13 = param_2[2], lVar13 != 0)) {
    lVar11 = param_2[4];
    while (lVar11 != 0) {
      lVar2 = *(long *)(lVar11 + 8);
      FUN_006044b0(lVar13,*(undefined8 *)(lVar11 + 0x10),param_2);
      (**(code **)(lVar13 + 0x10))(lVar13,lVar11);
      lVar11 = lVar2;
    }
    param_2[4] = 0;
    param_2[5] = 0;
  }
  if ((code *)puVar15[7] != (code *)0x0) {
    (*(code *)puVar15[7])(param_2);
  }
  (**(code **)(lVar3 + 0x10))(lVar3,param_2);
  return 0;
}


