/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013d19f0; name: FUN_013d19f0
 */


void FUN_013d19f0(long *param_1,undefined8 *param_2)

{
  size_t __n;
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *__src;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  __src = (undefined8 *)param_1[1];
  if (__src != (undefined8 *)*param_1) goto LAB_013d1b78;
  puVar4 = (undefined8 *)param_1[2];
  puVar5 = (undefined8 *)param_1[3];
  if (puVar4 < puVar5) {
    lVar8 = (long)puVar5 - (long)puVar4 >> 3;
    lVar3 = lVar8 + 2;
    if (-1 < lVar8 + 1) {
      lVar3 = lVar8 + 1;
    }
    __n = (long)puVar4 - (long)__src;
    puVar4 = puVar4 + (lVar3 >> 1);
    if (__n == 0) {
      __src = puVar4;
    }
    else {
      puVar5 = (undefined8 *)((long)puVar4 - __n);
      memmove(puVar5,__src,__n);
      puVar4 = (undefined8 *)(param_1[2] + (lVar3 >> 1) * 8);
      __src = puVar5;
    }
    param_1[1] = (long)__src;
    param_1[2] = (long)puVar4;
    goto LAB_013d1b78;
  }
  lVar8 = (long)puVar5 - *param_1;
  lVar3 = lVar8 >> 2;
  if (lVar8 == 0) {
    lVar3 = 1;
  }
  if (lVar3 == 0) {
    lVar8 = 0;
    puVar5 = (undefined8 *)0x0;
    if (__src == puVar4) goto LAB_013d1b40;
LAB_013d1ad0:
    puVar1 = PTR_DAT_02710860;
    puVar6 = __src;
    puVar9 = puVar5;
    do {
      lVar11 = param_1[4];
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_013d1be4;
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar11;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      puVar7 = puVar6 + 1;
      puVar10 = puVar9 + 1;
      *puVar9 = *puVar6;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      __src = puVar5;
      puVar6 = puVar7;
      puVar9 = puVar10;
    } while (puVar4 != puVar7);
  }
  else {
    lVar8 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],lVar3 << 3,8);
    if (lVar8 == 0) {
      (**(code **)(*(long *)param_1[4] + 0xb8))();
    }
    __src = (undefined8 *)param_1[1];
    puVar4 = (undefined8 *)param_1[2];
    puVar5 = (undefined8 *)(lVar8 + (lVar3 + 3U >> 2) * 8);
    if (__src != puVar4) goto LAB_013d1ad0;
LAB_013d1b40:
    __src = puVar5;
    puVar10 = puVar5;
  }
  lVar2 = *param_1;
  lVar11 = param_1[3];
  *param_1 = lVar8;
  param_1[1] = (long)__src;
  param_1[2] = (long)puVar10;
  param_1[3] = lVar8 + lVar3 * 8;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar2,lVar11 - lVar2,8);
    __src = (undefined8 *)param_1[1];
  }
LAB_013d1b78:
  lVar8 = param_1[4];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    __src[-1] = *param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_013d1be4:
                    /* WARNING: Subroutine does not return */
  abort();
}


