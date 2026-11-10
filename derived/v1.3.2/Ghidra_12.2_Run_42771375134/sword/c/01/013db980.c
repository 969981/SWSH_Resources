/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013db980; name: FUN_013db980
 */


void FUN_013db980(float param_1,float param_2,long *param_3,undefined8 param_4,char *param_5,
                 float *param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 extraout_d0;
  float extraout_var;
  float fVar7;
  long *local_48;
  
  local_48 = param_3;
  if (param_3 != (long *)0x0) {
    lVar6 = param_3[0xb];
    if (*(long *)(lVar6 + 0x58) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x60))();
      *(undefined8 *)(lVar6 + 0x58) = uVar5;
    }
    piVar1 = (int *)(lVar6 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_013b7460(&local_48,param_4);
  if (local_48 != (long *)0x0) {
    lVar6 = local_48[0xb];
    piVar1 = (int *)(lVar6 + 0x54);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x60) = 0;
      (**(code **)(*local_48 + 0x18))();
    }
  }
  if (0.0 < extraout_var) {
    if ((0.0 < param_2) &&
       (fVar7 = (0.5 - (float)((ulong)extraout_d0 >> 0x20) * (1.0 / extraout_var) * 0.5) + -0.5,
       fVar7 != 0.0)) {
      fVar7 = ABS(fVar7) / (param_2 * 0.5);
      if (*param_5 == '\0') {
        *param_6 = fVar7;
        *param_5 = '\x01';
      }
      else if (*param_6 < fVar7) {
        *param_6 = fVar7;
      }
    }
    if ((0.0 < param_1) &&
       (fVar7 = (float)extraout_d0 * (1.0 / extraout_var) * 0.5 + 0.5 + -0.5, fVar7 != 0.0)) {
      fVar7 = ABS(fVar7) / (param_1 * 0.5);
      if (*param_5 == '\0') {
        *param_6 = fVar7;
        *param_5 = '\x01';
      }
      else if (*param_6 < fVar7) {
        *param_6 = fVar7;
      }
    }
  }
  return;
}


