/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100f710; name: FUN_0100f710
 */


void FUN_0100f710(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  
  puVar10 = (undefined8 *)param_1[2];
  if (puVar10 != (undefined8 *)param_1[3]) goto LAB_0100f960;
  puVar7 = (undefined8 *)*param_1;
  puVar9 = (undefined8 *)param_1[1];
  if (puVar7 <= puVar9 && (long)puVar9 - (long)puVar7 != 0) {
    lVar2 = (long)puVar9 - (long)puVar7 >> 5;
    lVar3 = lVar2 + 2;
    if (-1 < lVar2 + 1) {
      lVar3 = lVar2 + 1;
    }
    lVar3 = lVar3 >> 1;
    if (puVar9 == puVar10) {
      puVar7 = puVar9 + lVar3 * -4;
    }
    else {
      do {
        uVar4 = *puVar9;
        *puVar9 = 0;
        puVar7 = (undefined8 *)puVar9[lVar3 * -4];
        puVar9[lVar3 * -4] = uVar4;
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)(puVar7);
          (**(code **)(*(long *)puVar9[lVar3 * -4 + 1] + 0x18))
                    ((long *)puVar9[lVar3 * -4 + 1],puVar7,puVar9[lVar3 * -4 + 2],
                     puVar9[lVar3 * -4 + 3]);
        }
        uVar4 = puVar9[1];
        uVar6 = puVar9[3];
        puVar7 = puVar9 + 4;
        puVar9[lVar3 * -4 + 2] = puVar9[2];
        puVar9[lVar3 * -4 + 3] = uVar6;
        puVar9[lVar3 * -4 + 1] = uVar4;
        puVar9 = puVar7;
      } while (puVar10 != puVar7);
      puVar10 = (undefined8 *)param_1[1];
      puVar7 = puVar7 + lVar3 * -4;
    }
    param_1[1] = (long)(puVar10 + lVar3 * -4);
    param_1[2] = (long)puVar7;
    goto LAB_0100f960;
  }
  lVar3 = param_1[3] - (long)puVar7;
  puVar7 = (undefined8 *)param_1[4];
  uVar5 = lVar3 >> 4;
  if (lVar3 == 0) {
    uVar5 = 1;
  }
  if (uVar5 == 0) {
    lVar3 = 0;
    puVar8 = (undefined8 *)0x0;
    if (puVar9 != puVar10) goto LAB_0100f83c;
LAB_0100f8d8:
    puVar12 = puVar8;
    puVar9 = puVar10;
  }
  else {
    lVar3 = (**(code **)(*(long *)*puVar7 + 0x10))((long *)*puVar7,uVar5 << 5,8);
    if (lVar3 == 0) {
      (**(code **)(*(long *)*puVar7 + 0xb8))();
    }
    puVar9 = (undefined8 *)param_1[1];
    puVar10 = (undefined8 *)param_1[2];
    puVar8 = (undefined8 *)(lVar3 + (uVar5 >> 2) * 0x20);
    if (puVar9 == puVar10) goto LAB_0100f8d8;
LAB_0100f83c:
    puVar1 = PTR_DAT_02710860;
    puVar12 = puVar8;
    do {
      uVar4 = *puVar7;
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_0100f9ec;
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      uVar4 = *puVar9;
      *puVar9 = 0;
      *puVar12 = uVar4;
      uVar6 = puVar9[3];
      uVar4 = puVar9[2];
      puVar12[1] = puVar9[1];
      puVar12[2] = uVar4;
      puVar12[3] = uVar6;
      puVar9 = puVar9 + 4;
      puVar12 = puVar12 + 4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    } while (puVar9 != puVar10);
    puVar10 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)param_1[1];
  }
  lVar2 = *param_1;
  lVar11 = param_1[3];
  *param_1 = lVar3;
  param_1[1] = (long)puVar8;
  param_1[2] = (long)puVar12;
  param_1[3] = lVar3 + uVar5 * 0x20;
  if (puVar10 != puVar9) {
    do {
      puVar12 = puVar10 + -4;
      puVar8 = (undefined8 *)*puVar12;
      *puVar12 = 0;
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8);
        (**(code **)(*(long *)puVar10[-3] + 0x18))
                  ((long *)puVar10[-3],puVar8,puVar10[-2],puVar10[-1]);
      }
      puVar10 = puVar12;
    } while (puVar9 != puVar12);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)*puVar7 + 0x18))((long *)*puVar7,lVar2,lVar11 - lVar2,8);
  }
LAB_0100f960:
  uVar4 = *(undefined8 *)param_1[4];
  puVar10 = (undefined8 *)param_1[2];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    uVar4 = *param_2;
    *param_2 = 0;
    *puVar10 = uVar4;
    uVar6 = param_2[3];
    uVar4 = param_2[2];
    puVar10[1] = param_2[1];
    puVar10[2] = uVar4;
    puVar10[3] = uVar6;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    param_1[2] = param_1[2] + 0x20;
    return;
  }
LAB_0100f9ec:
                    /* WARNING: Subroutine does not return */
  abort();
}


