/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00862570; name: FUN_00862570
 */


undefined8 FUN_00862570(long *param_1,string *param_2,undefined8 *param_3)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  undefined8 uVar3;
  string local_68 [16];
  void *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  std::string::string(local_68,param_2);
  local_50 = *(undefined4 *)(param_2 + 0x18);
  local_48 = *param_3;
  uStack_40 = param_3[1];
  plVar1 = (long *)FUN_00862670(param_1,&local_38,local_68);
  if (*plVar1 == 0) {
    p_Var2 = operator_new(0x50);
    std::string::string((string *)(p_Var2 + 0x20),local_68);
    *(undefined4 *)(p_Var2 + 0x38) = local_50;
    *(undefined8 *)(p_Var2 + 0x40) = local_48;
    *(undefined8 *)(p_Var2 + 0x48) = uStack_40;
    *(undefined8 *)p_Var2 = 0;
    *(undefined8 *)(p_Var2 + 8) = 0;
    *(undefined8 *)(p_Var2 + 0x10) = local_38;
    *plVar1 = (long)p_Var2;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      p_Var2 = (__tree_node_base *)*plVar1;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var2);
    param_1[2] = param_1[2] + 1;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  return uVar3;
}


