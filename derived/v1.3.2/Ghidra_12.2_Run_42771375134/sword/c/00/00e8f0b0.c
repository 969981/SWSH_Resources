/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8f0b0; name: FUN_00e8f0b0
 */


void FUN_00e8f0b0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x3f0) == 2) {
    uVar1 = *(undefined8 *)(param_2 + 0x488);
    param_1[3] = *(undefined8 *)(param_2 + 0x498);
    param_1[1] = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x4a8);
    param_1[7] = *(undefined8 *)(param_2 + 0x4b8);
    param_1[5] = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x480);
    param_1[2] = *(undefined8 *)(param_2 + 0x490);
    *param_1 = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x4a0);
    param_1[6] = *(undefined8 *)(param_2 + 0x4b0);
    param_1[4] = uVar1;
    return;
  }
  if (*(int *)(param_2 + 0x3f0) == 1) {
    uVar1 = *(undefined8 *)(param_2 + 0x448);
    param_1[3] = *(undefined8 *)(param_2 + 0x458);
    param_1[1] = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x468);
    param_1[7] = *(undefined8 *)(param_2 + 0x478);
    param_1[5] = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x440);
    param_1[2] = *(undefined8 *)(param_2 + 0x450);
    *param_1 = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x460);
    param_1[6] = *(undefined8 *)(param_2 + 0x470);
    param_1[4] = uVar1;
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x408);
  param_1[3] = *(undefined8 *)(param_2 + 0x418);
  param_1[1] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x428);
  param_1[7] = *(undefined8 *)(param_2 + 0x438);
  param_1[5] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x400);
  param_1[2] = *(undefined8 *)(param_2 + 0x410);
  *param_1 = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x420);
  param_1[6] = *(undefined8 *)(param_2 + 0x430);
  param_1[4] = uVar1;
  return;
}


