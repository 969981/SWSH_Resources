/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00788670; name: FUN_00788670
 */


void FUN_00788670(long param_1,long param_2,byte param_3)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 2) != '\0') {
    return;
  }
  uVar1 = FUN_019aba60(param_1 + 0x10);
  if (uVar1 == 0) {
    (**(code **)(**(long **)(param_2 + 0x18) + 0x80))
              (*(long **)(param_2 + 0x18),*(undefined8 *)(param_1 + 8),1,param_3 & 1);
  }
  else {
    lVar2 = FUN_019aba80(param_1 + 0x10);
    uVar4 = (ulong)uVar1;
    do {
      lVar3 = FUN_019b1800(*(undefined8 *)(param_2 + 0x20),lVar2);
      if (lVar3 != 0) {
        FUN_019cdd80(*(undefined8 *)(param_1 + 8),lVar3,param_3 & 1);
      }
      lVar2 = lVar2 + 0x24;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(undefined1 *)(param_1 + 2) = 1;
  *(byte *)(param_1 + 3) = param_3 & 1;
  *(long *)(param_1 + 0x38) = param_2;
  return;
}


