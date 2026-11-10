/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012528b0; name: FUN_012528b0
 */


void FUN_012528b0(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 uVar4;
  long *plVar5;
  __tree_node_base *p_Var6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  uVar12 = (param_3 - param_2 >> 3) * -0x79435e50d79435e5;
  lVar7 = param_1[2];
  puVar13 = (undefined8 *)*param_1;
  if ((ulong)((lVar7 - (long)puVar13 >> 3) * -0x79435e50d79435e5) < uVar12) {
    if (puVar13 != (undefined8 *)0x0) {
      puVar15 = (undefined8 *)param_1[1];
      if (puVar15 == puVar13) {
        puVar15 = puVar13;
      }
      else {
        do {
          puVar15 = puVar15 + -0x13;
          (**(code **)*puVar15)(puVar15);
        } while (puVar13 != puVar15);
        puVar15 = (undefined8 *)*param_1;
      }
      param_1[1] = (long)puVar13;
      FUN_017cd7a0(puVar15);
      lVar7 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
    }
    uVar9 = 0x1af286bca1af286;
    if (0x1af286bca1af286 < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)((lVar7 >> 3) * -0x79435e50d79435e5) < 0xd79435e50d7943) {
      uVar8 = (lVar7 >> 3) * 0xd79435e50d79436;
      uVar9 = uVar12;
      if (uVar12 <= uVar8) {
        uVar9 = uVar8;
      }
    }
    lVar7 = FUN_017cd750(uVar9 * 0x98);
    *param_1 = lVar7;
    param_1[1] = lVar7;
    param_1[2] = lVar7 + uVar9 * 0x98;
  }
  else {
    uVar9 = (param_1[1] - (long)puVar13 >> 3) * -0x79435e50d79435e5;
    lVar7 = param_2;
    param_2 = param_2 + (param_1[1] - (long)puVar13);
    if (uVar12 <= uVar9) {
      param_2 = param_3;
    }
    while (param_2 != lVar7) {
      FUN_017b6530(puVar13,lVar7);
      puVar13 = puVar13 + 0x13;
      lVar7 = lVar7 + 0x98;
    }
    if (uVar12 <= uVar9) {
      puVar15 = (undefined8 *)param_1[1];
      while (puVar15 != puVar13) {
        puVar15 = puVar15 + -0x13;
        (**(code **)*puVar15)(puVar15);
      }
      param_1[1] = (long)puVar13;
      return;
    }
  }
  if (param_2 != param_3) {
    plVar14 = (long *)param_1[1];
    puVar1 = PTR_DAT_02716950 + 0x10;
    puVar2 = PTR_DAT_02716958 + 0x10;
    do {
      *plVar14 = (long)puVar1;
      *(undefined1 *)(plVar14 + 1) = *(undefined1 *)(param_2 + 8);
      *(undefined4 *)((long)plVar14 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      *(undefined1 *)(plVar14 + 2) = *(undefined1 *)(param_2 + 0x10);
      FUN_017cbe90(plVar14 + 3,param_2 + 0x18);
      FUN_017cbe90(plVar14 + 4,param_2 + 0x20);
      FUN_017cbe90(plVar14 + 5,param_2 + 0x28);
      *(undefined1 *)(plVar14 + 6) = *(undefined1 *)(param_2 + 0x30);
      *(undefined4 *)((long)plVar14 + 0x34) = *(undefined4 *)(param_2 + 0x34);
      uVar4 = *(undefined4 *)(param_2 + 0x38);
      plVar17 = plVar14 + 9;
      *plVar17 = 0;
      plVar14[10] = 0;
      plVar14[8] = (long)plVar17;
      *(undefined4 *)(plVar14 + 7) = uVar4;
      plVar3 = (long *)(param_2 + 0x48);
      if (*(long **)(param_2 + 0x40) != plVar3) {
        plVar16 = plVar14 + 8;
        plVar11 = *(long **)(param_2 + 0x40);
        do {
          while( true ) {
            plVar5 = (long *)FUN_01252cb0(plVar16,plVar17,&local_68,auStack_70,
                                          (undefined8 *)((long)plVar11 + 0x1c));
            if (*plVar5 != 0) break;
            p_Var6 = (__tree_node_base *)FUN_017cd750(0x28);
            *(undefined8 *)(p_Var6 + 0x1c) = *(undefined8 *)((long)plVar11 + 0x1c);
            *(undefined8 *)p_Var6 = 0;
            *(undefined8 *)(p_Var6 + 8) = 0;
            *(undefined8 *)(p_Var6 + 0x10) = local_68;
            *plVar5 = (long)p_Var6;
            if (*(long *)*plVar16 != 0) {
              *plVar16 = *(long *)*plVar16;
              p_Var6 = (__tree_node_base *)*plVar5;
            }
            std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                      ((__tree_node_base *)plVar14[9],p_Var6);
            plVar14[10] = plVar14[10] + 1;
            plVar5 = (long *)plVar11[1];
            if ((long *)plVar11[1] == (long *)0x0) goto LAB_01252c08;
LAB_01252bf8:
            do {
              plVar11 = plVar5;
              plVar5 = (long *)*plVar11;
            } while ((long *)*plVar11 != (long *)0x0);
LAB_01252c34:
            if (plVar11 == plVar3) goto LAB_01252c4c;
          }
          plVar5 = (long *)plVar11[1];
          if ((long *)plVar11[1] != (long *)0x0) goto LAB_01252bf8;
LAB_01252c08:
          plVar5 = plVar11 + 2;
          plVar10 = (long *)*plVar5;
          if ((long *)*plVar10 != plVar11) {
            do {
              lVar7 = *plVar5;
              plVar5 = (long *)(lVar7 + 0x10);
              plVar11 = (long *)*plVar5;
            } while (*plVar11 != lVar7);
            goto LAB_01252c34;
          }
          plVar11 = plVar10;
        } while (plVar10 != plVar3);
      }
LAB_01252c4c:
      FUN_017e3640(plVar14 + 0xb,param_2 + 0x58);
      *(undefined4 *)(plVar14 + 0x12) = *(undefined4 *)(param_2 + 0x90);
      *plVar14 = (long)puVar2;
      plVar14 = (long *)(param_1[1] + 0x98);
      param_2 = param_2 + 0x98;
      param_1[1] = (long)plVar14;
    } while (param_2 != param_3);
  }
  return;
}


