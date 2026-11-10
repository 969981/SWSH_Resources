/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6ec80; name: FUN_00d6ec80
 */


undefined8 FUN_00d6ec80(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    plVar1 = *(long **)(param_1 + 0x80);
    lVar2 = *(long *)(param_1 + 0x88) << 5;
    do {
      lVar3 = *plVar1;
      if (*(char *)(lVar3 + 0x38) != '\0') {
        return 0;
      }
      if (*(long *)(lVar3 + 0x48) == 0) {
        if (*(long *)(lVar3 + 0x158) == 0) {
          if (*(long *)(lVar3 + 0x268) == 0) {
            if (*(long *)(lVar3 + 0x378) == 0) {
              if (*(long *)(lVar3 + 0x488) == 0) {
                if ((*(long *)(lVar3 + 0x598) != 0) &&
                   (*(char *)(*(long *)(lVar3 + 0x598) + 0x170) == '\0')) {
                  return 0;
                }
              }
              else if (*(char *)(*(long *)(lVar3 + 0x488) + 0x170) == '\0') {
                return 0;
              }
            }
            else if (*(char *)(*(long *)(lVar3 + 0x378) + 0x170) == '\0') {
              return 0;
            }
          }
          else if (*(char *)(*(long *)(lVar3 + 0x268) + 0x170) == '\0') {
            return 0;
          }
        }
        else if (*(char *)(*(long *)(lVar3 + 0x158) + 0x170) == '\0') {
          return 0;
        }
      }
      else if (*(char *)(*(long *)(lVar3 + 0x48) + 0x170) == '\0') {
        return 0;
      }
      plVar1 = plVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  return 1;
}


