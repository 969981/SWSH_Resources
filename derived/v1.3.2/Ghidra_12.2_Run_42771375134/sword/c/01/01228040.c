/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01228040; name: FUN_01228040
 */


void FUN_01228040(long *param_1)

{
  *param_1 = (long)(PTR_DAT_027260d0 + 0x10);
  if (*(char *)((long)param_1 + 0x9c) != '\0') {
    if (*(char *)((long)param_1 + 0xa4) != '\0') {
      *(undefined1 *)((long)param_1 + 0xa4) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x9c) = 0;
  }
  if ((char)param_1[0x11] != '\0') {
    if ((char)param_1[0x12] != '\0') {
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)((long)param_1 + 0x74) != '\0') {
    if (*(char *)((long)param_1 + 0x7c) != '\0') {
      *(undefined1 *)((long)param_1 + 0x7c) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x74) = 0;
  }
  if ((char)param_1[0xc] != '\0') {
    if ((char)param_1[0xd] != '\0') {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (*(char *)((long)param_1 + 0x4c) != '\0') {
    if (*(char *)((long)param_1 + 0x54) != '\0') {
      *(undefined1 *)((long)param_1 + 0x54) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x4c) = 0;
  }
  if ((char)param_1[7] != '\0') {
    if ((char)param_1[8] != '\0') {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  return;
}


