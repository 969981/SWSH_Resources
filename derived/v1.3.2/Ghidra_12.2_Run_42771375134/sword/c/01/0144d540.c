/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144d540; name: FUN_0144d540
 */


int FUN_0144d540(undefined8 param_1,undefined4 param_2,long *param_3)

{
  float fVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  
  lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar9 = FUN_0152d900(lVar10,param_2);
  lVar11 = *param_3;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  cVar2 = FUN_014525d0(param_1,param_2,0);
  cVar3 = FUN_014525d0(param_1,param_2,1);
  cVar4 = FUN_014525d0(param_1,param_2,2);
  cVar5 = FUN_0087eca0(lVar11);
  cVar6 = FUN_0087ed40(lVar11);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if ((cVar5 == cVar4 || (cVar5 == cVar2 || cVar5 == cVar3)) ||
      (cVar6 == cVar4 || (cVar6 == cVar2 || cVar6 == cVar3))) {
    fVar12 = (float)FUN_01452480(param_1,param_2);
    fVar12 = fVar12 + 1.0;
  }
  else {
    fVar12 = 1.0;
  }
  fVar13 = (float)FUN_014524f0(param_1,param_2,*(undefined1 *)(lVar9 + 1));
  sVar7 = FUN_008787f0(*param_3);
  fVar1 = fVar12 + fVar13 + 0.5;
  if (sVar7 != 0xe7) {
    fVar1 = fVar12 + fVar13;
  }
  iVar8 = FUN_014521f0(param_1,param_2,*(undefined1 *)(lVar9 + 0x18));
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  return (int)(fVar1 * (float)iVar8);
}


