/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121b910; name: FUN_0121b910
 */


void FUN_0121b910(long param_1,char *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 4) == '\0') {
    if (*param_2 == '\0') {
      return;
    }
    uVar3 = *(undefined8 *)(param_2 + 0xc);
    uVar4 = *(undefined8 *)(param_2 + 0x14);
    uVar1 = *(undefined4 *)(param_2 + 0x1c);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    *(undefined1 *)(param_1 + 4) = 1;
    uVar2 = FUN_012229b0(param_1 + 8);
  }
  else {
    if (*param_2 == '\0') goto LAB_0121b960;
    uVar3 = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)(param_2 + 0xc);
    uVar5 = *(undefined8 *)(param_2 + 0x14);
    *(char *)(param_1 + 0x20) = param_2[0x1c];
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    uVar2 = FUN_012229b0(param_1 + 8);
  }
  if (((uVar2 & 1) != 0) || (*(char *)(param_1 + 4) == '\0')) {
    return;
  }
LAB_0121b960:
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


