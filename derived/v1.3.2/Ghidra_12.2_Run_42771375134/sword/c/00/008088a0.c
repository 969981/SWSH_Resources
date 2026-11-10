/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008088a0; name: FUN_008088a0
 */


undefined8 FUN_008088a0(long param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  ulong local_38 [2];
  void *local_28;
  
  local_38[1] = 0;
  local_28 = (void *)0x0;
  local_38[0] = 0x3c02;
  bVar3 = *(byte *)(param_1 + 0x30);
  uVar4 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 0x38);
  }
  if (uVar4 == 1) {
    if ((bVar3 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '<') {
        lVar5 = -(ulong)(bVar3 >> 1);
        pcVar6 = (char *)(param_1 + 0x32);
        pcVar7 = (char *)((ulong)local_38 | 2);
        do {
          lVar5 = lVar5 + 1;
          if (lVar5 == 0) goto LAB_00808938;
          cVar1 = *pcVar7;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 == cVar1);
      }
    }
    else if (**(char **)(param_1 + 0x40) == '<') {
LAB_00808938:
      FUN_00842de0(param_1 + 0x28);
      goto LAB_00808988;
    }
  }
  local_28 = (void *)0x0;
  local_38[1] = 0;
  local_38[0] = 0x7b02;
  uVar4 = FUN_00806c70(param_1,local_38);
  if ((local_38[0] & 1) != 0) {
    operator_delete(local_28);
  }
  if ((uVar4 & 1) == 0) {
    return 0;
  }
LAB_00808988:
  std::string::assign(param_2);
  return 1;
}


