/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ddaf0; name: FUN_004ddaf0
 */


void FUN_004ddaf0(long *param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    uVar8 = 0;
    lVar5 = param_1[3];
    uVar2 = *(ushort *)(lVar5 + 0x16c);
  }
  else {
    uVar8 = (**(code **)(*param_1 + 0x68))(param_1);
    lVar5 = param_1[3];
    uVar2 = *(ushort *)(lVar5 + 0x16c);
  }
  plVar3 = (long *)(lVar5 + 0x18);
  if ((uVar2 >> 5 & 1) == 0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,0);
  }
  else if ((uVar2 >> 9 & 1) != 0) {
    (**(code **)(*plVar3 + 0x58))();
  }
  lVar5 = param_1[3];
  fVar7 = exp2f(*(float *)(lVar5 + 0x80) * DAT_01d4bdb0);
  fVar7 = (float)uVar8 / fVar7;
  FUN_0048d350(fVar7,lVar5);
  uVar6 = *(undefined8 *)PTR_DAT_02712ad0;
  uVar1 = *(undefined4 *)(param_1[3] + 0x1d8);
  uVar4 = FUN_0044fc40(param_1[3] + 0x18);
  FUN_0048f110(uVar8,fVar7,uVar6,uVar1,uVar4,**(undefined4 **)(param_1[3] + 0x1f8),
               (*(ushort *)(*(undefined4 **)(param_1[3] + 0x1f8) + 3) & 0x7c) == 4);
  if ((*(byte *)(param_1[3] + 10) >> 4 & 1) == 0) {
    return;
  }
  FUN_00490790(*(undefined8 *)PTR_DAT_02712db8,*(undefined4 *)(param_1[3] + 0x1d8),param_1);
  return;
}


