/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00946170; name: FUN_00946170
 */


void FUN_00946170(long param_1,char param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  uVar2 = (ulong)*(byte *)(param_1 + 0xb48);
  if (*(byte *)(param_1 + 0xb48) != 0) {
    uVar5 = 0;
    plVar4 = (long *)(param_1 + 8);
    do {
      if (((int)plVar4[1] != 6) && (*plVar4 != 0)) {
        cVar1 = FUN_008e0a00();
        if (cVar1 == param_2) {
LAB_009461ec:
          *(undefined1 *)((long)plVar4 + 0x59) = 1;
          uVar5 = (ulong)*(byte *)(param_1 + 0xb48);
          uVar2 = 0;
          lVar3 = (long)plVar4 + (0x58 - param_1);
          do {
            if (uVar5 <= uVar2) break;
            uVar2 = uVar2 + 1;
            lVar3 = lVar3 + -0x60;
          } while (lVar3 != 0);
          if ((uint)*(byte *)(param_1 + 0xb48) <= ((uint)uVar2 & 0xff)) {
            return;
          }
          uVar2 = (ulong)((uint)uVar2 & 0xff);
          plVar4 = (long *)(param_1 + 8 + uVar2 * 0x60);
          do {
            if (((int)plVar4[1] != 6) && (*plVar4 != 0)) {
              cVar1 = FUN_008e0a00();
              if (cVar1 == param_2) goto LAB_009461ec;
              uVar5 = (ulong)*(byte *)(param_1 + 0xb48);
            }
            uVar2 = uVar2 + 1;
            plVar4 = plVar4 + 0xc;
            if (uVar5 <= uVar2) {
              return;
            }
          } while( true );
        }
        uVar2 = (ulong)*(byte *)(param_1 + 0xb48);
      }
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 0xc;
    } while (uVar5 < uVar2);
  }
  return;
}


