/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb2540; name: FUN_00bb2540
 */


void FUN_00bb2540(undefined8 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  size_t sVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  void *__dest;
  void *__src;
  undefined8 uVar11;
  void *__src_00;
  undefined4 *puVar12;
  
  lVar7 = param_1[8];
  uVar3 = param_1[9];
  uVar10 = param_1[10];
  if (uVar3 < uVar10) {
    uVar11 = *param_1;
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar6 + 0x80) < 0x10) {
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar11;
      puVar9 = (undefined4 *)(lVar7 + uVar3 * 6);
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      uVar4 = *param_2;
      *(undefined2 *)(puVar9 + 1) = *(undefined2 *)(param_2 + 1);
      *puVar9 = uVar4;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      param_1[9] = param_1[9] + 1;
      return;
    }
  }
  else {
    uVar8 = param_1[1];
    uVar1 = uVar3 + 1;
    if (uVar1 - uVar10 <= uVar8 - uVar10) {
      uVar2 = uVar10 << 3;
      if (4 < uVar10 >> 0x3d) {
        uVar2 = 0xffffffffffffffff;
      }
      if (uVar10 >> 0x3d == 0) {
        uVar2 = (uVar10 << 3) / 5;
      }
      uVar10 = uVar8;
      if (uVar2 <= uVar8) {
        uVar10 = uVar2;
      }
      if (uVar1 <= uVar10) {
        uVar1 = uVar10;
      }
      if (uVar1 <= uVar8) {
        __src = (void *)(lVar7 + uVar3 * 6);
        puVar9 = (undefined4 *)(**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar1 * 6,2)
        ;
        __src_00 = (void *)param_1[8];
        if ((__src_00 == (void *)0x0) || (sVar5 = (long)__src - (long)__src_00, sVar5 == 0)) {
          puVar12 = puVar9;
        }
        else {
          memmove(puVar9,__src_00,sVar5);
          puVar12 = (undefined4 *)((long)puVar9 + sVar5);
        }
        uVar11 = *param_1;
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (*(ulong *)(lVar7 + 0x80) < 0x10) {
          *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar11;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          uVar4 = *param_2;
          *(undefined2 *)(puVar12 + 1) = *(undefined2 *)(param_2 + 1);
          *puVar12 = uVar4;
          __dest = (void *)((long)puVar12 + 6);
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
          if (__src_00 != (void *)0x0) {
            sVar5 = (long)__src_00 + (param_1[9] * 6 - (long)__src);
            if (sVar5 != 0) {
              memmove(__dest,__src,sVar5);
              __dest = (void *)((long)__dest + sVar5);
            }
            (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] * 6,2);
          }
          param_1[10] = uVar1;
          param_1[8] = puVar9;
          param_1[9] = ((long)__dest - (long)puVar9 >> 1) * -0x5555555555555555;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


