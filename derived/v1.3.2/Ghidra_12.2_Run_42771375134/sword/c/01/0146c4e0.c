/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0146c4e0; name: FUN_0146c4e0
 */


void FUN_0146c4e0(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)(param_1 + 0x1f8);
  uVar4 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x1f8) == -0x340d631b7bddd9bb || *(long *)(param_1 + 0x1f8) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0xa8);
  }
  else {
    FUN_0167bdb0(0,uVar4,puVar1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar6 = puVar1;
  }
  FUN_0167bb70(uVar4,puVar6);
  uVar5 = FUN_0087d610(*(undefined8 *)(param_1 + 0x18),2);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_0087b540(*(undefined8 *)(param_1 + 0x18));
    if ((uVar5 & 1) == 0) {
      uVar2 = FUN_0087afd0(*(undefined8 *)(param_1 + 0x18));
      uVar3 = FUN_0087ac70(*(undefined8 *)(param_1 + 0x18));
      uVar2 = FUN_016ac470(uVar2,uVar3);
      switch(uVar2) {
      case 0:
        FUN_0167ba30(*(undefined8 *)(param_1 + 8),param_1 + 200);
        uVar7 = *(undefined8 *)(param_1 + 0xa8);
        break;
      case 1:
        FUN_0167ba30(*(undefined8 *)(param_1 + 8),param_1 + 200);
        uVar7 = *(undefined8 *)(param_1 + 0xb0);
        break;
      case 2:
        FUN_0167ba30(*(undefined8 *)(param_1 + 8),param_1 + 200);
        uVar7 = *(undefined8 *)(param_1 + 0xb8);
        break;
      case 3:
        uVar4 = *(undefined8 *)(param_1 + 8);
        param_1 = param_1 + 0xc0;
        goto LAB_0146c564;
      default:
        goto switchD_0146c5d8_default;
      }
    }
    else {
      FUN_0167ba30(*(undefined8 *)(param_1 + 8),param_1 + 200);
      uVar7 = *(undefined8 *)(param_1 + 0xd0);
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    param_1 = param_1 + 200;
LAB_0146c564:
    uVar7 = 0xcbf29ce484222645;
    FUN_0167ba30(uVar4,param_1);
  }
  *puVar1 = uVar7;
switchD_0146c5d8_default:
  return;
}


