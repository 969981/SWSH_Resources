/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a42060; name: FUN_00a42060
 */


void FUN_00a42060(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  void *__dest;
  void *__src;
  undefined8 uVar10;
  void *__src_00;
  undefined8 *puVar11;
  
  lVar6 = param_1[8];
  uVar3 = param_1[9];
  uVar9 = param_1[10];
  if (uVar3 < uVar9) {
    uVar10 = *param_1;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar10;
      puVar8 = (undefined8 *)(lVar6 + uVar3 * 0xc);
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      uVar10 = *param_2;
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_2 + 1);
      *puVar8 = uVar10;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      param_1[9] = param_1[9] + 1;
      return;
    }
  }
  else {
    uVar7 = param_1[1];
    uVar1 = uVar3 + 1;
    if (uVar1 - uVar9 <= uVar7 - uVar9) {
      uVar2 = uVar9 << 3;
      if (4 < uVar9 >> 0x3d) {
        uVar2 = 0xffffffffffffffff;
      }
      if (uVar9 >> 0x3d == 0) {
        uVar2 = (uVar9 << 3) / 5;
      }
      uVar9 = uVar7;
      if (uVar2 <= uVar7) {
        uVar9 = uVar2;
      }
      if (uVar1 <= uVar9) {
        uVar1 = uVar9;
      }
      if (uVar1 <= uVar7) {
        __src = (void *)(lVar6 + uVar3 * 0xc);
        puVar8 = (undefined8 *)
                 (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar1 * 0xc,4);
        __src_00 = (void *)param_1[8];
        if ((__src_00 == (void *)0x0) || (sVar4 = (long)__src - (long)__src_00, sVar4 == 0)) {
          puVar11 = puVar8;
        }
        else {
          memmove(puVar8,__src_00,sVar4);
          puVar11 = (undefined8 *)((long)puVar8 + sVar4);
        }
        uVar10 = *param_1;
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (*(ulong *)(lVar6 + 0x80) < 0x10) {
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar10;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          uVar10 = *param_2;
          *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(param_2 + 1);
          *puVar11 = uVar10;
          __dest = (void *)((long)puVar11 + 0xc);
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          if (__src_00 != (void *)0x0) {
            sVar4 = (long)__src_00 + (param_1[9] * 0xc - (long)__src);
            if (sVar4 != 0) {
              memmove(__dest,__src,sVar4);
              __dest = (void *)((long)__dest + sVar4);
            }
            (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] * 0xc,4)
            ;
          }
          param_1[10] = uVar1;
          param_1[8] = puVar8;
          param_1[9] = ((long)__dest - (long)puVar8 >> 2) * -0x5555555555555555;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


