/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b17c70; name: FUN_00b17c70
 */


void FUN_00b17c70(long param_1)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0x70) == '\0') && (*(long *)(param_1 + 0x18) != 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (*(int *)(lVar1 + 0x180) < *(int *)(*(long *)(param_1 + 0x18) + 0x180)) {
      do {
        FUN_015d43f0();
        lVar1 = *(long *)(param_1 + 0x10);
      } while (*(int *)(lVar1 + 0x180) < *(int *)(*(long *)(param_1 + 0x18) + 0x180));
    }
    if (*(char *)(lVar1 + 0x188) != '\0') {
      *(undefined8 *)(param_1 + 0x10) = 0;
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      lVar1 = *(long *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
      if (*(long *)(param_1 + 0x88) == 0) {
        *(undefined8 *)(param_1 + 0x88) = 0;
        if (*(long *)(param_1 + 0x18) == 0) {
          return;
        }
        goto LAB_00b17d28;
      }
      FUN_006e2100(*(long *)(param_1 + 0x88),param_1 + 0x80);
      lVar1 = *(long *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x88) = 0;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
LAB_00b17d28:
      FUN_015d43f0();
      FUN_015d43f0(*(undefined8 *)(param_1 + 0x18));
      return;
    }
  }
  return;
}


