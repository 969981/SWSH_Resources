/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff78c0; name: FUN_00ff78c0
 */


void FUN_00ff78c0(long *param_1,undefined8 *param_2)

{
  size_t __n;
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *__src;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  __src = (undefined8 *)param_1[1];
  if (__src != (undefined8 *)*param_1) goto LAB_00ff7a3c;
  puVar8 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)param_1[4];
  if (puVar8 < puVar4) {
    lVar7 = (long)puVar4 - (long)puVar8 >> 3;
    lVar3 = lVar7 + 2;
    if (-1 < lVar7 + 1) {
      lVar3 = lVar7 + 1;
    }
    __n = (long)puVar8 - (long)__src;
    puVar8 = puVar8 + (lVar3 >> 1);
    if (__n == 0) {
      __src = puVar8;
    }
    else {
      puVar4 = (undefined8 *)((long)puVar8 - __n);
      memmove(puVar4,__src,__n);
      puVar8 = (undefined8 *)(param_1[2] + (lVar3 >> 1) * 8);
      __src = puVar4;
    }
    param_1[1] = (long)__src;
    param_1[2] = (long)puVar8;
    goto LAB_00ff7a3c;
  }
  lVar7 = (long)puVar4 - *param_1;
  lVar3 = lVar7 >> 2;
  if (lVar7 == 0) {
    lVar3 = 1;
  }
  if (lVar3 == 0) {
    lVar7 = 0;
    puVar4 = (undefined8 *)0x0;
    if (__src == puVar8) goto LAB_00ff7a00;
LAB_00ff7990:
    puVar1 = PTR_DAT_02710860;
    puVar5 = __src;
    puVar9 = puVar4;
    do {
      lVar11 = param_1[6];
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_00ff7aa8;
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar11;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      puVar6 = puVar5 + 1;
      puVar10 = puVar9 + 1;
      *puVar9 = *puVar5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      __src = puVar4;
      puVar5 = puVar6;
      puVar9 = puVar10;
    } while (puVar8 != puVar6);
  }
  else {
    lVar7 = (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],lVar3 << 3,8);
    __src = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(lVar7 + (lVar3 + 3U >> 2) * 8);
    if (__src != puVar8) goto LAB_00ff7990;
LAB_00ff7a00:
    __src = puVar4;
    puVar10 = puVar4;
  }
  lVar2 = *param_1;
  lVar11 = param_1[4];
  *param_1 = lVar7;
  param_1[1] = (long)__src;
  param_1[2] = (long)puVar10;
  param_1[4] = lVar7 + lVar3 * 8;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],lVar2,lVar11 - lVar2,8);
    __src = (undefined8 *)param_1[1];
  }
LAB_00ff7a3c:
  lVar7 = param_1[6];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar7;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    __src[-1] = *param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_00ff7aa8:
                    /* WARNING: Subroutine does not return */
  abort();
}


