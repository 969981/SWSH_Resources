/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bd8f0; name: FUN_014bd8f0
 */


float FUN_014bd8f0(float param_1,long param_2,short *param_3,long *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  short sVar8;
  undefined8 uVar9;
  int iVar10;
  
  puVar3 = PTR_DAT_02710828;
  puVar2 = PTR_DAT_02710820;
  sVar8 = *param_3;
  if (sVar8 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
LAB_014bd938:
    do {
      uVar7 = FUN_014ba310(sVar8);
      if ((uVar7 & 1) == 0) {
        uVar7 = FUN_014ba2e0(*param_3,0);
        if ((uVar7 & 1) == 0) {
          if (*param_3 != 0x10) {
            iVar6 = (**(code **)(*param_4 + 0x80))(param_4);
            iVar10 = iVar6 + iVar10;
            param_3 = param_3 + 1;
            sVar8 = *param_3;
            if (sVar8 == 0) break;
            goto LAB_014bd938;
          }
          cVar4 = FUN_014bf260(param_3);
          if ((cVar4 == -0x43) && (cVar4 = FUN_014bed40(param_3), cVar4 == '\t')) break;
          param_3 = (short *)FUN_0077db30(param_3);
          sVar8 = *param_3;
        }
        else {
          uVar9 = *(undefined8 *)puVar2;
          uVar1 = *(undefined4 *)(param_2 + 0x24);
          uVar5 = FUN_014ba2c0(*param_3);
          param_4 = (long *)FUN_014c26c0(uVar9,uVar1,uVar5);
          sVar8 = param_3[1];
          param_3 = param_3 + 1;
        }
      }
      else {
        uVar9 = *(undefined8 *)puVar2;
        uVar1 = *(undefined4 *)(param_2 + 0x24);
        uVar5 = FUN_008d4030(*(undefined8 *)puVar3);
        param_4 = (long *)FUN_014c26c0(uVar9,uVar1,uVar5);
        sVar8 = param_3[1];
        param_3 = param_3 + 1;
      }
    } while (sVar8 != 0);
  }
  iVar6 = (**(code **)(*param_4 + 0x20))(param_4);
  return (param_1 / (float)iVar6) * (float)iVar10;
}


