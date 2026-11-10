/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072e0e0; name: FUN_0072e0e0
 */


void FUN_0072e0e0(long *param_1,ulong param_2,ulong param_3)

{
  void *__src;
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong *local_88;
  long local_80;
  long local_78;
  long *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  ulong *local_58;
  
  uVar8 = param_1[1];
  if (uVar8 < param_2) {
    uVar7 = param_1[2] * 0x40;
    uVar9 = param_2 - uVar8;
    if (uVar7 < uVar9 || uVar7 - uVar9 < uVar8) {
      local_70 = (long *)param_1[3];
      local_80 = 0;
      local_78 = 0;
      local_88 = (ulong *)0x0;
      local_60 = 0;
      uStack_68 = 0;
      if ((long)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar7 < 0x3fffffffffffffff) {
        uVar7 = param_1[2] << 7;
        uVar8 = param_2 + 0x3f & 0xffffffffffffffc0;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
      }
      else {
        uVar8 = 0x7fffffffffffffff;
      }
      FUN_0072d300(&local_88,uVar8);
      puVar3 = local_88;
      __src = (void *)*param_1;
      uVar7 = param_1[1];
      local_80 = uVar7 + uVar9;
      local_58 = local_88;
      if ((long)uVar7 < 1) {
        uVar7 = 0;
      }
      else {
        uVar8 = uVar7 >> 6;
        memmove(local_88,__src,uVar8 * 8);
        uVar7 = uVar7 & 0x3f;
        local_58 = puVar3 + uVar8;
        if (uVar7 != 0) {
          uVar5 = 0xffffffffffffffff >> (-uVar7 & 0x3f);
          *local_58 = *local_58 & (uVar5 ^ 0xffffffffffffffff) |
                      *(ulong *)((long)__src + uVar8 * 8) & uVar5;
        }
      }
      puVar3 = local_58;
      puVar4 = (ulong *)*param_1;
      *param_1 = (long)local_88;
      lVar6 = param_1[1];
      param_1[1] = local_80;
      lVar1 = param_1[2];
      plVar2 = (long *)param_1[3];
      param_1[2] = local_78;
      param_1[3] = (long)local_70;
      local_88 = puVar3;
      local_70 = plVar2;
      local_78 = lVar1;
      local_80 = lVar6;
      if (puVar4 != (ulong *)0x0) {
        local_88 = puVar4;
        (**(code **)(*plVar2 + 0x18))(plVar2,puVar4,lVar1 << 3,1);
        local_88 = puVar3;
      }
    }
    else {
      uVar7 = (ulong)((uint)uVar8 & 0x3f);
      param_1[1] = param_2;
      local_88 = (ulong *)(*param_1 + (uVar8 >> 3 & 0x1ffffffffffffff8));
    }
    if (uVar9 != 0) {
      iVar10 = (int)uVar7;
      if ((param_3 & 1) == 0) {
        if (iVar10 != 0) {
          uVar5 = (ulong)(0x40 - iVar10);
          uVar8 = uVar9;
          if (uVar5 <= uVar9) {
            uVar8 = uVar5;
          }
          *local_88 = *local_88 &
                      (0xffffffffffffffffU >> (uVar5 - uVar8 & 0x3f) & -1L << uVar7 ^
                      0xffffffffffffffff);
          uVar9 = uVar9 - uVar8;
          local_88 = local_88 + 1;
        }
                    /* WARNING: Subroutine does not return */
        memset(local_88,0,(uVar9 >> 6) << 3);
      }
      if (iVar10 != 0) {
        uVar5 = (ulong)(0x40 - iVar10);
        uVar8 = uVar9;
        if (uVar5 <= uVar9) {
          uVar8 = uVar5;
        }
        *local_88 = *local_88 | 0xffffffffffffffffU >> (uVar5 - uVar8 & 0x3f) & -1L << uVar7;
        uVar9 = uVar9 - uVar8;
        local_88 = local_88 + 1;
      }
                    /* WARNING: Subroutine does not return */
      memset(local_88,0xff,(uVar9 >> 6) << 3);
    }
  }
  else {
    param_1[1] = param_2;
  }
  return;
}


