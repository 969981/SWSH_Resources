/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d76d0; name: FUN_007d76d0
 */


void FUN_007d76d0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
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
      puVar10 = (undefined8 *)(lVar8 + uVar3 * 0x30);
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      uVar12 = param_2[1];
      *puVar10 = *param_2;
      puVar10[1] = uVar12;
      uVar12 = param_2[2];
      uVar4 = param_2[3];
      uVar5 = param_2[5];
      puVar10[4] = param_2[4];
      puVar10[5] = uVar5;
      puVar10[2] = uVar12;
      puVar10[3] = uVar4;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      param_1[9] = param_1[9] + 1;
      return;
    }
  }
  else {
    uVar9 = param_1[1];
    uVar1 = uVar3 + 1;
    if (uVar1 - uVar11 <= uVar9 - uVar11) {
      uVar2 = uVar11 << 3;
      if (4 < uVar11 >> 0x3d) {
        uVar2 = 0xffffffffffffffff;
      }
      if (uVar11 >> 0x3d == 0) {
        uVar2 = (uVar11 << 3) / 5;
      }
      uVar11 = uVar9;
      if (uVar2 <= uVar9) {
        uVar11 = uVar2;
      }
      if (uVar1 <= uVar11) {
        uVar1 = uVar11;
      }
      if (uVar1 <= uVar9) {
        __src = (void *)(lVar8 + uVar3 * 0x30);
        puVar10 = (undefined8 *)
                  (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar1 * 0x30,8);
        __src_00 = (void *)param_1[8];
        if ((__src_00 == (void *)0x0) || (sVar6 = (long)__src - (long)__src_00, sVar6 == 0)) {
          puVar13 = puVar10;
        }
        else {
          memmove(puVar10,__src_00,sVar6);
          puVar13 = (undefined8 *)((long)puVar10 + sVar6);
        }
        uVar12 = *param_1;
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (*(ulong *)(lVar8 + 0x80) < 0x10) {
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar12;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          uVar12 = param_2[1];
          *puVar13 = *param_2;
          puVar13[1] = uVar12;
          uVar12 = param_2[2];
          uVar4 = param_2[3];
          uVar5 = param_2[5];
          __dest = puVar13 + 6;
          puVar13[4] = param_2[4];
          puVar13[5] = uVar5;
          puVar13[2] = uVar12;
          puVar13[3] = uVar4;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          if (__src_00 != (void *)0x0) {
            sVar6 = (long)__src_00 + (param_1[9] * 0x30 - (long)__src);
            if (sVar6 != 0) {
              memmove(__dest,__src,sVar6);
              __dest = (undefined8 *)((long)__dest + sVar6);
            }
            (**(code **)(*(long *)*param_1 + 0x18))
                      ((long *)*param_1,param_1[8],param_1[10] * 0x30,8);
          }
          param_1[10] = uVar1;
          param_1[8] = puVar10;
          param_1[9] = ((long)__dest - (long)puVar10 >> 4) * -0x5555555555555555;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


