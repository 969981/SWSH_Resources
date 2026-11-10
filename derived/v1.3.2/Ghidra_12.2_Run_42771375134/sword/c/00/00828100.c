/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00828100; name: FUN_00828100
 */


undefined8
FUN_00828100(long *param_1,int param_2,__tree_node_base param_3,byte param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  __tree_node_base *p_Var4;
  long *plVar5;
  __tree_node_base *p_Var6;
  undefined *puVar7;
  long lVar8;
  __tree_node_base *p_Var9;
  long *plVar10;
  long *plVar11;
  
  plVar5 = param_1 + 1;
  plVar10 = (long *)*plVar5;
  if (plVar10 == (long *)0x0) {
    plVar11 = plVar5;
  }
  else {
    iVar3 = (int)plVar10[4];
    iVar1 = iVar3 - param_2;
    plVar5 = param_1 + 1;
    while( true ) {
      while (plVar11 = plVar10, param_2 < iVar3) {
        plVar10 = (long *)*plVar11;
        plVar5 = plVar11;
        if (plVar10 == (long *)0x0) {
          lVar8 = *plVar11;
          goto joined_r0x0082819c;
        }
        iVar3 = (int)plVar10[4];
        iVar1 = iVar3 - param_2;
      }
      if (iVar1 < 0 == SBORROW4(iVar3,param_2)) break;
      plVar5 = plVar11 + 1;
      plVar10 = (long *)*plVar5;
      if (plVar10 == (long *)0x0) break;
      iVar3 = (int)plVar10[4];
      iVar1 = iVar3 - param_2;
    }
  }
  lVar8 = *plVar5;
joined_r0x0082819c:
  if (lVar8 != 0) {
    p_Var9 = (__tree_node_base *)(lVar8 + 0x28);
    *(undefined8 *)(lVar8 + 0x38) = param_5;
    goto switchD_00828264_default;
  }
  p_Var4 = operator_new(0x40);
  *(int *)(p_Var4 + 0x20) = param_2;
  *(undefined8 *)(p_Var4 + 0x30) = 0;
  *(undefined8 *)(p_Var4 + 0x38) = 0;
  *(undefined8 *)(p_Var4 + 0x28) = 0;
  *(undefined8 *)p_Var4 = 0;
  *(undefined8 *)(p_Var4 + 8) = 0;
  *(long **)(p_Var4 + 0x10) = plVar11;
  *plVar5 = (long)p_Var4;
  if (*(long *)*param_1 == 0) {
    p_Var6 = p_Var4;
  }
  else {
    *param_1 = *(long *)*param_1;
    p_Var6 = (__tree_node_base *)*plVar5;
  }
  p_Var9 = p_Var4 + 0x28;
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
            ((__tree_node_base *)param_1[1],p_Var6);
  param_1[2] = param_1[2] + 1;
  *(undefined8 *)(p_Var4 + 0x38) = param_5;
  p_Var4[0x31] = (__tree_node_base)0x1;
  p_Var4[0x30] = param_3;
  uVar2 = *(undefined4 *)(PTR_DAT_02717150 + (ulong)(byte)param_3 * 4);
  p_Var4[0x33] = (__tree_node_base)(param_4 & 1);
  switch(uVar2) {
  case 1:
  case 8:
    lVar8 = param_1[3];
    if (lVar8 != 0) {
      plVar5 = (long *)FUN_0080efb0(lVar8,0,0x10);
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar10 = (long *)FUN_0080efb0(lVar8,0,8);
      plVar5[1] = (long)plVar10;
      *plVar10 = lVar8;
      puVar7 = PTR_LAB_02717158;
      goto LAB_008284ac;
    }
    break;
  case 2:
    lVar8 = param_1[3];
    if (lVar8 != 0) {
      plVar5 = (long *)FUN_0080efb0(lVar8,0,0x10);
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar10 = (long *)FUN_0080efb0(lVar8,0,8);
      plVar5[1] = (long)plVar10;
      *plVar10 = lVar8;
      puVar7 = PTR_LAB_02717160;
      goto LAB_008284ac;
    }
    break;
  case 3:
    lVar8 = param_1[3];
    if (lVar8 != 0) {
      plVar5 = (long *)FUN_0080efb0(lVar8,0,0x10);
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar10 = (long *)FUN_0080efb0(lVar8,0,8);
      plVar5[1] = (long)plVar10;
      *plVar10 = lVar8;
      puVar7 = PTR_LAB_02717168;
      goto LAB_008284ac;
    }
    break;
  case 4:
    lVar8 = param_1[3];
    if (lVar8 != 0) {
      plVar5 = (long *)FUN_0080efb0(lVar8,0,0x10);
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar10 = (long *)FUN_0080efb0(lVar8,0,8);
      plVar5[1] = (long)plVar10;
      *plVar10 = lVar8;
      puVar7 = PTR_LAB_02717170;
      goto LAB_008284ac;
    }
    break;
  case 5:
    lVar8 = param_1[3];
    if (lVar8 != 0) {
      plVar5 = (long *)FUN_0080efb0(lVar8,0,0x10);
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar10 = (long *)FUN_0080efb0(lVar8,0,8);
      plVar5[1] = (long)plVar10;
      *plVar10 = lVar8;
      puVar7 = PTR_LAB_02717180;
      goto LAB_008284ac;
    }
    break;
  case 6:
    lVar8 = param_1[3];
    if (lVar8 != 0) {
      plVar5 = (long *)FUN_0080efb0(lVar8,0,0x10);
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar10 = (long *)FUN_0080efb0(lVar8,0,8);
      plVar5[1] = (long)plVar10;
      *plVar10 = lVar8;
      puVar7 = PTR_LAB_02717178;
      goto LAB_008284ac;
    }
    break;
  case 7:
    lVar8 = param_1[3];
    if (lVar8 != 0) {
      plVar5 = (long *)FUN_0080efb0(lVar8,0,0x10);
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar10 = (long *)FUN_0080efb0(lVar8,0,8);
      plVar5[1] = (long)plVar10;
      *plVar10 = lVar8;
      puVar7 = PTR_LAB_02717188;
      goto LAB_008284ac;
    }
    break;
  case 9:
    lVar8 = param_1[3];
    if (lVar8 != 0) {
      plVar5 = (long *)FUN_0080efb0(lVar8,0,0x18);
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = lVar8;
      puVar7 = PTR_LAB_02717190;
      goto LAB_008284a8;
    }
LAB_008284bc:
    plVar5 = operator_new(0x18);
    plVar5[2] = 0;
    goto LAB_008284cc;
  case 10:
    lVar8 = param_1[3];
    if (lVar8 == 0) goto LAB_008284bc;
    plVar5 = (long *)FUN_0080efb0(lVar8,0,0x18);
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = lVar8;
    puVar7 = PTR_LAB_02717198;
LAB_008284a8:
LAB_008284ac:
    FUN_0080eeb0(lVar8,plVar5,puVar7);
    goto LAB_008284d0;
  default:
    goto switchD_00828264_default;
  }
  plVar5 = operator_new(0x10);
LAB_008284cc:
  *plVar5 = 0;
  plVar5[1] = 0;
LAB_008284d0:
  *(long **)p_Var9 = plVar5;
switchD_00828264_default:
  return *(undefined8 *)p_Var9;
}


