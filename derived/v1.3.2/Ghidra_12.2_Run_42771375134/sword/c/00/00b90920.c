/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b90920; name: FUN_00b90920
 */


void FUN_00b90920(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  size_t __n;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  void *__dest;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  uVar9 = (long)param_3 - (long)param_2 >> 7;
  lVar6 = param_1[2];
  __dest = (void *)*param_1;
  if ((ulong)(lVar6 - (long)__dest >> 7) < uVar9) {
    if (__dest != (void *)0x0) {
      param_1[1] = __dest;
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],__dest,lVar6 - (long)__dest,8);
      lVar6 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
    }
    if (uVar9 >> 0x39 != 0) {
LAB_00b909c0:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar6 >> 7) < 0xffffffffffffff) {
      uVar7 = lVar6 >> 6;
      if ((uVar9 <= uVar7) && (uVar9 = uVar7, uVar7 >> 0x39 != 0)) goto LAB_00b909c0;
    }
    else {
      uVar9 = 0x1ffffffffffffff;
    }
    puVar5 = (undefined8 *)
             (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar9 << 7,8);
    if (puVar5 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    param_1[2] = puVar5 + uVar9 * 0x10;
    *param_1 = puVar5;
    param_1[1] = puVar5;
    puVar4 = PTR_DAT_02710860;
    for (; param_2 != param_3; param_2 = param_2 + 0x10) {
      uVar10 = param_1[3];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_00b90bac:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar10;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      uVar10 = *param_2;
      uVar2 = param_2[1];
      uVar3 = param_2[3];
      puVar5[2] = param_2[2];
      puVar5[3] = uVar3;
      *puVar5 = uVar10;
      puVar5[1] = uVar2;
      uVar10 = param_2[4];
      uVar2 = param_2[5];
      uVar3 = param_2[7];
      puVar5[6] = param_2[6];
      puVar5[7] = uVar3;
      puVar5[4] = uVar10;
      puVar5[5] = uVar2;
      uVar10 = param_2[8];
      uVar2 = param_2[9];
      uVar3 = param_2[0xb];
      puVar5[10] = param_2[10];
      puVar5[0xb] = uVar3;
      puVar5[8] = uVar10;
      puVar5[9] = uVar2;
      uVar10 = param_2[0xc];
      uVar2 = param_2[0xd];
      uVar3 = param_2[0xf];
      puVar5[0xe] = param_2[0xe];
      puVar5[0xf] = uVar3;
      puVar5[0xc] = uVar10;
      puVar5[0xd] = uVar2;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      puVar5 = (undefined8 *)(param_1[1] + 0x80);
      param_1[1] = puVar5;
    }
  }
  else {
    uVar7 = param_1[1] - (long)__dest >> 7;
    puVar5 = (undefined8 *)((long)param_2 + (param_1[1] - (long)__dest));
    puVar8 = puVar5;
    if (uVar9 <= uVar7) {
      puVar8 = param_3;
    }
    __n = (long)puVar8 - (long)param_2;
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    puVar4 = PTR_DAT_02710860;
    if (uVar7 < uVar9) {
      if (puVar8 != param_3) {
        puVar8 = (undefined8 *)param_1[1];
        do {
          uVar10 = param_1[3];
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00b90bac;
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar10;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          uVar10 = *puVar5;
          uVar2 = puVar5[1];
          uVar3 = puVar5[3];
          puVar8[2] = puVar5[2];
          puVar8[3] = uVar3;
          *puVar8 = uVar10;
          puVar8[1] = uVar2;
          uVar10 = puVar5[4];
          uVar2 = puVar5[5];
          uVar3 = puVar5[7];
          puVar8[6] = puVar5[6];
          puVar8[7] = uVar3;
          puVar8[4] = uVar10;
          puVar8[5] = uVar2;
          uVar10 = puVar5[8];
          uVar2 = puVar5[9];
          uVar3 = puVar5[0xb];
          puVar8[10] = puVar5[10];
          puVar8[0xb] = uVar3;
          puVar8[8] = uVar10;
          puVar8[9] = uVar2;
          uVar10 = puVar5[0xc];
          uVar2 = puVar5[0xd];
          puVar1 = puVar5 + 0xe;
          uVar3 = puVar5[0xf];
          puVar5 = puVar5 + 0x10;
          puVar8[0xe] = *puVar1;
          puVar8[0xf] = uVar3;
          puVar8[0xc] = uVar10;
          puVar8[0xd] = uVar2;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          puVar8 = (undefined8 *)(param_1[1] + 0x80);
          param_1[1] = puVar8;
        } while (param_3 != puVar5);
      }
    }
    else {
      param_1[1] = (void *)((long)__dest + ((long)__n >> 7) * 0x80);
    }
  }
  return;
}


