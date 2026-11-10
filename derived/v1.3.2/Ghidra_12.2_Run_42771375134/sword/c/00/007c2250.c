/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c2250; name: FUN_007c2250
 */


void FUN_007c2250(long *param_1,long *param_2)

{
  void *__src;
  long *plVar1;
  undefined8 local_40;
  undefined2 uStack_38;
  undefined2 uStack_36;
  
  plVar1 = &local_40;
  *param_1 = (long)(PTR_DAT_02716a48 + 0x10);
  *(undefined1 *)(param_1 + 0x2e) = 0;
  __src = (void *)(**(code **)(*param_2 + 0x10))(param_2);
  memcpy(param_1 + 1,__src,0x168);
  (**(code **)(*param_2 + 0x18))(&local_40,param_2);
  if ((char)param_1[0x2e] == '\0') {
    if ((char)local_40 == '\0') {
      return;
    }
    *(ulong *)((long)param_1 + 0x174) = CONCAT26(uStack_36,CONCAT24(uStack_38,local_40._4_4_));
    *(undefined1 *)(param_1 + 0x2e) = 1;
  }
  else if ((char)local_40 == '\0') {
    plVar1 = param_1 + 0x2e;
  }
  else {
    *(undefined2 *)(param_1 + 0x2f) = uStack_38;
    *(undefined4 *)((long)param_1 + 0x174) = local_40._4_4_;
    plVar1 = &local_40;
  }
  *(undefined1 *)plVar1 = 0;
  return;
}


