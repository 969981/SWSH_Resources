/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff7ab0; name: FUN_00ff7ab0
 */


void FUN_00ff7ab0(ulong *param_1,undefined8 *param_2)

{
  size_t __n;
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *__src;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  puVar11 = (undefined8 *)param_1[2];
  if (puVar11 != (undefined8 *)param_1[3]) goto LAB_00ff7c34;
  puVar12 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (puVar12 <= __src && (long)__src - (long)puVar12 != 0) {
    lVar5 = (long)__src - (long)puVar12 >> 3;
    lVar3 = lVar5 + 2;
    if (-1 < lVar5 + 1) {
      lVar3 = lVar5 + 1;
    }
    __n = (long)puVar11 - (long)__src;
    puVar11 = __src + -(lVar3 >> 1);
    if (__n == 0) {
      puVar12 = puVar11;
    }
    else {
      memmove(puVar11,__src,__n);
      puVar12 = (undefined8 *)(param_1[1] + (lVar3 >> 1) * -8);
    }
    puVar11 = puVar11 + ((long)__n >> 3);
    param_1[1] = (ulong)puVar12;
    param_1[2] = (ulong)puVar11;
    goto LAB_00ff7c34;
  }
  lVar3 = (long)param_1[3] - (long)puVar12;
  puVar12 = (undefined8 *)param_1[4];
  uVar6 = lVar3 >> 2;
  if (lVar3 == 0) {
    uVar6 = 1;
  }
  if (uVar6 == 0) {
    uVar2 = 0;
    puVar7 = (undefined8 *)0x0;
    if (__src != puVar11) goto LAB_00ff7b78;
LAB_00ff7bf4:
    puVar11 = puVar7;
  }
  else {
    uVar2 = (**(code **)(*(long *)*puVar12 + 0x10))((long *)*puVar12,uVar6 << 3,8);
    __src = (undefined8 *)param_1[1];
    puVar11 = (undefined8 *)param_1[2];
    puVar7 = (undefined8 *)(uVar2 + (uVar6 >> 2) * 8);
    if (__src == puVar11) goto LAB_00ff7bf4;
LAB_00ff7b78:
    puVar1 = PTR_DAT_02710860;
    puVar13 = puVar7;
    do {
      uVar10 = *puVar12;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00ff7ca8;
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      puVar9 = __src + 1;
      puVar14 = puVar13 + 1;
      *puVar13 = *__src;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      __src = puVar9;
      puVar13 = puVar14;
    } while (puVar11 != puVar9);
    puVar11 = puVar14;
  }
  uVar4 = *param_1;
  *param_1 = uVar2;
  param_1[1] = (ulong)puVar7;
  uVar8 = param_1[3];
  param_1[2] = (ulong)puVar11;
  param_1[3] = uVar2 + uVar6 * 8;
  if (uVar4 != 0) {
    (**(code **)(*(long *)*puVar12 + 0x18))((long *)*puVar12,uVar4,uVar8 - uVar4,8);
    puVar11 = (undefined8 *)param_1[2];
  }
LAB_00ff7c34:
  uVar10 = *(undefined8 *)param_1[4];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *puVar11 = *param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    param_1[2] = param_1[2] + 8;
    return;
  }
LAB_00ff7ca8:
                    /* WARNING: Subroutine does not return */
  abort();
}


