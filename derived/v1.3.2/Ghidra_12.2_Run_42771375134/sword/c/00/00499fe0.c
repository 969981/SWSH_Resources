/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00499fe0; name: FUN_00499fe0
 */


void FUN_00499fe0(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  puVar5 = PTR_DAT_02712b18;
  puVar4 = PTR_DAT_02712a90;
  if ((((*param_2 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
     ((((char)param_2[3] == -1 && ((char)param_2[4] == -1)) && (param_2[5] == 0)))) {
    plVar8 = (long *)(param_1 + 0x40);
    plVar7 = (long *)*plVar8;
    if (plVar7 != (long *)0x0) {
      puVar1 = PTR_DAT_02713368 + 0x10;
      plVar6 = plVar7;
      do {
        plVar2 = plVar8;
        if (plVar6 != plVar7) {
          plVar2 = (long *)&DAT_00000008;
        }
        *plVar2 = plVar7[1];
        uVar3 = *(undefined4 *)puVar4;
        *plVar7 = (long)puVar1;
        if (plVar7[2] != 0) {
          FUN_004be250(*(undefined8 *)puVar5,plVar7[2],plVar7);
        }
        FUN_00404870(uVar3,plVar7);
        plVar6 = (long *)*plVar8;
      } while( true );
    }
  }
  else {
    plVar7 = *(long **)(param_1 + 0x40);
    if (plVar7 != (long *)0x0) {
      plVar8 = (long *)0x0;
      plVar6 = plVar7;
      do {
        if (((plVar6[4] == *param_2) && ((int)plVar6[5] == (int)param_2[1])) &&
           (((int)plVar6[6] == (int)param_2[2] &&
            ((((char)plVar6[7] == (char)param_2[3] && ((char)plVar6[8] == (char)param_2[4])) &&
             (plVar6[9] == param_2[5])))))) {
          plVar2 = (long *)(param_1 + 0x40);
          if (plVar7 != plVar6) {
            plVar2 = plVar8 + 1;
          }
          *plVar2 = plVar6[1];
          uVar3 = *(undefined4 *)PTR_DAT_02712a90;
          *plVar6 = (long)(PTR_DAT_02713368 + 0x10);
          if (plVar6[2] != 0) {
            FUN_004be250(*(undefined8 *)PTR_DAT_02712b18,plVar6[2],plVar6);
          }
          FUN_00404870(uVar3,plVar6);
          break;
        }
        plVar2 = plVar6 + 1;
        plVar8 = plVar6;
        plVar6 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
    }
  }
  FUN_0049a1b0(param_1 + 0x20,param_2);
  return;
}


