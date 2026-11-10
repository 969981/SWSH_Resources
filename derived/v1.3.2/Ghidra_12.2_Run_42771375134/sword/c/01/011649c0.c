/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011649c0; name: FUN_011649c0
 */


void FUN_011649c0(long param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x68);
  if (*(char *)(lVar4 + 0xf50) == '\0') {
    if (*param_2 != '\0') {
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(lVar4 + 0xf58) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(lVar4 + 0xf70) = uVar3;
      *(undefined8 *)(lVar4 + 0xf68) = uVar1;
      *(undefined8 *)(lVar4 + 0xf60) = uVar2;
      *(undefined1 *)(lVar4 + 0xf50) = 1;
    }
    return;
  }
  if (*param_2 == '\0') {
    *(undefined1 *)(lVar4 + 0xf50) = 0;
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar4 + 0xf70) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar4 + 0xf68) = uVar2;
  *(undefined8 *)(lVar4 + 0xf60) = uVar3;
  *(undefined8 *)(lVar4 + 0xf58) = uVar1;
  return;
}


