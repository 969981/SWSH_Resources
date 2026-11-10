/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fbab10; name: FUN_00fbab10
 */


void FUN_00fbab10(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_2a0 [16];
  char local_290;
  char local_288;
  char local_278;
  char local_254;
  char local_240;
  char local_204;
  char local_1fc;
  char local_1b0;
  char local_f0;
  char local_a0;
  
  if (((*(long *)PTR_DAT_02720700 != 0) && (uVar1 = FUN_012a4260(), (uVar1 & 1) != 0)) &&
     (*(long *)PTR_DAT_02710958 != 0)) {
    plVar2 = (long *)FUN_01211c80();
    lVar4 = plVar2[1];
    for (lVar3 = *plVar2; lVar3 != lVar4; lVar3 = lVar3 + 0x150) {
      uVar1 = FUN_00fbb3f0(param_1,lVar3);
      if ((uVar1 & 1) == 0) {
        FUN_011f5760(auStack_2a0,lVar3,0);
        FUN_00fbb800(param_1,auStack_2a0);
        if (local_a0 != '\0') {
          local_a0 = '\0';
        }
        if (local_f0 != '\0') {
          local_f0 = '\0';
        }
        if (local_1b0 != '\0') {
          local_1b0 = '\0';
        }
        if (local_204 != '\0') {
          if (local_1fc != '\0') {
            local_1fc = '\0';
          }
          local_204 = '\0';
        }
        if (local_240 != '\0') {
          local_240 = '\0';
        }
        if (local_254 != '\0') {
          local_254 = '\0';
        }
        if (local_278 != '\0') {
          local_278 = '\0';
        }
        if (local_288 != '\0') {
          local_288 = '\0';
        }
        if (local_290 != '\0') {
          local_290 = '\0';
        }
      }
    }
  }
  uVar8 = *(undefined8 *)PTR_DAT_02710958;
  lVar3 = FUN_0120f210(uVar8);
  lVar4 = FUN_0120f220(uVar8);
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x260) {
    piVar5 = (int *)FUN_01225f00(lVar3);
    if ((*piVar5 == 1) && (pcVar6 = (char *)FUN_01225e70(lVar3), *pcVar6 != '\0')) {
      lVar7 = FUN_01225e70(lVar3);
      uVar1 = FUN_01223b60(lVar7 + 0x10);
      if ((uVar1 & 1) != 0) {
        FUN_01226090(lVar3,&DAT_01cec450);
        FUN_00fbb800(param_1,lVar3);
      }
    }
  }
  return;
}


