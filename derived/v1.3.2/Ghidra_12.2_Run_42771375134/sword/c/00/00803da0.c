/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00803da0; name: FUN_00803da0
 */


void FUN_00803da0(long param_1,undefined8 param_2,long *param_3,ulong param_4,long param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  void *__dest;
  void *pvVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  size_t __n;
  undefined4 uVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long *plVar19;
  uint local_9c;
  ulong local_90;
  ulong local_88;
  void *local_80;
  void *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  bVar2 = *(int *)(param_4 + 0x40) != 3;
  if (*(char *)(param_1 + 6) == '\0') {
    if (bVar2) goto LAB_00803e5c;
  }
  else {
    if (bVar2) {
LAB_00803e5c:
      local_9c = (**(code **)(*param_3 + 0x28))(param_3,param_2,param_4);
      local_9c = local_9c & 1;
      goto LAB_00803e7c;
    }
    if (1 < *(int *)(PTR_DAT_02716e20 + (ulong)*(uint *)(param_4 + 0x3c) * 4) - 9U) {
      FUN_00805050(param_1,param_2,param_3,param_4,param_5);
      return;
    }
  }
  local_9c = (**(code **)(*param_3 + 0x30))(param_3,param_2,param_4);
LAB_00803e7c:
  local_70 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  local_78 = (void *)0x0;
  uVar3 = FUN_007e4b30(param_4);
  if ((uVar3 & 1) != 0) {
    lVar4 = (**(code **)(*param_3 + 0x290))(param_3,param_2,param_4,10,0xffffffff,0);
    if (*(int *)(lVar4 + 8) != 0) {
      lVar8 = 0;
      if (*(long *)(lVar4 + 0x10) != 0) {
        lVar8 = *(long *)(lVar4 + 0x10) + 8;
      }
      puVar12 = (undefined8 *)(lVar8 + 8);
      puVar7 = (undefined8 *)0x0;
      do {
        pvVar5 = local_78;
        __n = (long)puVar7 - (long)local_78;
        uVar11 = (long)__n >> 3;
        uVar3 = uVar11 + 1;
        if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar11 < 0xfffffffffffffff) {
          if (uVar3 <= (ulong)((long)__n >> 2)) {
            uVar3 = (long)__n >> 2;
          }
          if (uVar3 != 0) {
            if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            goto LAB_00803f60;
          }
          __dest = (void *)0x0;
        }
        else {
          uVar3 = 0x1fffffffffffffff;
LAB_00803f60:
          __dest = operator_new(uVar3 << 3);
        }
        puVar7 = (undefined8 *)((long)__dest + uVar11 * 8);
        puVar1 = (undefined8 *)((long)__dest + uVar3 * 8);
        puVar16 = puVar7 + 1;
        *puVar7 = puVar12[-1];
        if (0 < (long)__n) {
          memcpy(__dest,pvVar5,__n);
        }
        puVar13 = puVar12;
        local_78 = __dest;
        local_70 = puVar16;
        local_68 = puVar1;
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5);
        }
        while( true ) {
          lVar8 = 0;
          if (*(long *)(lVar4 + 0x10) != 0) {
            lVar8 = *(long *)(lVar4 + 0x10) + 8;
          }
          if (puVar13 == (undefined8 *)(lVar8 + (long)*(int *)(lVar4 + 8) * 8)) goto LAB_00803fe8;
          puVar12 = puVar13 + 1;
          puVar7 = local_68;
          if (puVar16 == local_68) break;
          *puVar16 = *puVar13;
          puVar16 = local_70 + 1;
          puVar13 = puVar12;
          local_70 = puVar16;
        }
      } while( true );
    }
    puVar16 = (undefined8 *)0x0;
    __dest = (void *)0x0;
LAB_00803fe8:
    puVar17 = PTR_nothrow_02716f58;
    local_90 = *(ulong *)(*(long *)(param_4 + 0x68) + 0x30);
    uVar3 = (long)puVar16 - (long)__dest >> 3;
    if (0x400 < (long)puVar16 - (long)__dest) {
      uVar11 = uVar3;
      if (0xffffffffffffffe < (long)uVar3) {
        uVar11 = 0xfffffffffffffff;
      }
      do {
        pvVar5 = operator_new(uVar11 << 3,(nothrow_t *)puVar17);
        if (pvVar5 != (void *)0x0) {
          FUN_0080ae00(__dest,puVar16,&local_90,uVar3,pvVar5,uVar11);
          operator_delete(pvVar5);
          if (0 < (int)local_9c) goto LAB_00804060;
          goto LAB_008043bc;
        }
        uVar11 = uVar11 >> 1;
      } while (uVar11 != 0);
    }
    FUN_0080ae00(__dest,puVar16,&local_90,uVar3,0,0);
  }
  if (0 < (int)local_9c) {
LAB_00804060:
    uVar3 = 0;
    puVar17 = PTR_DAT_02716e20;
    do {
      while( true ) {
        uVar15 = (undefined4)uVar3;
        if (*(int *)(param_4 + 0x40) != 3) {
          uVar15 = 0xffffffff;
        }
        FUN_00805160(param_1,param_2,param_3,param_4,param_5);
        if (*(int *)(puVar17 + (ulong)*(uint *)(param_4 + 0x3c) * 4) != 10) break;
        plVar19 = *(long **)(param_1 + 0x18);
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 != 0) {
          lVar8 = param_1 + 0x28;
          do {
            bVar2 = *(ulong *)(lVar4 + 0x20) < param_4;
            if (!bVar2) {
              lVar8 = lVar4;
            }
            lVar4 = *(long *)(lVar4 + (ulong)bVar2 * 8);
          } while (lVar4 != 0);
          if ((lVar8 != param_1 + 0x28) && (*(ulong *)(lVar8 + 0x20) <= param_4)) {
            plVar19 = *(long **)(lVar8 + 0x28);
          }
        }
        if (*(int *)(param_4 + 0x40) == 3) {
          uVar11 = FUN_007e4b30(param_4);
          if ((uVar11 & 1) == 0) {
            uVar18 = (**(code **)(*param_3 + 0x1a0))(param_3,param_2,param_4,uVar3 & 0xffffffff);
          }
          else {
            uVar18 = *(undefined8 *)((long)local_78 + uVar3 * 8);
          }
        }
        else {
          uVar18 = (**(code **)(*param_3 + 0xd8))(param_3,param_2,param_4,0);
        }
        (**(code **)(*plVar19 + 0x68))
                  (&local_90,plVar19,uVar18,uVar15,local_9c,*(undefined1 *)(param_1 + 4));
        pvVar5 = (void *)((ulong)&local_90 | 1);
        uVar11 = local_90 >> 1 & 0x7f;
        if ((local_90 & 1) != 0) {
          pvVar5 = local_80;
          uVar11 = local_88;
        }
        if (uVar11 == 0) {
          uVar10 = 0;
        }
        else {
          uVar9 = 0;
          uVar14 = 0;
          do {
            while (*(char *)((long)pvVar5 + uVar14) != '\n') {
              uVar14 = uVar14 + 1;
              uVar10 = uVar9;
              if (uVar14 == uVar11) goto LAB_00804290;
            }
            uVar10 = uVar14 + 1;
            FUN_00809680(param_5,(long)pvVar5 + uVar9,uVar10 - uVar9);
            *(undefined1 *)(param_5 + 0x14) = 1;
            uVar9 = uVar10;
            uVar14 = uVar10;
          } while (uVar10 != uVar11);
        }
LAB_00804290:
        FUN_00809680(param_5,(long)pvVar5 + uVar10,uVar11 - uVar10);
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
        std::string::append((char *)(param_5 + 0x18));
        FUN_00802cb0(param_1,uVar18,param_5);
        FUN_00803ce0(param_5);
        (**(code **)(*plVar19 + 0x70))
                  (&local_90,plVar19,uVar18,uVar15,local_9c,*(undefined1 *)(param_1 + 4));
        puVar17 = PTR_DAT_02716e20;
        pvVar5 = (void *)((ulong)&local_90 | 1);
        uVar11 = local_90 >> 1 & 0x7f;
        if ((local_90 & 1) != 0) {
          pvVar5 = local_80;
          uVar11 = local_88;
        }
        if (uVar11 == 0) {
          uVar10 = 0;
        }
        else {
          uVar9 = 0;
          uVar14 = 0;
          do {
            while (*(char *)((long)pvVar5 + uVar14) != '\n') {
              uVar14 = uVar14 + 1;
              uVar10 = uVar9;
              if (uVar14 == uVar11) goto LAB_00804388;
            }
            uVar10 = uVar14 + 1;
            FUN_00809680(param_5,(long)pvVar5 + uVar9,uVar10 - uVar9);
            *(undefined1 *)(param_5 + 0x14) = 1;
            uVar9 = uVar10;
            uVar14 = uVar10;
          } while (uVar10 != uVar11);
        }
LAB_00804388:
        FUN_00809680(param_5,(long)pvVar5 + uVar10,uVar11 - uVar10);
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
        uVar3 = uVar3 + 1;
        if (uVar3 == local_9c) goto LAB_008043bc;
      }
      FUN_00809680(param_5,&DAT_01d17acd,2);
      FUN_00804540(param_1,param_2,param_3,param_4,uVar15,param_5);
      bVar2 = *(char *)(param_1 + 4) == '\0';
      if (bVar2) {
        FUN_00809680(param_5,&DAT_01d245b7,1);
        puVar6 = &DAT_01d245b8;
        *(undefined1 *)(param_5 + 0x14) = 1;
      }
      else {
        puVar6 = &DAT_01ce77a5;
      }
      FUN_00809680(param_5,puVar6,!bVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 != local_9c);
  }
LAB_008043bc:
  if (local_78 != (void *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  return;
}


