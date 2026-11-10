/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060cbd0; name: FUN_0060cbd0
 */


/* WARNING: Removing unreachable block (ram,0x0060d154) */

int FUN_0060cbd0(long param_1,long param_2,int param_3,long *param_4,int param_5)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  undefined8 uVar5;
  void *__src;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  size_t __n;
  long lVar18;
  ulong uVar19;
  long local_f0;
  long lStack_e8;
  undefined4 local_e0;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  int local_6c [3];
  
  if (*(int *)(param_2 + 0x90) != *(int *)(param_1 + 0x20)) {
    return 6;
  }
  if (param_3 != param_5) {
    return 0x13;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = param_2 + 200;
  if (param_4 == (long *)0x0) {
    lVar16 = 0;
    lVar15 = 0;
  }
  else {
    lVar15 = *param_4;
    lVar16 = param_4[1];
  }
  FUN_006063c0(lVar2,&local_90);
  if (param_3 == 3) {
    local_80 = local_80 + 0x15;
    local_90 = local_90 - 0x15;
  }
  if (param_3 == 4) {
    local_78 = local_78 + 0x15;
    local_88 = local_88 + -0x15;
  }
  uVar13 = local_88 + lVar16 & 0xffffffffffffffc0;
  uVar14 = local_90 + lVar15;
  lVar12 = local_78 + lVar16;
  uVar19 = lVar12 + 0x3f;
  local_78 = uVar19 & 0xffffffffffffffc0;
  uVar11 = uVar14 & 0xffffffffffffffc0;
  local_80 = lVar15 + local_80 + 0x3f & 0xffffffffffffffc0;
  __n = local_80 - uVar11 >> 6;
  uVar8 = local_78 - uVar13 >> 6;
  uVar7 = __n;
  if (param_3 == 3) {
    uVar7 = __n * 3;
    __n = uVar7 + 3 & 0x1ffffffffffffffc;
  }
  uVar3 = uVar8 * 3;
  if (param_3 != 4) {
    uVar3 = uVar8;
  }
  if ((lVar12 + 0x200000003fU | uVar11 + 0x2000000000) >> 0x26 != 0) {
    return 0x17;
  }
  if ((uVar3 >> 0xf != 0) || (0x7fff < uVar7)) {
    return 0x62;
  }
  local_90 = uVar11;
  local_88 = uVar13;
  if ((*(byte *)(*(long *)(param_2 + 0x128) + 8) & 1) != 0) {
    FUN_006028c0(uVar6,*(undefined8 *)(param_2 + 0xa8));
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(*(long *)(param_2 + 0x128) + 8) =
         *(uint *)(*(long *)(param_2 + 0x128) + 8) & 0xfffffffe;
  }
  uVar5 = FUN_00602800(uVar6,__n * uVar3,local_6c);
  *(undefined8 *)(param_2 + 0xa8) = uVar5;
  if (local_6c[0] != 0) {
    return local_6c[0];
  }
  *(uint *)(*(long *)(param_2 + 0x128) + 8) = *(uint *)(*(long *)(param_2 + 0x128) + 8) | 1;
  *(undefined4 *)(param_2 + 0x90) = 0x62697473;
  *(int *)(param_2 + 0xc0) = (int)(uVar14 >> 6);
  *(int *)(param_2 + 0xc4) = (int)(uVar19 >> 6);
  *(undefined1 *)(param_2 + 0xb2) = 2;
  *(undefined2 *)(param_2 + 0xb0) = 0x100;
  uVar17 = (uint)uVar7;
  *(int *)(param_2 + 0x98) = (int)uVar3;
  *(uint *)(param_2 + 0x9c) = uVar17;
  lVar15 = lVar15 - uVar11;
  lVar16 = lVar16 - uVar13;
  lVar12 = param_2 + 0x98;
  *(int *)(param_2 + 0xa0) = (int)__n;
  if (lVar16 != 0 || lVar15 != 0) {
    FUN_006038d0(lVar2,lVar15,lVar16);
  }
  local_e0 = 1;
  local_f0 = lVar12;
  lStack_e8 = lVar2;
  if (param_3 == 3) {
    FUN_006038d0(lVar2,0x15,0);
    local_6c[0] = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_f0);
    if (local_6c[0] == 0) {
      uVar19 = (ulong)(uVar17 & 0xffff) / 3;
      FUN_006038d0(lVar2,0xffffffffffffffeb,0);
      *(ulong *)(param_2 + 0xa8) = *(long *)(param_2 + 0xa8) + uVar19;
      local_6c[0] = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_f0);
      if (local_6c[0] == 0) {
        FUN_006038d0(lVar2,0xffffffffffffffeb,0);
        *(ulong *)(param_2 + 0xa8) = *(long *)(param_2 + 0xa8) + uVar19;
        local_6c[0] = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_f0);
        if (local_6c[0] == 0) {
          FUN_006038d0(lVar2,0x15,0);
          *(ulong *)(param_2 + 0xa8) =
               *(long *)(param_2 + 0xa8) -
               (ulong)((uint)((ulong)(uVar17 & 0xffff) * 0xaaaaaaab >> 0x20) & 0xfffffffe);
          __src = (void *)FUN_00602800(uVar6,__n,local_6c);
          if (local_6c[0] == 0) {
            if (uVar3 != 0) {
              if ((uVar17 & 0xffff) < 3) {
                if (uVar3 == 1) {
                  lVar12 = 0;
                }
                else {
                  lVar18 = 0;
                  lVar12 = 0;
                  do {
                    memcpy((void *)(*(long *)(param_2 + 0xa8) + lVar18),__src,__n);
                    memcpy((void *)(*(long *)(param_2 + 0xa8) + __n + lVar18),__src,__n);
                    lVar12 = lVar12 + 2;
                    lVar18 = lVar18 + __n * 2;
                  } while (uVar3 - (uVar3 & 1) != lVar12);
                  if ((uVar3 & 1) == 0) goto LAB_0060d1c8;
                }
                memcpy((void *)(*(long *)(param_2 + 0xa8) + lVar12 * __n),__src,__n);
              }
              else {
                lVar12 = 0;
                uVar14 = 0;
                do {
                  lVar9 = *(long *)(param_2 + 0xa8);
                  lVar18 = lVar9 + lVar12;
                  uVar7 = 0;
                  puVar10 = (undefined1 *)((long)__src + 2);
                  do {
                    puVar10[-2] = *(undefined1 *)(lVar18 + uVar7);
                    puVar10[-1] = *(undefined1 *)(lVar18 + uVar19 + uVar7);
                    puVar1 = (undefined1 *)(lVar18 + uVar19 * 2 + uVar7);
                    uVar7 = uVar7 + 1;
                    *puVar10 = *puVar1;
                    puVar10 = puVar10 + 3;
                  } while (uVar7 < uVar19);
                  memcpy((void *)(lVar9 + uVar14 * __n),__src,__n);
                  uVar14 = uVar14 + 1;
                  lVar12 = lVar12 + __n;
                } while (uVar14 != uVar3);
              }
            }
LAB_0060d1c8:
            FUN_006028c0(uVar6,__src);
            goto joined_r0x0060d0dc;
          }
        }
      }
    }
  }
  else if (param_3 == 4) {
    *(int *)(param_2 + 0xa0) = *(int *)(param_2 + 0xa0) * 3;
    *(uint *)(param_2 + 0x98) = *(uint *)(param_2 + 0x98) / 3;
    FUN_006038d0(lVar2,0,0x15);
    *(size_t *)(param_2 + 0xa8) = *(long *)(param_2 + 0xa8) + __n * 2;
    local_6c[0] = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_f0);
    if (local_6c[0] == 0) {
      FUN_006038d0(lVar2,0,0xffffffffffffffeb);
      *(size_t *)(param_2 + 0xa8) = *(long *)(param_2 + 0xa8) - __n;
      local_6c[0] = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_f0);
      if (local_6c[0] == 0) {
        FUN_006038d0(lVar2,0,0xffffffffffffffeb);
        *(size_t *)(param_2 + 0xa8) = *(long *)(param_2 + 0xa8) - __n;
        local_6c[0] = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_f0);
        if (local_6c[0] == 0) {
          FUN_006038d0(lVar2,0,0x15);
          *(int *)(param_2 + 0xa0) = *(int *)(param_2 + 0xa0) / 3;
          *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) * 3;
          goto joined_r0x0060d0dc;
        }
      }
    }
  }
  else {
    local_6c[0] = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_f0);
    if (local_6c[0] == 0) {
joined_r0x0060d0dc:
      local_6c[0] = 0;
      bVar4 = false;
      goto joined_r0x0060d0dc;
    }
  }
  bVar4 = true;
joined_r0x0060d0dc:
  if (lVar16 != 0 || lVar15 != 0) {
    FUN_006038d0(lVar2,-lVar15,-lVar16);
  }
  if (!bVar4) {
    return local_6c[0];
  }
  FUN_006028c0(uVar6,*(undefined8 *)(param_2 + 0xa8));
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(*(long *)(param_2 + 0x128) + 8) = *(uint *)(*(long *)(param_2 + 0x128) + 8) & 0xfffffffe
  ;
  return local_6c[0];
}


