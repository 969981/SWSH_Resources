/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00911d10; name: FUN_00911d10
 */


void FUN_00911d10(long param_1,undefined4 param_2,byte param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_2784;
  undefined8 local_2780;
  undefined1 auStack_2778 [10024];
  
  local_2780 = 0;
  local_2784 = 0;
  FUN_009188d0(*(undefined8 *)(param_1 + 0x5e8),&local_2780,&local_2784,param_2,
               *(undefined2 *)(param_1 + 0x78));
  uVar5 = local_2780;
  uVar4 = local_2784;
  uVar2 = *(undefined2 *)(param_1 + 0x78);
  uVar1 = *(undefined1 *)(param_1 + 0x54);
  if (param_3 == 5) {
    FUN_00911e60(param_1,uVar2,uVar1,param_2,local_2780,local_2784);
    sVar3 = *(short *)(param_1 + 0x78);
    uVar4 = local_2784;
    uVar5 = local_2780;
  }
  else {
    lVar7 = *(long *)(param_1 + (ulong)param_3 * 0x18 + 0x80);
    if (lVar7 != 0) {
      FUN_009c50c0(lVar7);
      FUN_009c4f20(lVar7,uVar2,uVar1,param_2,uVar5,uVar4);
    }
    sVar3 = *(short *)(param_1 + 0x78);
    uVar4 = local_2784;
    uVar5 = local_2780;
  }
  if (sVar3 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x54);
    local_2784 = uVar4;
    local_2780 = uVar5;
    uVar6 = FUN_00914be0(*(undefined8 *)(param_1 + 0x70),sVar3);
    if ((uVar6 & 1) == 0) {
      FUN_009150e0(auStack_2778);
      FUN_009151b0(auStack_2778,sVar3,uVar1,param_2,uVar5,uVar4);
      FUN_00914b00(*(undefined8 *)(param_1 + 0x70),auStack_2778);
      FUN_00915160(auStack_2778);
    }
  }
  *(short *)(param_1 + 0x78) = *(short *)(param_1 + 0x78) + 1;
  return;
}


