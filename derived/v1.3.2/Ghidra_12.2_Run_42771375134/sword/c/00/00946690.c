/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00946690; name: FUN_00946690
 */


undefined8 FUN_00946690(long param_1,char param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  
  uVar3 = (ulong)*(byte *)(param_1 + 0xb48);
  if (*(byte *)(param_1 + 0xb48) != 0) {
    uVar4 = 0;
    pcVar5 = (char *)(param_1 + 0x61);
    if (param_3 == 0) {
      do {
        if (((*(int *)(pcVar5 + -0x51) != 6) && (*pcVar5 == '\0')) &&
           (*(long *)(pcVar5 + -0x59) != 0)) {
          cVar1 = FUN_008e0a00();
          if (cVar1 == param_2) goto LAB_00946774;
          uVar3 = (ulong)*(byte *)(param_1 + 0xb48);
        }
        uVar4 = uVar4 + 1;
        pcVar5 = pcVar5 + 0x60;
      } while (uVar4 < uVar3);
    }
    else {
      do {
        if (((*(int *)(pcVar5 + -0x51) != 6) && (*pcVar5 == '\0')) &&
           ((*(int *)(pcVar5 + -0x51) == 1 &&
            ((*(int *)(pcVar5 + -0x49) == param_3 && (*(long *)(pcVar5 + -0x59) != 0)))))) {
          cVar1 = FUN_008e0a00();
          if (cVar1 == param_2) {
LAB_00946774:
            if (*pcVar5 == '\0') {
              param_1 = param_1 + uVar4 * 0x60;
              uVar2 = FUN_00946d90(*(undefined4 *)(param_1 + 0x5c),3);
              *(undefined4 *)(param_1 + 0x5c) = uVar2;
              return 1;
            }
            return 0;
          }
          uVar3 = (ulong)*(byte *)(param_1 + 0xb48);
        }
        uVar4 = uVar4 + 1;
        pcVar5 = pcVar5 + 0x60;
      } while (uVar4 < uVar3);
    }
  }
  return 0;
}


