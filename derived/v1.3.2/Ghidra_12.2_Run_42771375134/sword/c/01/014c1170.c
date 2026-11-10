/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c1170; name: FUN_014c1170
 */


void FUN_014c1170(long param_1,long *param_2,undefined4 param_3)

{
  void *__src;
  size_t __n;
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  void *__dest;
  ulong uVar9;
  code *pcVar10;
  void *pvVar11;
  void *__src_00;
  
  *(undefined4 *)(param_1 + 0xacc) = param_3;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_014c1650;
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
  if (lVar4 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_0077d050(lVar4,0x202);
  *(long **)(lVar4 + 8) = param_2;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x80;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0xac0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xac0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xac0) = 0;
  }
  puVar2 = PTR_DAT_0272a358;
  *(long *)(param_1 + 0xac0) = lVar4;
  lVar4 = *(long *)puVar2;
  *(undefined8 *)(lVar4 + 0x20) = 0x1100000;
  *(long **)(lVar4 + 0x10) = param_2;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x1100000,8);
  *(long *)(lVar4 + 0x18) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar4 + 0x10) + 0xb8))();
    lVar3 = *(long *)(lVar4 + 0x18);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,&LAB_010fff48,0);
  *(long *)(lVar4 + 8) = lVar3;
  *(long *)(param_1 + 0x1b0) = lVar3;
  lVar4 = *(long *)puVar2;
  *(undefined8 *)(lVar4 + 0x40) = 0x800000;
  *(long **)(lVar4 + 0x30) = param_2;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x800000,8);
  *(long *)(lVar4 + 0x38) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar4 + 0x30) + 0xb8))();
    lVar3 = *(long *)(lVar4 + 0x38);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,&DAT_007fff48,0);
  *(long *)(lVar4 + 0x28) = lVar3;
  *(long *)(param_1 + 0x1b8) = lVar3;
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x40,0x10);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_014c1650;
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar5 = param_2;
  puVar5[1] = 0xfffffffffffffff;
  puVar5[6] = 0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar3 = *(long *)(param_1 + 0xad0);
  *(undefined8 **)(param_1 + 0xad0) = puVar5;
  if (lVar3 != 0) {
    plVar6 = *(long **)(lVar3 + 0x30);
    if ((long *)(lVar3 + 0x10) == plVar6) {
      pcVar10 = *(code **)(*plVar6 + 0x20);
LAB_014c13bc:
      (*pcVar10)();
    }
    else if (plVar6 != (long *)0x0) {
      pcVar10 = *(code **)(*plVar6 + 0x28);
      goto LAB_014c13bc;
    }
    (**(code **)(**(long **)(param_1 + 0xad8) + 0x18))
              (*(long **)(param_1 + 0xad8),lVar3,*(undefined8 *)(param_1 + 0xae0),
               *(undefined8 *)(param_1 + 0xae8));
    puVar5 = *(undefined8 **)(param_1 + 0xad0);
  }
  *(long **)(param_1 + 0xad8) = param_2;
  *(undefined8 *)(param_1 + 0xae0) = 0x40;
  *(undefined8 *)(param_1 + 0xae8) = 0x10;
  puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x60,0x10);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_014c1650:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar7 = *puVar5;
  puVar7[1] = puVar5[1];
  plVar6 = (long *)puVar5[6];
  if (plVar6 == (long *)0x0) {
    puVar7[6] = 0;
  }
  else if (puVar5 + 2 == plVar6) {
    puVar7[6] = puVar7 + 2;
    (**(code **)(*(long *)puVar5[6] + 0x18))();
  }
  else {
    uVar8 = (**(code **)(*plVar6 + 0x10))();
    puVar7[6] = uVar8;
  }
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  if ((ulong)puVar7[1] < 0x400) goto LAB_014c1650;
  __dest = (void *)(**(code **)(*(long *)*puVar7 + 0x10))((long *)*puVar7,0x4000,8);
  __src_00 = (void *)puVar7[8];
  pvVar11 = __dest;
  if (__src_00 != (void *)0x0) {
    lVar4 = puVar7[9];
    __src = (void *)((long)__src_00 + lVar4 * 0x10);
    if (lVar4 == 0) {
      lVar4 = -(long)__src;
    }
    else {
      memmove(__dest,__src_00,lVar4 * 0x10);
      pvVar11 = (void *)((long)__dest + lVar4 * 0x10);
      lVar4 = puVar7[9] * 0x10 - (long)__src;
    }
    __n = (long)__src_00 + lVar4;
    if (__n != 0) {
      memmove(pvVar11,__src,__n);
      pvVar11 = (void *)((long)pvVar11 + __n);
    }
    (**(code **)(*(long *)*puVar7 + 0x18))((long *)*puVar7,puVar7[8],puVar7[10] << 4,8);
  }
  puVar7[8] = __dest;
  puVar7[9] = (long)pvVar11 - (long)__dest >> 4;
  puVar7[10] = 0x400;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  puVar5 = *(undefined8 **)(param_1 + 0xaf0);
  *(undefined8 **)(param_1 + 0xaf0) = puVar7;
  if (puVar5 == (undefined8 *)0x0) goto LAB_014c15f0;
  if (puVar5[10] != 0) {
    (**(code **)(*(long *)*puVar5 + 0x18))((long *)*puVar5,puVar5[8],puVar5[10] << 4,8);
  }
  plVar6 = (long *)puVar5[6];
  if (puVar5 + 2 == plVar6) {
    pcVar10 = *(code **)(*plVar6 + 0x20);
LAB_014c15d0:
    (*pcVar10)();
  }
  else if (plVar6 != (long *)0x0) {
    pcVar10 = *(code **)(*plVar6 + 0x28);
    goto LAB_014c15d0;
  }
  (**(code **)(**(long **)(param_1 + 0xaf8) + 0x18))
            (*(long **)(param_1 + 0xaf8),puVar5,*(undefined8 *)(param_1 + 0xb00),
             *(undefined8 *)(param_1 + 0xb08));
LAB_014c15f0:
  *(undefined8 *)(param_1 + 0xb00) = 0x60;
  *(long **)(param_1 + 0xaf8) = param_2;
  *(undefined8 *)(param_1 + 0xb08) = 0x10;
  FUN_014c1660(param_1);
  uVar9 = FUN_014c1810(param_1);
  while ((uVar9 & 1) == 0) {
    nn::os::SleepThread(&LAB_00f42400);
    uVar9 = FUN_014c1810(param_1);
  }
  FUN_014c18a0(param_1);
  return;
}


