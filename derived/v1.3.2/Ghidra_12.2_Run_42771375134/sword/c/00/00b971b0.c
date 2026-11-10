/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b971b0; name: FUN_00b971b0
 */


void FUN_00b971b0(long param_1,long param_2)

{
  long *plVar1;
  int local_40;
  short sStack_3c;
  undefined2 uStack_3a;
  int local_38;
  char local_34;
  char cStack_33;
  undefined2 uStack_32;
  undefined8 local_30;
  int local_28;
  
  local_40 = 0;
  sStack_3c = 0;
  local_38 = 0;
  local_34 = '\0';
  cStack_33 = '\0';
  local_30 = 0;
  local_28 = -1;
  if ((param_2 == 0) || (FUN_014ad910(&local_40), local_40 == 0)) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined2 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined2 *)(param_1 + 0x9c) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  }
  else {
    if (((((*(int *)(param_1 + 0x90) == local_40) && (*(short *)(param_1 + 0x94) == sStack_3c)) &&
         (*(int *)(param_1 + 0x98) == local_38)) &&
        ((*(char *)(param_1 + 0x9c) == local_34 && (*(char *)(param_1 + 0x9d) == cStack_33)))) &&
       ((*(int *)(param_1 + 0xa0) == (int)local_30 &&
        ((*(int *)(param_1 + 0xa4) == local_30._4_4_ && (*(int *)(param_1 + 0xa8) == local_28))))))
    {
      if (*(int *)(param_1 + 0x88) == 2) {
        return;
      }
      plVar1 = *(long **)(*(long *)(param_1 + 0x80) + 0x198);
      (**(code **)(*plVar1 + 0x70))(plVar1,1,0);
      return;
    }
    *(int *)(param_1 + 0xa8) = local_28;
    *(ulong *)(param_1 + 0x90) = CONCAT26(uStack_3a,CONCAT24(sStack_3c,local_40));
    *(ulong *)(param_1 + 0x98) = CONCAT26(uStack_32,CONCAT15(cStack_33,CONCAT14(local_34,local_38)))
    ;
    *(undefined8 *)(param_1 + 0xa0) = local_30;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x80) + 0x198);
  (**(code **)(*plVar1 + 0x70))(plVar1,0,0);
  *(undefined1 *)(param_1 + 0x8c) = 1;
  return;
}


