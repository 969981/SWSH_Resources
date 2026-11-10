/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009394b0; name: FUN_009394b0
 */


void FUN_009394b0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_008f37f0(*(undefined8 *)(param_1 + 8),0);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_008f37f0(*(undefined8 *)(param_1 + 8),1);
  }
  else {
    FUN_0093cfb0(*(undefined8 *)(param_1 + 0x20),0);
    FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x3a,0);
    uVar1 = FUN_008f37f0(*(undefined8 *)(param_1 + 8),1);
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_008f37f0(*(undefined8 *)(param_1 + 8),2);
  }
  else {
    FUN_0093cfb0(*(undefined8 *)(param_1 + 0x20),1);
    FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x3a,1);
    uVar1 = FUN_008f37f0(*(undefined8 *)(param_1 + 8),2);
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_008f37f0(*(undefined8 *)(param_1 + 8),3);
  }
  else {
    FUN_0093cfb0(*(undefined8 *)(param_1 + 0x20),2);
    FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x3a,2);
    uVar1 = FUN_008f37f0(*(undefined8 *)(param_1 + 8),3);
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_008f37f0(*(undefined8 *)(param_1 + 8),4);
  }
  else {
    FUN_0093cfb0(*(undefined8 *)(param_1 + 0x20),3);
    FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x3a,3);
    uVar1 = FUN_008f37f0(*(undefined8 *)(param_1 + 8),4);
  }
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_0093cfb0(*(undefined8 *)(param_1 + 0x20),4);
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x3a,4);
  return;
}


