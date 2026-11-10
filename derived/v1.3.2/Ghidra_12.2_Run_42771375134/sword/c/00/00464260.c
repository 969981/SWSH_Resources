/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00464260; name: FUN_00464260
 */


void FUN_00464260(long *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  puVar4 = PTR_DAT_02712ad0;
  puVar3 = PTR_DAT_02712a90;
  plVar10 = (long *)param_1[0x1d];
  if (plVar10 != (long *)0x0) {
    plVar12 = (long *)0x0;
    do {
      while (((plVar11 = plVar10, param_2 == 0 || (plVar11[1] == param_2)) &&
             ((param_3 == 0 || (*(int *)((long)plVar11 + 0x4c) == param_3))))) {
        plVar10 = (long *)*plVar11;
        plVar8 = param_1 + 0x1d;
        if ((long *)param_1[0x1d] != plVar11) {
          plVar8 = plVar12;
        }
        *plVar8 = (long)plVar10;
        FUN_0048fd60(*(undefined8 *)puVar4,*(undefined4 *)((long)plVar11 + 0x4c));
        (**(code **)(*param_1 + 0x130))(param_1,1);
        puVar9 = (undefined8 *)plVar11[1];
        iVar1 = *(int *)(puVar9 + 10);
        *(int *)(puVar9 + 10) = iVar1 + -1;
        if (iVar1 + -1 == 0) {
          uVar2 = *(undefined4 *)puVar3;
          (**(code **)*puVar9)(puVar9);
          FUN_00404870(uVar2,puVar9);
          lVar6 = plVar11[0xb];
        }
        else {
          lVar6 = plVar11[0xb];
        }
        if (lVar6 != 0) {
          *(undefined4 *)(plVar11 + 0xc) = 0;
          FUN_00404870(*(undefined4 *)puVar3);
          plVar11[0xb] = 0;
          *(undefined4 *)((long)plVar11 + 100) = 0;
        }
        FUN_00479c90(plVar11 + 0xd);
        FUN_00479c10(plVar11 + 0xd);
        if (plVar11[7] != 0) {
          FUN_00431200();
        }
        plVar8 = (long *)0x0;
        plVar5 = DAT_02738b30;
        if (DAT_02738b30 != (long *)0x0) {
          do {
            plVar7 = plVar5;
            if ((plVar7 <= plVar11) && (plVar11 < plVar7 + 0x780)) goto LAB_00464394;
            plVar8 = plVar7;
            plVar5 = (long *)plVar7[0x780];
          } while ((long *)plVar7[0x780] != (long *)0x0);
        }
        plVar7 = (long *)0x0;
LAB_00464394:
        if (plVar7[0x782] == 0) {
          plVar7[0x782] = (long)plVar11;
          *plVar11 = 0;
        }
        else {
          *plVar11 = plVar7[0x782];
          plVar7[0x782] = (long)plVar11;
        }
        iVar1 = (int)plVar7[0x781] + 1;
        *(int *)(plVar7 + 0x781) = iVar1;
        if (iVar1 == 0x80) {
          plVar11 = (long *)&DAT_02738b30;
          if (DAT_02738b30 != plVar7) {
            plVar11 = plVar8 + 0x780;
          }
          *plVar11 = plVar7[0x780];
          FUN_00404870(*(undefined4 *)puVar3);
        }
        if (plVar10 == (long *)0x0) {
          return;
        }
      }
      plVar10 = (long *)*plVar11;
      plVar12 = plVar11;
    } while ((long *)*plVar11 != (long *)0x0);
  }
  return;
}


