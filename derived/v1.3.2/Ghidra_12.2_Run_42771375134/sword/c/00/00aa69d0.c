/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa69d0; name: FUN_00aa69d0
 */


void FUN_00aa69d0(ulong param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 auStack_40 [8];
  char *local_38;
  long local_28;
  
  uVar1 = param_1;
  if ((*(short *)(param_1 + 0x24c) != 0xf9) && (*(long *)(param_1 + 0x240) != 0)) {
    uVar2 = *(undefined1 *)(param_1 + 0xb10);
    uVar1 = FUN_00aa7280(param_1,uVar2);
    if ((uVar1 & 1) != 0) goto LAB_00aa6a98;
  }
  if ((*(short *)(param_1 + 0x47c) != 0xf9) && (*(long *)(param_1 + 0x470) != 0)) {
    uVar2 = *(undefined1 *)(param_1 + 0xb10);
    uVar1 = FUN_00aa7280(uVar1,uVar2);
    if ((uVar1 & 1) != 0) goto LAB_00aa6a98;
  }
  if ((*(short *)(param_1 + 0x6ac) != 0xf9) && (*(long *)(param_1 + 0x6a0) != 0)) {
    uVar2 = *(undefined1 *)(param_1 + 0xb10);
    uVar1 = FUN_00aa7280(uVar1,uVar2);
    if ((uVar1 & 1) != 0) goto LAB_00aa6a98;
  }
  if ((*(short *)(param_1 + 0x8dc) != 0xf9) && (*(long *)(param_1 + 0x8d0) != 0)) {
    uVar2 = *(undefined1 *)(param_1 + 0xb10);
    uVar1 = FUN_00aa7280(uVar1,uVar2);
    if ((uVar1 & 1) != 0) goto LAB_00aa6a98;
  }
  if (*(short *)(param_1 + 0xb0c) == 0xf9) {
    return;
  }
  if (*(long *)(param_1 + 0xb00) == 0) {
    return;
  }
  uVar2 = *(undefined1 *)(param_1 + 0xb10);
  uVar1 = FUN_00aa7280(uVar1,uVar2);
  if ((uVar1 & 1) == 0) {
    return;
  }
LAB_00aa6a98:
  FUN_00aa73f0(auStack_40,uVar1,uVar2);
  if (*local_38 != '\0') {
    FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,auStack_40);
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


