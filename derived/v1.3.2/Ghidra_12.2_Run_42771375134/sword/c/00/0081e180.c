/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0081e180; name: FUN_0081e180
 */


void FUN_0081e180(long param_1)

{
  long *plVar1;
  long in_x9;
  int iVar2;
  int local_80 [2];
  long *local_78;
  long lStack_70;
  ulong local_68;
  long lStack_60;
  long *local_58;
  int local_50 [2];
  long *local_48;
  long lStack_40;
  ulong local_38;
  long lStack_30;
  long *local_28;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    in_x9 = *(long *)(param_1 + 0x10);
    local_68 = *(ulong *)(in_x9 + 0x18);
    if (local_68 < *(ulong *)(in_x9 + 8)) {
      do {
        local_78 = *(long **)(*(long *)(in_x9 + 0x20) + local_68 * 8);
        if (local_78 != (long *)0x0) {
          if (local_78 == *(long **)(*(long *)(in_x9 + 0x20) + (local_68 ^ 1) * 8)) {
            lStack_60 = *local_78;
            local_78 = *(long **)(lStack_60 + 0x20);
            local_58 = (long *)0x0;
            iVar2 = 2;
            local_80[0] = 2;
          }
          else {
            local_58 = (long *)0x0;
            lStack_60 = 0;
            iVar2 = 2;
            local_80[0] = 2;
          }
          goto LAB_0081e240;
        }
        local_68 = local_68 + 1;
      } while (local_68 < *(ulong *)(in_x9 + 8));
    }
    local_58 = (long *)0x0;
    lStack_60 = 0;
    local_78 = (long *)0x0;
    iVar2 = 2;
    local_80[0] = 2;
  }
  else {
    iVar2 = 1;
    local_68 = *(ulong *)(param_1 + 0x10);
    local_78 = (long *)0x0;
    lStack_60 = 0;
    local_58 = *(long **)(*(ulong *)(param_1 + 0x10) + 0x18);
    local_80[0] = 1;
  }
LAB_0081e240:
  while (((plVar1 = local_58, iVar2 == 1 || (plVar1 = local_78, iVar2 != 0)) &&
         (plVar1 != (long *)0x0))) {
    do {
      lStack_70 = in_x9;
      FUN_0081e990(local_50,param_1,local_80);
      local_68 = local_38;
      in_x9 = lStack_40;
      local_78 = local_48;
      lStack_60 = lStack_30;
      local_58 = local_28;
      local_80[0] = local_50[0];
    } while (local_50[0] != iVar2);
  }
  return;
}


