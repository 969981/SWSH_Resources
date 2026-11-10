/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00906ec0; name: FUN_00906ec0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00906ec0(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar4 = FUN_008f37f0(*(undefined8 *)(param_1 + 0x58),0);
  if (((uVar4 & 1) == 0) || (*(short *)(param_1 + 600) != 0)) {
    uVar6 = 0;
    uVar3 = 0;
    uVar4 = FUN_008f37f0(*(undefined8 *)(param_1 + 0x58),1);
  }
  else {
    uVar3 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6),0);
    uVar6 = uVar3 ^ 1;
    uVar4 = FUN_008f37f0(*(undefined8 *)(param_1 + 0x58),1);
  }
  if (((uVar4 & 1) == 0) || (*(short *)(param_1 + 0x25a) != 0)) {
    uVar4 = FUN_008f37f0(*(undefined8 *)(param_1 + 0x58),2);
  }
  else {
    uVar2 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6),1);
    uVar6 = uVar6 | uVar2 ^ 1;
    uVar3 = uVar3 | uVar2;
    uVar4 = FUN_008f37f0(*(undefined8 *)(param_1 + 0x58),2);
  }
  if (((uVar4 & 1) == 0) || (*(short *)(param_1 + 0x25c) != 0)) {
    uVar4 = FUN_008f37f0(*(undefined8 *)(param_1 + 0x58),3);
  }
  else {
    uVar2 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6),2);
    uVar6 = uVar6 | uVar2 ^ 1;
    uVar3 = uVar3 | uVar2;
    uVar4 = FUN_008f37f0(*(undefined8 *)(param_1 + 0x58),3);
  }
  if (((uVar4 & 1) == 0) || (*(short *)(param_1 + 0x25e) != 0)) {
    uVar4 = FUN_008f37f0(*(undefined8 *)(param_1 + 0x58),4);
  }
  else {
    uVar2 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6),3);
    uVar6 = uVar6 | uVar2 ^ 1;
    uVar3 = uVar3 | uVar2;
    uVar4 = FUN_008f37f0(*(undefined8 *)(param_1 + 0x58),4);
  }
  if (((uVar4 & 1) != 0) && (*(short *)(param_1 + 0x260) == 0)) {
    uVar2 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6),4);
    uVar6 = uVar6 | uVar2 ^ 1;
    uVar3 = uVar3 | uVar2;
  }
  uVar5 = 0xcd;
  if ((uVar3 & 1) != 0) {
    uVar5 = 0xce;
  }
  uVar1 = 0xcc;
  if ((uVar6 & uVar3 & 1) == 0) {
    uVar1 = uVar5;
  }
  *param_2 = uVar1;
  *param_3 = 1;
  return;
}


