/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013aa70; name: FUN_0013aa70
 */


void FUN_0013aa70(uint *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = (ulong)*param_1;
  if (*param_1 != 0) {
    plVar3 = (long *)(*(long *)(param_1 + 4) + 0x20);
    do {
      while (lVar1 = *plVar3, lVar1 != 0) {
        if (*(int *)(lVar1 + 0xc0) == 0) {
          if (*(char *)(lVar1 + 0x118) != '\0') goto LAB_0013aab4;
          break;
        }
        if (*(char *)(lVar1 + 0x118) != '\0') {
LAB_0013aab4:
          FUN_00136d30(lVar1);
          *(undefined4 *)(lVar1 + 0xc0) = *(undefined4 *)(lVar1 + 0x94);
          *(undefined4 *)(lVar1 + 0xc4) = 0;
          *(undefined1 *)(lVar1 + 0x119) = 1;
        }
        FUN_00137e10(lVar1,lVar1 + 0x120);
        if ((*(int *)(lVar1 + 0xc0) != 0) && (*(int *)(lVar1 + 0x8c) != 0)) {
          *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0xc0);
          *(int *)(lVar1 + 0x44) = *(int *)(lVar1 + 0x8c);
          *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(lVar1 + 0x80);
          *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(lVar1 + 0x3338);
          *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(lVar1 + 0x98);
          *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(lVar1 + 0xa8);
          *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(lVar1 + 0xf0);
          *(undefined1 *)(lVar1 + 0x68) = 1;
          break;
        }
        *(undefined1 *)(lVar1 + 0x68) = 0;
        plVar3 = plVar3 + 7;
        uVar2 = uVar2 - 1;
        if (uVar2 == 0) {
          return;
        }
      }
      plVar3 = plVar3 + 7;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}


