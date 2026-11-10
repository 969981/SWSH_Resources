/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012acbe0; name: FUN_012acbe0
 */


__tree_node_base * FUN_012acbe0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_012accc0(param_1,param_2,&local_38,auStack_40,param_3);
  p_Var3 = (__tree_node_base *)*puVar1;
  if (p_Var3 == (__tree_node_base *)0x0) {
    p_Var3 = (__tree_node_base *)FUN_017cd750(0x58);
    *(undefined **)(p_Var3 + 0x20) = PTR_DAT_027167e8 + 0x10;
    p_Var3[0x28] = (__tree_node_base)0x0;
    *(__tree_node_base **)(p_Var3 + 0x38) = p_Var3 + 0x28;
    *(undefined8 *)(p_Var3 + 0x40) = 0x10;
    FUN_017d05f0(p_Var3 + 0x20,*(undefined8 *)(param_4 + 0x18),0xffffffffffffffff);
    FUN_017d30c0(p_Var3 + 0x48,param_4 + 0x28);
    *(undefined8 *)p_Var3 = 0;
    *(undefined8 *)(p_Var3 + 8) = 0;
    *(undefined8 *)(p_Var3 + 0x10) = local_38;
    *puVar1 = p_Var3;
    if (*(long *)*param_1 == 0) {
      p_Var2 = p_Var3;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var2 = (__tree_node_base *)*puVar1;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var2);
    param_1[2] = param_1[2] + 1;
  }
  return p_Var3;
}


