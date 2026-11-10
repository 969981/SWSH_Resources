/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f5cf0; name: FUN_006f5cf0
 */


void FUN_006f5cf0(ulong *param_1,undefined8 *param_2)

{
  size_t __n;
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *__src;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  puVar10 = (undefined8 *)param_1[2];
  if (puVar10 != (undefined8 *)param_1[3]) goto LAB_006f5e88;
  puVar11 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (puVar11 <= __src && (long)__src - (long)puVar11 != 0) {
    lVar5 = (long)__src - (long)puVar11 >> 3;
    lVar3 = lVar5 + 2;
    if (-1 < lVar5 + 1) {
      lVar3 = lVar5 + 1;
    }
    __n = (long)puVar10 - (long)__src;
    puVar10 = __src + -(lVar3 >> 1);
    if (__n == 0) {
      puVar11 = puVar10;
    }
    else {
      memmove(puVar10,__src,__n);
      puVar11 = (undefined8 *)(param_1[1] + (lVar3 >> 1) * -8);
    }
    puVar10 = puVar10 + ((long)__n >> 3);
    param_1[1] = (ulong)puVar11;
    param_1[2] = (ulong)puVar10;
    goto LAB_006f5e88;
  }
  lVar3 = (long)param_1[3] - (long)puVar11;
  puVar11 = (undefined8 *)param_1[4];
  uVar6 = lVar3 >> 2;
  if (lVar3 == 0) {
    uVar6 = 1;
  }
  if (uVar6 == 0) {
    uVar2 = 0;
    puVar12 = (undefined8 *)0x0;
    if (__src != puVar10) goto LAB_006f5dcc;
LAB_006f5e48:
    puVar10 = puVar12;
  }
  else {
    uVar2 = (**(code **)(*(long *)*puVar11 + 0x10))((long *)*puVar11,uVar6 << 3,8);
    if (uVar2 == 0) {
      (**(code **)(*(long *)*puVar11 + 0xb8))();
    }
    __src = (undefined8 *)param_1[1];
    puVar10 = (undefined8 *)param_1[2];
    puVar12 = (undefined8 *)(uVar2 + (uVar6 >> 2) * 8);
    if (__src == puVar10) goto LAB_006f5e48;
LAB_006f5dcc:
    puVar1 = PTR_DAT_02710860;
    puVar13 = puVar12;
    do {
      uVar9 = *puVar11;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_006f5efc;
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar9;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      puVar8 = __src + 1;
      puVar14 = puVar13 + 1;
      *puVar13 = *__src;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      __src = puVar8;
      puVar13 = puVar14;
    } while (puVar10 != puVar8);
    puVar10 = puVar14;
  }
  uVar4 = *param_1;
  uVar7 = param_1[3];
  *param_1 = uVar2;
  param_1[1] = (ulong)puVar12;
  param_1[2] = (ulong)puVar10;
  param_1[3] = uVar2 + uVar6 * 8;
  if (uVar4 != 0) {
    (**(code **)(*(long *)*puVar11 + 0x18))((long *)*puVar11,uVar4,uVar7 - uVar4,8);
    puVar10 = (undefined8 *)param_1[2];
  }
LAB_006f5e88:
  uVar9 = *(undefined8 *)param_1[4];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar9;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *puVar10 = *param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    param_1[2] = param_1[2] + 8;
    return;
  }
LAB_006f5efc:
                    /* WARNING: Subroutine does not return */
  abort();
}


