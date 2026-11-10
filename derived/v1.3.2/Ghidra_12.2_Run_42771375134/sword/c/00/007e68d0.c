/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e68d0; name: FUN_007e68d0
 */


void FUN_007e68d0(char *param_1,char *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte local_68 [16];
  void *local_58;
  
  if (*param_1 != '\0') {
    lVar2 = *(long *)(param_1 + 0x48);
    if (*(long *)(param_1 + 0x50) != lVar2) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        FUN_007f7ff0(local_68,param_1,lVar2 + lVar3);
        pvVar1 = (void *)((ulong)local_68 | 1);
        if ((local_68[0] & 1) != 0) {
          pvVar1 = local_58;
        }
        std::string::append(param_2,(ulong)pvVar1);
        if ((local_68[0] & 1) != 0) {
          operator_delete(local_58);
        }
        std::string::append(param_2);
        lVar2 = *(long *)(param_1 + 0x48);
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x18;
      } while (uVar4 < (ulong)((*(long *)(param_1 + 0x50) - lVar2 >> 3) * -0x5555555555555555));
    }
    if ((param_1[0x18] & 1U) == 0) {
      if ((byte)param_1[0x18] >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(param_1 + 0x20) == 0) {
      return;
    }
    FUN_007f7ff0(local_68,param_1);
    pvVar1 = (void *)((ulong)local_68 | 1);
    if ((local_68[0] & 1) != 0) {
      pvVar1 = local_58;
    }
    std::string::append(param_2,(ulong)pvVar1);
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
  }
  return;
}


