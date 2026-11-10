/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e72850; name: FUN_00e72850
 */


void FUN_00e72850(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  
  uVar4 = (**(code **)(*(long *)param_1[0xf] + 0x210))();
  uVar2 = FUN_015772a0(param_1[0xf] + 0x50);
  fVar7 = (float)uVar4;
  if ((uVar2 & 1) == 0) {
    if (fVar7 < 1.0) goto LAB_00e728b4;
  }
  else {
    uVar2 = (**(code **)(*(long *)param_1[0xf] + 0x218))();
    if (((fVar7 < 1.0) && (0.0 < fVar7)) && ((uVar2 & 1) != 0)) {
LAB_00e728b4:
      auVar5 = FUN_0075e7d0(uVar4,param_1 + 0x54,param_1 + 0x56);
      goto LAB_00e72928;
    }
  }
  auVar5 = *(undefined1 (*) [16])(param_1 + 0x56);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  (**(code **)(*param_1 + 0x90))(param_1);
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar1 = DAT_01d4c5c0;
  *(undefined1 *)((long)param_1 + 0x6a) = 0;
  FUN_00e746a0(uVar1,param_1);
  auVar6 = (**(code **)(*param_1 + 0xa0))((int)param_1[0x13],param_1);
  *(undefined1 (*) [16])(param_1 + 0x16) = auVar6;
LAB_00e72928:
  lVar3 = param_1[0xf];
  *(undefined1 *)(lVar3 + 0xc0) = 1;
  *(undefined1 (*) [16])(lVar3 + 0xa0) = auVar5;
  return;
}


