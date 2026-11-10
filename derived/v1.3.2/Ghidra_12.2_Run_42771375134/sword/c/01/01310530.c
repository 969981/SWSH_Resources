/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01310530; name: FUN_01310530
 */


void FUN_01310530(long param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  FUN_01312850(*param_2,param_1);
  plVar1 = (long *)(param_1 + 0x80);
  lVar8 = 0;
  plVar9 = plVar1;
  do {
    if (*(long *)((long)plVar1 + lVar8) == 0) {
      plVar6 = (long *)((long)plVar1 + lVar8);
      lVar5 = 0;
LAB_01310598:
      lVar7 = *param_2;
      *param_2 = lVar5;
      *plVar6 = lVar7;
    }
    else {
      bVar3 = FUN_01311ae0(*param_2);
      bVar4 = FUN_01311ae0(*(undefined8 *)((long)plVar1 + lVar8));
      if (bVar4 < bVar3) {
        lVar5 = *(long *)((long)plVar1 + lVar8);
        plVar6 = plVar9;
        goto LAB_01310598;
      }
    }
    if (*param_2 == 0) {
      return;
    }
    plVar9 = plVar9 + 1;
    bVar2 = lVar8 == 0xf8;
    lVar8 = lVar8 + 8;
    if (bVar2) {
      return;
    }
  } while( true );
}


