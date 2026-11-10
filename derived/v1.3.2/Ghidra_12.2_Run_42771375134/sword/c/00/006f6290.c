/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f6290; name: FUN_006f6290
 */


void FUN_006f6290(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if ((long *)*param_1 != param_3) {
    do {
      plVar1 = param_3;
      if ((param_2 != (long *)0x0) && ((int)param_2[3] != 1)) goto LAB_006f6430;
      plVar2 = (long *)plVar1[1];
      if (plVar2 != param_2) {
        if ((int)plVar2[3] == 0) {
          *(undefined4 *)(plVar2 + 3) = 1;
          puVar3 = (undefined8 *)*plVar1;
          *(undefined4 *)(plVar1 + 3) = 0;
          plVar4 = (long *)puVar3[1];
          puVar6 = (undefined8 *)plVar2[2];
          plVar1[1] = (long)puVar6;
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = plVar1;
          }
          plVar2[2] = (long)plVar1;
          *plVar1 = (long)plVar2;
          *plVar2 = (long)puVar3;
          if (puVar3 == (undefined8 *)*param_1) {
LAB_006f62f0:
            *puVar3 = plVar2;
            plVar2 = (long *)plVar1[1];
            lVar5 = plVar2[1];
            puVar3 = (undefined8 *)plVar2[2];
          }
          else {
            if (plVar4 != plVar1) {
              puVar3 = puVar3 + 2;
              goto LAB_006f62f0;
            }
            puVar3[1] = plVar2;
            plVar2 = (long *)plVar1[1];
            lVar5 = plVar2[1];
            puVar3 = (undefined8 *)plVar2[2];
          }
          if (puVar3 != (undefined8 *)0x0) goto LAB_006f63c0;
LAB_006f63cc:
          if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 1)) goto LAB_006f6410;
        }
        else {
          lVar5 = plVar2[1];
          puVar3 = (undefined8 *)plVar2[2];
          if (puVar3 == (undefined8 *)0x0) goto LAB_006f63cc;
LAB_006f63c0:
          if (*(int *)(puVar3 + 3) == 1) goto LAB_006f63cc;
          if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 1)) {
            *(undefined4 *)(puVar3 + 3) = 1;
            puVar6 = (undefined8 *)*plVar2;
            *(undefined4 *)(plVar2 + 3) = 0;
            plVar4 = (long *)puVar6[1];
            puVar7 = (undefined8 *)puVar3[1];
            plVar2[2] = (long)puVar7;
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = plVar2;
            }
            puVar3[1] = plVar2;
            *plVar2 = (long)puVar3;
            *puVar3 = puVar6;
            if (puVar6 != (undefined8 *)*param_1) {
              if (plVar4 == plVar2) {
                puVar6 = puVar6 + 1;
              }
              else {
                puVar6 = puVar6 + 2;
              }
            }
            *puVar6 = puVar3;
            plVar2 = (long *)plVar1[1];
          }
        }
        *(int *)(plVar2 + 3) = (int)plVar1[3];
        *(undefined4 *)(plVar1 + 3) = 1;
        if (plVar2[1] != 0) {
          *(undefined4 *)(plVar2[1] + 0x18) = 1;
        }
        puVar3 = (undefined8 *)*plVar1;
        plVar2 = (long *)plVar1[1];
        plVar4 = (long *)puVar3[1];
        puVar6 = (undefined8 *)plVar2[2];
        plVar1[1] = (long)puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = plVar1;
        }
        plVar2[2] = (long)plVar1;
        *plVar1 = (long)plVar2;
        *plVar2 = (long)puVar3;
        if (puVar3 == (undefined8 *)*param_1) {
          *puVar3 = plVar2;
        }
        else if (plVar4 == plVar1) {
          puVar3[1] = plVar2;
        }
        else {
          puVar3[2] = plVar2;
        }
        break;
      }
      plVar2 = (long *)plVar1[2];
      if ((int)plVar2[3] != 0) {
        puVar3 = (undefined8 *)plVar2[1];
        lVar5 = plVar2[2];
joined_r0x006f63f0:
        if (puVar3 == (undefined8 *)0x0) goto LAB_006f6400;
LAB_006f63f4:
        if (*(int *)(puVar3 + 3) == 1) goto LAB_006f6400;
        if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 1)) {
          *(undefined4 *)(puVar3 + 3) = 1;
          puVar6 = (undefined8 *)*plVar2;
          *(undefined4 *)(plVar2 + 3) = 0;
          plVar4 = (long *)puVar6[1];
          puVar7 = (undefined8 *)puVar3[2];
          plVar2[1] = (long)puVar7;
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = plVar2;
          }
          puVar3[2] = plVar2;
          *plVar2 = (long)puVar3;
          *puVar3 = puVar6;
          if (puVar6 != (undefined8 *)*param_1) {
            if (plVar4 == plVar2) {
              puVar6 = puVar6 + 1;
            }
            else {
              puVar6 = puVar6 + 2;
            }
          }
          *puVar6 = puVar3;
          plVar2 = (long *)plVar1[2];
        }
LAB_006f65a4:
        *(int *)(plVar2 + 3) = (int)plVar1[3];
        *(undefined4 *)(plVar1 + 3) = 1;
        if (plVar2[2] != 0) {
          *(undefined4 *)(plVar2[2] + 0x18) = 1;
        }
        puVar3 = (undefined8 *)plVar1[2];
        plVar2 = (long *)*plVar1;
        plVar4 = (long *)plVar2[1];
        puVar6 = (undefined8 *)puVar3[1];
        plVar1[2] = (long)puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = plVar1;
        }
        puVar3[1] = plVar1;
        *plVar1 = (long)puVar3;
        *puVar3 = plVar2;
        if (plVar2 == (long *)*param_1) {
          *plVar2 = (long)puVar3;
        }
        else if (plVar4 == plVar1) {
          plVar2[1] = (long)puVar3;
        }
        else {
          plVar2[2] = (long)puVar3;
        }
        break;
      }
      *(undefined4 *)(plVar2 + 3) = 1;
      puVar3 = (undefined8 *)*plVar1;
      *(undefined4 *)(plVar1 + 3) = 0;
      plVar4 = (long *)puVar3[1];
      puVar6 = (undefined8 *)plVar2[1];
      plVar1[2] = (long)puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = plVar1;
      }
      plVar2[1] = (long)plVar1;
      *plVar1 = (long)plVar2;
      *plVar2 = (long)puVar3;
      if (puVar3 != (undefined8 *)*param_1) {
        if (plVar4 == plVar1) {
          puVar3[1] = plVar2;
          plVar2 = (long *)plVar1[2];
          puVar3 = (undefined8 *)plVar2[1];
          lVar5 = plVar2[2];
          goto joined_r0x006f63f0;
        }
        puVar3 = puVar3 + 2;
      }
      *puVar3 = plVar2;
      plVar2 = (long *)plVar1[2];
      puVar3 = (undefined8 *)plVar2[1];
      lVar5 = plVar2[2];
      if (puVar3 != (undefined8 *)0x0) goto LAB_006f63f4;
LAB_006f6400:
      if ((lVar5 != 0) && (*(int *)(lVar5 + 0x18) != 1)) goto LAB_006f65a4;
LAB_006f6410:
      *(undefined4 *)(plVar2 + 3) = 0;
      param_3 = (long *)*plVar1;
      param_2 = plVar1;
    } while ((long *)*param_1 != (long *)*plVar1);
  }
  if (param_2 != (long *)0x0) {
LAB_006f6430:
    *(undefined4 *)(param_2 + 3) = 1;
  }
  return;
}


