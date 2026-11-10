/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040dcc0; name: FUN_0040dcc0
 */


int FUN_0040dcc0(long *param_1,double *param_2,undefined4 param_3)

{
  double *__src;
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  void *__dest;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong __n;
  ulong uVar13;
  double dVar14;
  double dVar15;
  undefined4 local_5c;
  double *local_58;
  
  local_5c = param_3;
  local_58 = param_2;
  iVar4 = (**(code **)(*param_1 + 0x88))();
  if (iVar4 == 7) {
    iVar4 = FUN_00409b70(param_1,&local_58,&local_5c,0);
    if (iVar4 == 1) {
      dVar14 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_02712b38);
      dVar14 = *local_58 * DAT_01cd5288 * dVar14;
      dVar15 = 0.5;
      if (dVar14 <= 0.0) {
        dVar15 = -0.5;
      }
      *(int *)(param_1 + 0x1f) = (int)(dVar15 + dVar14);
      puVar3 = PTR_DAT_02712a90;
      uVar1 = *(uint *)(local_58 + 1);
      uVar11 = (ulong)uVar1;
      local_58 = (double *)((long)local_58 + 0xc);
      if (uVar1 == 0) {
        iVar4 = 1;
      }
      else {
        lVar6 = FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,uVar11 * 0x18,8);
        if (lVar6 == 0) {
          iVar4 = 0x34;
        }
        else {
          if (uVar11 - 1 < 3) {
            lVar8 = 0;
          }
          else {
            lVar8 = 0;
            puVar9 = (undefined8 *)(lVar6 + 0x40);
            do {
              lVar8 = lVar8 + 4;
              puVar9[-6] = 0;
              puVar9[-3] = 0;
              *puVar9 = 0;
              puVar9[3] = 0;
              puVar9 = puVar9 + 0xc;
            } while (uVar11 - (uVar11 & 3) != lVar8);
          }
          if ((uVar1 & 3) != 0) {
            lVar7 = -(uVar11 & 3);
            puVar9 = (undefined8 *)(lVar6 + lVar8 * 0x18 + 0x10);
            do {
              lVar7 = lVar7 + 1;
              *puVar9 = 0;
              puVar9 = puVar9 + 3;
            } while (lVar7 != 0);
          }
          uVar13 = 0;
          plVar10 = (long *)(lVar6 + 0x10);
          do {
            *(undefined4 *)(plVar10 + -2) = *(undefined4 *)local_58;
            plVar10[-1] = *(long *)((long)local_58 + 4);
            uVar2 = *(uint *)((long)local_58 + 0xc);
            __n = (ulong)uVar2;
            __src = local_58 + 2;
            local_58 = __src;
            if (uVar2 != 0) {
              local_58 = (double *)((long)__src + __n);
              __dest = (void *)FUN_00404690(*(undefined4 *)puVar3,uVar2 + 1);
              *plVar10 = (long)__dest;
              if (__dest == (void *)0x0) {
                iVar4 = 2;
                goto LAB_0040defc;
              }
              memcpy(__dest,__src,__n);
              *(undefined1 *)(*plVar10 + __n) = 0;
            }
            uVar13 = uVar13 + 1;
            plVar10 = plVar10 + 3;
          } while (uVar13 < uVar11);
          iVar4 = FUN_0040df30(param_1,lVar6,uVar1);
          if (iVar4 != 1) {
LAB_0040defc:
            plVar10 = (long *)(lVar6 + 0x10);
            do {
              if (*plVar10 != 0) {
                FUN_00404870(*(undefined4 *)puVar3);
              }
              plVar10 = plVar10 + 3;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          FUN_004047f0(*(undefined4 *)puVar3,lVar6);
        }
      }
    }
  }
  else {
    uVar12 = *(undefined8 *)PTR_DAT_02712ae0;
    lVar6 = param_1[2];
    uVar5 = (**(code **)(*param_1 + 0x88))(param_1);
    FUN_00449c90(uVar12,(int)lVar6,7,uVar5);
    iVar4 = 0x5a;
  }
  return iVar4;
}


