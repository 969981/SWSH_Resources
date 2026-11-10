/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00946280; name: FUN_00946280
 */


/* WARNING: Removing unreachable block (ram,0x009463c8) */
/* WARNING: Removing unreachable block (ram,0x0094630c) */
/* WARNING: Removing unreachable block (ram,0x00946318) */
/* WARNING: Removing unreachable block (ram,0x00946320) */
/* WARNING: Removing unreachable block (ram,0x0094637c) */
/* WARNING: Removing unreachable block (ram,0x00946384) */
/* WARNING: Removing unreachable block (ram,0x00946370) */
/* WARNING: Removing unreachable block (ram,0x009463d4) */
/* WARNING: Removing unreachable block (ram,0x009463e0) */

long FUN_00946280(long param_1,char param_2,uint param_3,byte param_4)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*(byte *)(param_1 + 0xb48);
  if (*(byte *)(param_1 + 0xb48) != 0) {
    uVar4 = 0;
    if ((param_3 & 1) == 0) {
      if ((param_4 & 1) == 0) {
        lVar3 = param_1 + 0x61;
        do {
          if (*(long *)(lVar3 + -0x59) != 0) {
            cVar1 = FUN_008e0a00();
            if (cVar1 == param_2) goto LAB_00946434;
            uVar2 = (ulong)*(byte *)(param_1 + 0xb48);
          }
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0x60;
        } while (uVar4 < uVar2);
      }
      else {
        lVar3 = param_1 + 0x61;
        do {
          if ((*(int *)(lVar3 + -0x51) != 0) && (*(long *)(lVar3 + -0x59) != 0)) {
            cVar1 = FUN_008e0a00();
            if (cVar1 == param_2) {
LAB_00946434:
              return lVar3 + -0x59;
            }
            uVar2 = (ulong)*(byte *)(param_1 + 0xb48);
          }
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0x60;
        } while (uVar4 < uVar2);
      }
    }
    else {
      lVar3 = param_1 + 0x61;
      do {
        if (((*(int *)(lVar3 + -0x51) != 6) && ((*(int *)(lVar3 + -0x51) == 0 & param_4 & 1) == 0))
           && (*(long *)(lVar3 + -0x59) != 0)) {
          cVar1 = FUN_008e0a00();
          if (cVar1 == param_2) {
            return lVar3 + -0x59;
          }
          uVar2 = (ulong)*(byte *)(param_1 + 0xb48);
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x60;
      } while (uVar4 < uVar2);
    }
  }
  return 0;
}


