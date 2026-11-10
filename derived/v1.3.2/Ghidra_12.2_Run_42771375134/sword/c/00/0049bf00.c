/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049bf00; name: FUN_0049bf00
 */


undefined8
FUN_0049bf00(float param_1,undefined1 param_2 [16],long param_3,long *param_4,int *param_5,
            byte param_6)

{
  undefined *puVar1;
  float *pfVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  float fVar11;
  long *local_78;
  undefined8 uStack_70;
  float local_68;
  float fStack_64;
  int local_60;
  int iStack_5c;
  undefined2 local_58;
  undefined1 local_56;
  
  fVar11 = param_2._0_4_;
  plVar10 = (long *)(param_3 + 0x40);
  plVar6 = (long *)*plVar10;
  if (plVar6 != (long *)0x0) {
    plVar4 = plVar6;
    plVar9 = (long *)0x0;
    do {
      plVar8 = plVar4;
      if (((((plVar8[4] == *param_4) && ((int)plVar8[5] == (int)param_4[1])) &&
           ((int)plVar8[6] == (int)param_4[2])) &&
          (((char)plVar8[7] == (char)param_4[3] && ((char)plVar8[8] == (char)param_4[4])))) &&
         (plVar8[9] == param_4[5])) {
        if (param_1 != fVar11) {
          FUN_004be340(param_2._0_8_,*(undefined8 *)PTR_DAT_02712b18,plVar8[2],0x10000000,*param_5,
                       param_5[1],0);
          *(byte *)(plVar8 + 10) = param_6 & 1;
          return 1;
        }
        if (plVar6 != plVar8) {
          plVar10 = plVar9 + 1;
        }
        *plVar10 = plVar8[1];
        uVar3 = *(undefined4 *)PTR_DAT_02712a90;
        *plVar8 = (long)(PTR_DAT_02713368 + 0x10);
        if (plVar8[2] != 0) {
          FUN_004be250(*(undefined8 *)PTR_DAT_02712b18,plVar8[2],plVar8);
        }
        FUN_00404870(uVar3,plVar8);
        goto LAB_0049c150;
      }
      plVar4 = (long *)plVar8[1];
      plVar9 = plVar8;
    } while ((long *)plVar8[1] != (long *)0x0);
  }
  if (param_1 == fVar11) {
LAB_0049c150:
    uVar5 = 0;
  }
  else {
    plVar6 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x58);
    uVar5 = 0;
    if (plVar6 != (long *)0x0) {
      puVar1 = PTR_DAT_02713368 + 0x10;
      plVar6[2] = 0;
      plVar6[3] = param_3;
      *plVar6 = (long)puVar1;
      memcpy(plVar6 + 4,param_4,0x30);
      *(undefined1 *)(plVar6 + 10) = 0;
      local_60 = *param_5;
      iStack_5c = param_5[1];
      uStack_70 = 0x10000000;
      local_58 = 0;
      local_56 = 0;
      lVar7 = plVar6[3];
      if ((*(int *)(lVar7 + 0x14) == 2) && ((char)param_5[2] == '\0')) {
        local_56 = 1;
        pfVar2 = (float *)(lVar7 + 0x1c);
        if (param_1 <= fVar11) {
          pfVar2 = (float *)(lVar7 + 0x18);
        }
        *param_5 = (int)(*pfVar2 * DAT_01d4bec0);
      }
      *(byte *)(plVar6 + 10) = param_6 & 1;
      local_78 = plVar6;
      local_68 = param_1;
      fStack_64 = fVar11;
      lVar7 = FUN_004bde40(*(undefined8 *)PTR_DAT_02712b18,&local_78,1,0);
      plVar6[2] = lVar7;
      uVar5 = 0;
      if (lVar7 != 0) {
        if (*plVar10 == 0) {
          *plVar10 = (long)plVar6;
          uVar5 = 1;
          plVar6[1] = 0;
        }
        else {
          uVar5 = 1;
          plVar6[1] = *plVar10;
          *plVar10 = (long)plVar6;
        }
      }
    }
  }
  return uVar5;
}


