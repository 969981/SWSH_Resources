/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f5f00; name: FUN_006f5f00
 */


void FUN_006f5f00(long *param_1,undefined8 *param_2)

{
  size_t __n;
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *__src;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  __src = (undefined8 *)param_1[1];
  if (__src != (undefined8 *)*param_1) goto LAB_006f6098;
  puVar5 = (undefined8 *)param_1[2];
  puVar7 = (undefined8 *)param_1[3];
  if (puVar5 < puVar7) {
    lVar4 = (long)puVar7 - (long)puVar5 >> 3;
    lVar3 = lVar4 + 2;
    if (-1 < lVar4 + 1) {
      lVar3 = lVar4 + 1;
    }
    __n = (long)puVar5 - (long)__src;
    puVar5 = puVar5 + (lVar3 >> 1);
    if (__n == 0) {
      __src = puVar5;
    }
    else {
      puVar7 = (undefined8 *)((long)puVar5 - __n);
      memmove(puVar7,__src,__n);
      puVar5 = (undefined8 *)(param_1[2] + (lVar3 >> 1) * 8);
      __src = puVar7;
    }
    param_1[1] = (long)__src;
    param_1[2] = (long)puVar5;
    goto LAB_006f6098;
  }
  lVar4 = (long)puVar7 - *param_1;
  lVar3 = lVar4 >> 2;
  puVar7 = (undefined8 *)param_1[4];
  if (lVar4 == 0) {
    lVar3 = 1;
  }
  if (lVar3 == 0) {
    lVar4 = 0;
    puVar8 = (undefined8 *)0x0;
    if (__src != puVar5) goto LAB_006f5fe8;
LAB_006f6060:
    __src = puVar8;
  }
  else {
    lVar4 = (**(code **)(*(long *)*puVar7 + 0x10))((long *)*puVar7,lVar3 << 3,8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*puVar7 + 0xb8))();
    }
    __src = (undefined8 *)param_1[1];
    puVar5 = (undefined8 *)param_1[2];
    puVar8 = (undefined8 *)(lVar4 + (lVar3 + 3U >> 2) * 8);
    if (__src == puVar5) goto LAB_006f6060;
LAB_006f5fe8:
    puVar1 = PTR_DAT_02710860;
    puVar11 = puVar8;
    do {
      uVar10 = *puVar7;
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_006f610c;
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar10;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      puVar9 = __src + 1;
      puVar12 = puVar11 + 1;
      *puVar11 = *__src;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      __src = puVar9;
      puVar11 = puVar12;
    } while (puVar5 != puVar9);
    __src = puVar8;
    puVar8 = puVar12;
  }
  lVar2 = *param_1;
  lVar6 = param_1[3];
  *param_1 = lVar4;
  param_1[1] = (long)__src;
  param_1[2] = (long)puVar8;
  param_1[3] = lVar4 + lVar3 * 8;
  if (lVar2 != 0) {
    (**(code **)(*(long *)*puVar7 + 0x18))((long *)*puVar7,lVar2,lVar6 - lVar2,8);
    __src = (undefined8 *)param_1[1];
  }
LAB_006f6098:
  uVar10 = *(undefined8 *)param_1[4];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    __src[-1] = *param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_006f610c:
                    /* WARNING: Subroutine does not return */
  abort();
}


