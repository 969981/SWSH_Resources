/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c3bb0; name: FUN_012c3bb0
 */


void FUN_012c3bb0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t __n;
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *__dest;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = ((long)param_3 - (long)param_2 >> 2) * -0x5555555555555555;
  lVar3 = param_1[2];
  __dest = (void *)*param_1;
  if ((ulong)((lVar3 - (long)__dest >> 2) * -0x5555555555555555) < uVar8) {
    if (__dest != (void *)0x0) {
      param_1[1] = (long)__dest;
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],__dest,lVar3 - (long)__dest,4);
      lVar3 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
    }
    if (0x1555555555555555 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar5 = (lVar3 >> 2) * 0x5555555555555556;
    if (uVar8 <= uVar5) {
      uVar8 = uVar5;
    }
    uVar5 = 0x1555555555555555;
    if ((ulong)((lVar3 >> 2) * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
      uVar5 = uVar8;
    }
    puVar2 = (undefined8 *)
             (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar5 * 0xc,4);
    if (puVar2 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    *param_1 = (long)puVar2;
    param_1[1] = (long)puVar2;
    param_1[2] = (long)puVar2 + uVar5 * 0xc;
    puVar1 = PTR_DAT_02710860;
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0xc)) {
      lVar7 = param_1[3];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_012c3e00:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar7;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      uVar4 = *param_2;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 1);
      *puVar2 = uVar4;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      puVar2 = (undefined8 *)(param_1[1] + 0xc);
      param_1[1] = (long)puVar2;
    }
  }
  else {
    uVar5 = (param_1[1] - (long)__dest >> 2) * -0x5555555555555555;
    puVar2 = (undefined8 *)((long)param_2 + (param_1[1] - (long)__dest));
    puVar6 = puVar2;
    if (uVar8 <= uVar5) {
      puVar6 = param_3;
    }
    __n = (long)puVar6 - (long)param_2;
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    puVar1 = PTR_DAT_02710860;
    if (uVar5 < uVar8) {
      if (puVar6 != param_3) {
        puVar6 = (undefined8 *)param_1[1];
        do {
          lVar7 = param_1[3];
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_012c3e00;
          *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar7;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          uVar4 = *puVar2;
          *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar2 + 1);
          *puVar6 = uVar4;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          puVar2 = (undefined8 *)((long)puVar2 + 0xc);
          puVar6 = (undefined8 *)(param_1[1] + 0xc);
          param_1[1] = (long)puVar6;
        } while (param_3 != puVar2);
      }
    }
    else {
      param_1[1] = (long)((long)__dest + ((long)__n >> 2) * 4);
    }
  }
  return;
}


