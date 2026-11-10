/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01134cf0; name: FUN_01134cf0
 */


void FUN_01134cf0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x88) == '\0') {
    return;
  }
  uVar2 = FUN_010384a0();
  if (((uVar2 & 1) == 0) &&
     (uVar2 = FUN_010386c0(*(undefined8 *)(param_1 + 0x28)), (uVar2 & 1) == 0)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x290) = 1;
  iVar1 = *(int *)(param_1 + 0x8c);
  if (iVar1 == 2) {
LAB_01134d70:
    pcVar4 = *(code **)(param_1 + 400);
    lVar3 = param_1 + 0x1b0;
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0x28));
    if (iVar1 == 1) goto LAB_01134d70;
    if (iVar1 != 0) goto LAB_01134d7c;
    pcVar4 = *(code **)(param_1 + 0x110);
    lVar3 = param_1 + 0x130;
  }
  else {
    if (iVar1 != 0) goto LAB_01134d7c;
    pcVar4 = *(code **)(param_1 + 0x90);
    lVar3 = param_1 + 0xb0;
  }
  (*pcVar4)(lVar3);
LAB_01134d7c:
  (**(code **)(param_1 + 0x210))(param_1 + 0x230);
  *(undefined1 *)(param_1 + 0x290) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  return;
}


