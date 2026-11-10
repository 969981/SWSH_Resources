/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00946450; name: FUN_00946450
 */


long * FUN_00946450(long param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  
  uVar3 = (ulong)*(byte *)(param_1 + 0xb48);
  if (*(byte *)(param_1 + 0xb48) != 0) {
    uVar5 = 0;
    pcVar6 = (char *)(param_1 + 0x61);
    do {
      if ((*pcVar6 == '\0') && (*(int *)(pcVar6 + -0x51) == 1)) {
        iVar1 = FUN_00946b90(pcVar6 + -0x59);
        if (iVar1 == param_3) {
          plVar4 = (long *)(pcVar6 + -0x59);
          if (*plVar4 != 0) goto LAB_00946510;
LAB_0094656c:
          uVar3 = (ulong)*(byte *)(param_1 + 0xb48);
          if (uVar3 == 0) {
            return (long *)0x0;
          }
          uVar5 = 0;
          pcVar6 = (char *)((long)plVar4 + -param_1 + 0x58);
          do {
            pcVar6 = pcVar6 + -0x60;
            if (pcVar6 == (char *)0x0) goto LAB_00946598;
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar3);
LAB_00946594:
          uVar5 = uVar3;
LAB_00946598:
          uVar2 = (int)uVar5 + 1;
          if ((uint)uVar3 <= (uVar2 & 0xff)) {
            return (long *)0x0;
          }
          uVar5 = (ulong)uVar2 & 0xff;
          pcVar6 = (char *)(param_1 + 0x61 + uVar5 * 0x60);
          do {
            if ((*pcVar6 == '\0') && (*(int *)(pcVar6 + -0x51) == 1)) {
              iVar1 = FUN_00946b90(pcVar6 + -0x59);
              if (iVar1 == param_3) goto LAB_00946504;
              uVar3 = (ulong)*(byte *)(param_1 + 0xb48);
            }
            uVar5 = uVar5 + 1;
            pcVar6 = pcVar6 + 0x60;
            if (uVar3 <= uVar5) {
              return (long *)0x0;
            }
          } while( true );
        }
        uVar3 = (ulong)*(byte *)(param_1 + 0xb48);
      }
      uVar5 = uVar5 + 1;
      pcVar6 = pcVar6 + 0x60;
    } while (uVar5 < uVar3);
  }
  return (long *)0x0;
LAB_00946504:
  plVar4 = (long *)(pcVar6 + -0x59);
  if (*plVar4 == 0) goto LAB_0094656c;
LAB_00946510:
  uVar2 = FUN_008e0a00();
  uVar3 = FUN_008f9ff0(param_2,param_4,uVar2);
  if ((((uVar2 & 0xff) != (param_4 & 0xff)) && ((uVar3 & 1) != 0)) &&
     (uVar3 = FUN_008e1600(*plVar4), (uVar3 & 1) == 0)) {
    return plVar4;
  }
  uVar3 = (ulong)*(byte *)(param_1 + 0xb48);
  if (uVar3 == 0) {
    return (long *)0x0;
  }
  uVar5 = 0;
  pcVar6 = (char *)((long)plVar4 + -param_1 + 0x58);
  while (pcVar6 = pcVar6 + -0x60, pcVar6 != (char *)0x0) {
    uVar5 = uVar5 + 1;
    if (uVar3 <= uVar5) goto LAB_00946594;
  }
  goto LAB_00946598;
}


