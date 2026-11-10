/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008caa00; name: FUN_008caa00
 */


void FUN_008caa00(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  size_t sVar4;
  undefined8 *__dest;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  void *__src;
  void *__src_00;
  long lVar9;
  
  uVar3 = param_2[10];
  uVar6 = param_2[1];
  if ((param_4 - uVar3) + param_2[9] <= uVar6 - uVar3) {
    uVar2 = uVar3 << 3;
    if (4 < uVar3 >> 0x3d) {
      uVar2 = 0xffffffffffffffff;
    }
    if (uVar3 >> 0x3d == 0) {
      uVar2 = (uVar3 << 3) / 5;
    }
    uVar3 = param_2[9] + param_4;
    uVar1 = uVar6;
    if (uVar2 <= uVar6) {
      uVar1 = uVar2;
    }
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (uVar3 <= uVar6) {
      lVar9 = param_2[8];
      __src = (void *)*param_3;
      __dest = (undefined8 *)(**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,uVar3 << 3,4);
      __src_00 = (void *)param_2[8];
      puVar7 = __dest;
      if (__src_00 != (void *)0x0) {
        sVar4 = (long)__src - (long)__src_00;
        if (sVar4 != 0) {
          memmove(__dest,__src_00,sVar4);
          puVar7 = (undefined8 *)((long)__dest + sVar4);
        }
      }
      uVar8 = *param_2;
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (*(ulong *)(lVar5 + 0x80) < 0x10) {
        *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar8;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        *puVar7 = *param_5;
        puVar7 = puVar7 + param_4;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        if (__src_00 != (void *)0x0) {
          sVar4 = (long)__src_00 + (param_2[9] * 8 - (long)__src);
          if (sVar4 != 0) {
            memmove(puVar7,__src,sVar4);
            puVar7 = (undefined8 *)((long)puVar7 + sVar4);
          }
          (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2[8],param_2[10] << 3,4);
        }
        param_2[10] = uVar3;
        param_2[8] = __dest;
        param_2[9] = (long)puVar7 - (long)__dest >> 3;
        *param_1 = (long)(__dest + ((long)__src - lVar9 >> 3));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


