/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ca460; name: FUN_009ca460
 */


ulong FUN_009ca460(long param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = FUN_009c5470(*(undefined8 *)(param_1 + 0x20));
  switch(uVar2) {
  case 1:
    uVar3 = FUN_008fb540(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x28),1,1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined1 *)(param_1 + 0x28);
    uVar7 = 3;
    break;
  case 2:
    uVar3 = FUN_008fb540(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x28),1,2);
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined1 *)(param_1 + 0x28);
    uVar7 = 3;
    goto LAB_009ca54c;
  case 3:
    uVar3 = FUN_008fb540(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x28),2,1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined1 *)(param_1 + 0x28);
    uVar7 = 4;
    break;
  case 4:
    uVar3 = FUN_008fb540(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x28),2,2);
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined1 *)(param_1 + 0x28);
    uVar7 = 4;
LAB_009ca54c:
    uVar8 = 2;
    goto LAB_009ca550;
  case 5:
    uVar6 = FUN_008fb540(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x28),5,1);
    return uVar6;
  case 6:
    uVar6 = FUN_008fb540(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x28),5,2);
    return uVar6;
  default:
    return 0;
  }
  uVar8 = 1;
LAB_009ca550:
  uVar4 = FUN_008fb540(uVar5,uVar1,uVar7,uVar8);
  return (ulong)((uVar3 | uVar4) & 1);
}


