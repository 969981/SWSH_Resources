/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01360db0; name: FUN_01360db0
 */


void FUN_01360db0(ulong *param_1,undefined8 *param_2)

{
  size_t __n;
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *__src;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  
  puVar9 = (undefined8 *)param_1[2];
  if (puVar9 != (undefined8 *)param_1[3]) goto LAB_01360f38;
  puVar5 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (puVar5 <= __src && (long)__src - (long)puVar5 != 0) {
    lVar4 = (long)__src - (long)puVar5 >> 3;
    lVar3 = lVar4 + 2;
    if (-1 < lVar4 + 1) {
      lVar3 = lVar4 + 1;
    }
    __n = (long)puVar9 - (long)__src;
    puVar9 = __src + -(lVar3 >> 1);
    if (__n == 0) {
      puVar5 = puVar9;
    }
    else {
      memmove(puVar9,__src,__n);
      puVar5 = (undefined8 *)(param_1[1] + (lVar3 >> 1) * -8);
    }
    puVar9 = puVar9 + ((long)__n >> 3);
    param_1[1] = (ulong)puVar5;
    param_1[2] = (ulong)puVar9;
    goto LAB_01360f38;
  }
  lVar3 = (long)param_1[3] - (long)puVar5;
  uVar8 = lVar3 >> 2;
  if (lVar3 == 0) {
    uVar8 = 1;
  }
  if (uVar8 == 0) {
    uVar2 = 0;
    puVar5 = (undefined8 *)0x0;
    if (__src == puVar9) goto LAB_01360ef8;
LAB_01360e84:
    puVar1 = PTR_DAT_02710860;
    puVar10 = puVar5;
    do {
      uVar12 = param_1[4];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_01360fa4;
      *(ulong *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar12;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      puVar7 = __src + 1;
      puVar11 = puVar10 + 1;
      *puVar10 = *__src;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      __src = puVar7;
      puVar10 = puVar11;
    } while (puVar9 != puVar7);
  }
  else {
    uVar2 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar8 << 3,0x10);
    if (uVar2 == 0) {
      (**(code **)(*(long *)param_1[4] + 0xb8))();
    }
    __src = (undefined8 *)param_1[1];
    puVar9 = (undefined8 *)param_1[2];
    puVar5 = (undefined8 *)(uVar2 + (uVar8 >> 2) * 8);
    if (__src != puVar9) goto LAB_01360e84;
LAB_01360ef8:
    puVar11 = puVar5;
  }
  puVar9 = puVar11;
  uVar12 = *param_1;
  uVar6 = param_1[3];
  *param_1 = uVar2;
  param_1[1] = (ulong)puVar5;
  param_1[2] = (ulong)puVar9;
  param_1[3] = uVar2 + uVar8 * 8;
  if (uVar12 != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],uVar12,uVar6 - uVar12,0x10);
    puVar9 = (undefined8 *)param_1[2];
  }
LAB_01360f38:
  uVar8 = param_1[4];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(ulong *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *puVar9 = *param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    param_1[2] = param_1[2] + 8;
    return;
  }
LAB_01360fa4:
                    /* WARNING: Subroutine does not return */
  abort();
}


