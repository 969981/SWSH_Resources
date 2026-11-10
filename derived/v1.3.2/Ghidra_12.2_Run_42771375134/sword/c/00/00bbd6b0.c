/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbd6b0; name: FUN_00bbd6b0
 */


void FUN_00bbd6b0(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  
  if (param_2 != 0) {
    if (param_2 == 3) {
      if (*(int *)(param_1 + 0x5cc) == 0) {
        uVar2 = FUN_00bb48a0(param_1);
        local_28 = FUN_016b8190();
        uVar2 = FUN_016b7950(uVar2,&local_28);
        iVar1 = FUN_00bb5fc0(uVar2,uVar2);
        if (iVar1 != -1) {
          if (*(char *)(param_1 + 0x694) == '\0') {
            FUN_00bbdae0(param_1,iVar1);
            return;
          }
          FUN_00bbd830(param_1);
          return;
        }
        if (*(long *)(param_1 + 0x4c0) != 0) {
          FUN_016d2080();
        }
      }
    }
    else if (param_2 == 1) {
      if (*(char *)(param_1 + 0x694) == '\0') {
        *(undefined4 *)(param_1 + 0x608) = 10;
        return;
      }
      FUN_00bbd830(param_1,*(undefined1 *)(param_1 + 0x691));
      return;
    }
    return;
  }
  uVar2 = FUN_00bb48a0(param_1);
  local_30 = FUN_016b8190();
  local_28 = FUN_016b7950(uVar2,&local_30);
  if (((*(char *)(param_1 + 0x620) == '\0') || (*(int *)(param_1 + 0x618) == 1)) ||
     (iVar1 = FUN_00bb5fc0(local_28,local_28), iVar1 == -1)) {
    FUN_00ffda40(param_1 + 0x100,&local_28);
    FUN_016b3850();
    return;
  }
  FUN_00bbd930(param_1,iVar1);
  return;
}


