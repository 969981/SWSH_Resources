/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff6d20; name: FUN_00ff6d20
 */


void FUN_00ff6d20(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  
  *param_2 = (long)(PTR_DAT_027176d0 + 0x10);
  FUN_00ff8170(param_2);
  puVar1 = PTR_DAT_02723390 + 0x10;
  lVar5 = 0;
  do {
    lVar3 = *(long *)((long)param_2 + lVar5 + 0xb88);
    *(undefined **)((long)param_2 + lVar5 + 0xb80) = puVar1;
    if (lVar3 == 0) {
      *(undefined8 *)((long)param_2 + lVar5 + 0xb88) = 0;
      pcVar4 = *(code **)((long)param_2 + lVar5 + 0xc18);
    }
    else {
      FUN_006e2100(lVar3,(long)param_2 + lVar5 + 0xb80);
      lVar3 = *(long *)((long)param_2 + lVar5 + 0xb88);
      *(undefined8 *)((long)param_2 + lVar5 + 0xb88) = 0;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
      pcVar4 = *(code **)((long)param_2 + lVar5 + 0xc18);
    }
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)((long)param_2 + lVar5 + 0xc28) = 0;
      *(undefined8 *)((long)param_2 + lVar5 + 0xc20) = 0;
      *(undefined8 *)((long)param_2 + lVar5 + 0xc18) = 0;
      *(undefined8 *)((long)param_2 + lVar5 + 0xc10) = 0;
      (*pcVar4)((long)param_2 + lVar5 + 0xc30);
    }
    pcVar4 = *(code **)((long)param_2 + lVar5 + 0xb98);
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)((long)param_2 + lVar5 + 0xba8) = 0;
      *(undefined8 *)((long)param_2 + lVar5 + 0xba0) = 0;
      *(undefined8 *)((long)param_2 + lVar5 + 0xb98) = 0;
      *(undefined8 *)((long)param_2 + lVar5 + 0xb90) = 0;
      (*pcVar4)((long)param_2 + lVar5 + 0xbb0);
    }
    lVar3 = *(long *)((long)param_2 + lVar5 + 0xb88);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      *(undefined8 *)((long)param_2 + lVar5 + 0xb88) = 0;
    }
    bVar2 = lVar5 != -0xaf0;
    lVar5 = lVar5 + -400;
  } while (bVar2);
                    /* WARNING: Could not recover jumptable at 0x00ff6e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


