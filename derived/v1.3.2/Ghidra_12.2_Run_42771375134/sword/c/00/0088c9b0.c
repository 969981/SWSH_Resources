/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0088c9b0; name: FUN_0088c9b0
 */


void FUN_0088c9b0(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,int param_5,
                 undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  __tree_node_base *p_Var4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  long *plVar11;
  uint *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  float fVar15;
  double dVar16;
  
  if (*(int *)(param_1 + 0xc) < 1) {
    uVar2 = 0;
    if (*(uint *)(param_1 + 8) != 0) {
      uVar2 = *(uint *)(param_1 + 0x10) / *(uint *)(param_1 + 8);
    }
    fVar15 = *(float *)(param_1 + 4);
    if (((*PTR_DAT_02717488 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_02717488), iVar3 != 0)) {
      *(undefined4 *)PTR_DAT_02717490 = 1;
      __cxa_guard_release(PTR_DAT_02717488);
    }
    dVar16 = (double)fVar15;
    uVar10 = *(uint *)PTR_DAT_02717490 / 0xadc8;
    uVar1 = (*(uint *)PTR_DAT_02717490 % 0xadc8) * 0xbc8f;
    iVar3 = 0x7fffffff;
    if (uVar10 * 0xd47 <= uVar1) {
      iVar3 = 0;
    }
    uVar1 = iVar3 + uVar1 + uVar10 * -0xd47;
    uVar10 = (uVar1 % 0xadc8) * 0xbc8f;
    iVar3 = 0x7fffffff;
    if ((uVar1 / 0xadc8) * 0xd47 <= uVar10) {
      iVar3 = 0;
    }
    iVar3 = iVar3 + uVar10 + (uVar1 / 0xadc8) * -0xd47;
    *(int *)PTR_DAT_02717490 = iVar3;
    *(int *)(param_1 + 0xc) =
         (int)((float)uVar2 +
              (float)uVar2 *
              (float)(dVar16 + ((double)(uVar1 - 1) + DAT_01cd52a0 * (double)(iVar3 - 1)) *
                               ((double)-fVar15 - dVar16) * DAT_01cd5010));
    puVar13 = (undefined8 *)**(undefined8 **)(param_1 + 0x18);
    if (puVar13 != (undefined8 *)(*(undefined8 **)(param_1 + 0x18))[1]) {
LAB_0088cb00:
      puVar12 = (uint *)*puVar13;
      FUN_0088ba20(puVar12,param_2,param_3,param_4,param_6);
      if (((char)puVar12[0x15] != '\0') && (puVar12[0x14] < *puVar12)) {
        plVar11 = *(long **)(param_1 + 0x20);
        plVar14 = plVar11 + 1;
        plVar5 = (long *)*plVar14;
        if (plVar5 != (long *)0x0) {
          plVar8 = plVar14;
          plVar9 = plVar5;
          do {
            if ((uint *)plVar9[4] >= puVar12) {
              plVar8 = plVar9;
            }
            plVar9 = (long *)plVar9[(uint *)plVar9[4] < puVar12];
          } while (plVar9 != (long *)0x0);
          if ((plVar8 != plVar14) && ((uint *)plVar8[4] <= puVar12)) goto LAB_0088caec;
          if (plVar5 != (long *)0x0) {
            plVar14 = plVar11 + 1;
            puVar7 = (uint *)plVar5[4];
            do {
              if (puVar12 < puVar7) {
                plVar8 = (long *)*plVar5;
                plVar14 = plVar5;
                if (plVar8 == (long *)0x0) {
                  lVar6 = *plVar5;
                  goto joined_r0x0088cbcc;
                }
              }
              else {
                if (puVar12 <= puVar7) goto LAB_0088cbc4;
                plVar14 = plVar5 + 1;
                plVar8 = (long *)*plVar14;
                if (plVar8 == (long *)0x0) goto LAB_0088cbc4;
              }
              puVar7 = (uint *)plVar8[4];
              plVar5 = plVar8;
            } while( true );
          }
        }
        plVar5 = plVar14;
        if (*plVar14 != 0) goto LAB_0088caec;
        goto LAB_0088cbe0;
      }
      goto LAB_0088caec;
    }
  }
  else {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - param_5;
  }
  return;
LAB_0088cbc4:
  lVar6 = *plVar14;
joined_r0x0088cbcc:
  if (lVar6 == 0) {
LAB_0088cbe0:
    p_Var4 = (__tree_node_base *)
             (**(code **)(**(long **)PTR_DAT_027174a8 + 0x10))(*(long **)PTR_DAT_027174a8,0x28);
    *(uint **)(p_Var4 + 0x20) = puVar12;
    *(undefined8 *)p_Var4 = 0;
    *(undefined8 *)(p_Var4 + 8) = 0;
    *(long **)(p_Var4 + 0x10) = plVar5;
    *plVar14 = (long)p_Var4;
    if (*(long *)*plVar11 != 0) {
      *plVar11 = *(long *)*plVar11;
      p_Var4 = (__tree_node_base *)*plVar14;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)plVar11[1],p_Var4);
    plVar11[2] = plVar11[2] + 1;
  }
LAB_0088caec:
  puVar13 = puVar13 + 1;
  if (puVar13 == *(undefined8 **)(*(long *)(param_1 + 0x18) + 8)) {
    return;
  }
  goto LAB_0088cb00;
}


