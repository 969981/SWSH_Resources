/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d00e40; name: FUN_00d00e40
 */


void FUN_00d00e40(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  size_t sVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  void *__dest;
  void *__src;
  undefined8 uVar12;
  void *__src_00;
  undefined8 *puVar13;
  
  lVar7 = param_1[8];
  uVar3 = param_1[9];
  uVar10 = param_1[10];
  if (uVar3 < uVar10) {
    uVar12 = *param_1;
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar6 + 0x80) < 0x10) {
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar12;
      puVar8 = (undefined8 *)(lVar7 + uVar3 * 0x1c);
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      uVar12 = *param_2;
      uVar4 = param_2[1];
      uVar11 = param_2[2];
      *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(param_2 + 3);
      puVar8[1] = uVar4;
      puVar8[2] = uVar11;
      *puVar8 = uVar12;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      param_1[9] = param_1[9] + 1;
      return;
    }
  }
  else {
    uVar9 = param_1[1];
    uVar1 = uVar3 + 1;
    if (uVar1 - uVar10 <= uVar9 - uVar10) {
      uVar2 = uVar10 << 3;
      if (4 < uVar10 >> 0x3d) {
        uVar2 = 0xffffffffffffffff;
      }
      if (uVar10 >> 0x3d == 0) {
        uVar2 = (uVar10 << 3) / 5;
      }
      uVar10 = uVar9;
      if (uVar2 <= uVar9) {
        uVar10 = uVar2;
      }
      if (uVar1 <= uVar10) {
        uVar1 = uVar10;
      }
      if (uVar1 <= uVar9) {
        __src = (void *)(lVar7 + uVar3 * 0x1c);
        puVar8 = (undefined8 *)
                 (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar1 * 0x1c,4);
        __src_00 = (void *)param_1[8];
        if ((__src_00 == (void *)0x0) || (sVar5 = (long)__src - (long)__src_00, sVar5 == 0)) {
          puVar13 = puVar8;
        }
        else {
          memmove(puVar8,__src_00,sVar5);
          puVar13 = (undefined8 *)((long)puVar8 + sVar5);
        }
        uVar12 = *param_1;
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (*(ulong *)(lVar7 + 0x80) < 0x10) {
          *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar12;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          uVar11 = param_2[2];
          uVar12 = *param_2;
          uVar4 = param_2[1];
          *(undefined4 *)(puVar13 + 3) = *(undefined4 *)(param_2 + 3);
          puVar13[1] = uVar4;
          puVar13[2] = uVar11;
          *puVar13 = uVar12;
          __dest = (void *)((long)puVar13 + 0x1c);
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
          if (__src_00 != (void *)0x0) {
            sVar5 = (long)__src_00 + (param_1[9] * 0x1c - (long)__src);
            if (sVar5 != 0) {
              memmove(__dest,__src,sVar5);
              __dest = (void *)((long)__dest + sVar5);
            }
            (**(code **)(*(long *)*param_1 + 0x18))
                      ((long *)*param_1,param_1[8],param_1[10] * 0x1c,4);
          }
          param_1[8] = puVar8;
          param_1[9] = ((long)__dest - (long)puVar8 >> 2) * 0x6db6db6db6db6db7;
          param_1[10] = uVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


