/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01219330; name: FUN_01219330
 */


void FUN_01219330(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *__dest;
  void *__src;
  undefined8 uVar12;
  void *__src_00;
  undefined8 *puVar13;
  
  lVar8 = param_1[8];
  uVar3 = param_1[9];
  uVar11 = param_1[10];
  if (uVar3 < uVar11) {
    uVar12 = *param_1;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar7 + 0x80) < 0x10) {
      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar12;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      puVar9 = (undefined8 *)(lVar8 + uVar3 * 0x28);
      *puVar9 = *param_2;
      uVar12 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[4];
      puVar9[3] = param_2[3];
      puVar9[4] = uVar5;
      puVar9[1] = uVar12;
      puVar9[2] = uVar4;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      param_1[9] = param_1[9] + 1;
      return;
    }
  }
  else {
    uVar10 = param_1[1];
    uVar1 = uVar3 + 1;
    if (uVar1 - uVar11 <= uVar10 - uVar11) {
      uVar2 = uVar11 << 3;
      if (4 < uVar11 >> 0x3d) {
        uVar2 = 0xffffffffffffffff;
      }
      if (uVar11 >> 0x3d == 0) {
        uVar2 = (uVar11 << 3) / 5;
      }
      uVar11 = uVar10;
      if (uVar2 <= uVar10) {
        uVar11 = uVar2;
      }
      if (uVar1 <= uVar11) {
        uVar1 = uVar11;
      }
      if (uVar1 <= uVar10) {
        __src = (void *)(lVar8 + uVar3 * 0x28);
        puVar9 = (undefined8 *)
                 (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar1 * 0x28,8);
        __src_00 = (void *)param_1[8];
        if ((__src_00 == (void *)0x0) || (sVar6 = (long)__src - (long)__src_00, sVar6 == 0)) {
          puVar13 = puVar9;
        }
        else {
          memmove(puVar9,__src_00,sVar6);
          puVar13 = (undefined8 *)((long)puVar9 + sVar6);
        }
        uVar12 = *param_1;
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (*(ulong *)(lVar8 + 0x80) < 0x10) {
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar12;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          *puVar13 = *param_2;
          uVar12 = param_2[1];
          uVar4 = param_2[2];
          uVar5 = param_2[4];
          __dest = puVar13 + 5;
          puVar13[3] = param_2[3];
          puVar13[4] = uVar5;
          puVar13[1] = uVar12;
          puVar13[2] = uVar4;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          if (__src_00 != (void *)0x0) {
            sVar6 = (long)__src_00 + (param_1[9] * 0x28 - (long)__src);
            if (sVar6 != 0) {
              memmove(__dest,__src,sVar6);
              __dest = (undefined8 *)((long)__dest + sVar6);
            }
            (**(code **)(*(long *)*param_1 + 0x18))
                      ((long *)*param_1,param_1[8],param_1[10] * 0x28,8);
          }
          param_1[8] = puVar9;
          param_1[9] = ((long)__dest - (long)puVar9 >> 3) * -0x3333333333333333;
          param_1[10] = uVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


