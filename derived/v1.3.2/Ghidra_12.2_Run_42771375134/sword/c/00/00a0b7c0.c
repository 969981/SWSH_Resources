/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0b7c0; name: FUN_00a0b7c0
 */


void FUN_00a0b7c0(long *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  void *__dest;
  long lVar4;
  undefined8 *puVar5;
  void *__src;
  void *__src_00;
  size_t sVar6;
  void *pvVar7;
  
  lVar4 = param_3 * 0xc0;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,lVar4,0x10);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(lVar1 + 0x70);
    do {
      plVar3 = (long *)*param_4;
      puVar5[-0xe] = plVar3;
      puVar5[-0xd] = 0x666666666666666;
      puVar5[-8] = 0;
      puVar5[-6] = plVar3;
      puVar5[-5] = 0x666666666666666;
      *puVar5 = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,0x1400,8);
      __src = (void *)puVar5[2];
      pvVar7 = __dest;
      if (__src != (void *)0x0) {
        __src_00 = (void *)((long)__src + puVar5[3] * 0x28);
        sVar6 = puVar5[3] * 0x28;
        if (sVar6 != 0) {
          memmove(__dest,__src,sVar6);
          pvVar7 = (void *)((long)__dest + sVar6);
          sVar6 = (long)__src + (puVar5[3] * 0x28 - (long)__src_00);
          if (sVar6 != 0) {
            memmove(pvVar7,__src_00,sVar6);
            pvVar7 = (void *)((long)pvVar7 + sVar6);
          }
        }
        (**(code **)(*(long *)puVar5[-6] + 0x18))((long *)puVar5[-6],puVar5[2],puVar5[4] * 0x28,8);
      }
      *(undefined8 *)((long)puVar5 + 0x45) = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[2] = __dest;
      puVar5[3] = ((long)pvVar7 - (long)__dest >> 3) * -0x3333333333333333;
      puVar5[4] = 0x80;
      puVar5[6] = 0;
      param_3 = param_3 + -1;
      puVar5 = puVar5 + 0x18;
    } while (param_3 != 0);
  }
  *param_1 = lVar1;
  param_1[1] = (long)param_2;
  param_1[2] = lVar4;
  param_1[3] = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return;
}


