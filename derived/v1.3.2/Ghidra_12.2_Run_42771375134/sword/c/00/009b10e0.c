/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b10e0; name: FUN_009b10e0
 */


void FUN_009b10e0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x3b8) != 0) {
    FUN_009c3a00();
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    FUN_009b11c0();
  }
  if (*(long *)(param_1 + 0x3c0) != 0) {
    FUN_007cddc0();
  }
  if (*(long *)(param_1 + 0x88) == 0) {
    return;
  }
  if (*(char *)(*(long *)(param_1 + 0x88) + 0xa60) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x3a9) != '\0') {
    FUN_009b5250(param_1);
    return;
  }
  iVar1 = nn::oe::GetCurrentFocusState();
  if (iVar1 == 1) {
    if (*(char *)(param_1 + 0x3a8) != '\0') goto LAB_009b1188;
    uVar2 = 0;
    *(undefined1 *)(param_1 + 0x3a8) = 1;
  }
  else {
    if ((iVar1 != 3) || (*(char *)(param_1 + 0x3a8) == '\0')) goto LAB_009b1188;
    *(undefined1 *)(param_1 + 0x3a8) = 0;
    uVar2 = 1;
  }
  FUN_009b4fc0(param_1,uVar2,0);
LAB_009b1188:
  if ((*(int *)(param_1 + 0x368) == 1) && (*(int *)(param_1 + 0x370) == 1)) {
    *(undefined2 *)(param_1 + 0x3a9) = 0x101;
    *(undefined1 *)(param_1 + 0x3ab) = 0;
  }
  return;
}


