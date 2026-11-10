/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8ff50; name: FUN_00e8ff50
 */


void FUN_00e8ff50(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar3 = param_2[1];
  uVar1 = param_2[2];
  uVar4 = param_2[3];
  *(undefined8 *)(param_1 + 0x520) = *param_2;
  uVar6 = *(undefined4 *)(param_2 + 7);
  uVar2 = param_2[4];
  uVar5 = param_2[5];
  *(undefined8 *)(param_1 + 0x550) = param_2[6];
  *(undefined4 *)(param_1 + 0x558) = uVar6;
  *(undefined8 *)(param_1 + 0x538) = uVar4;
  *(undefined8 *)(param_1 + 0x528) = uVar3;
  *(undefined8 *)(param_1 + 0x548) = uVar5;
  *(undefined8 *)(param_1 + 0x530) = uVar1;
  *(undefined8 *)(param_1 + 0x540) = uVar2;
  *(undefined2 *)(param_1 + 0x520) = 0x101;
  *(undefined4 *)(param_1 + 0x550) = 0;
  if (*(float *)(param_1 + 0x554) <= 0.0) {
    *(undefined4 *)(param_1 + 0x554) = 0x3f800000;
  }
  *(undefined8 *)(param_1 + 0x568) = *(undefined8 *)(param_1 + 0x538);
  *(undefined8 *)(param_1 + 0x560) = *(undefined8 *)(param_1 + 0x530);
  return;
}


