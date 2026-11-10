/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00502170; name: FUN_00502170
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00502170(long param_1,undefined8 *param_2,byte param_3)

{
  bool bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  byte local_24 [4];
  
  local_24[0] = param_3 & 1;
  plVar6 = (long *)param_2[1];
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6;
    do {
      plVar7 = (long *)*plVar7;
      param_2[1] = plVar7;
      if ((long *)*param_2 == plVar6) {
        *param_2 = 0;
        bVar2 = *(byte *)((long)plVar6 + 0x14);
        if ((bVar2 & 7) != 0) goto LAB_005021c4;
LAB_005021fc:
        *(byte *)((long)plVar6 + 0x14) = bVar2 & 0xf8 | 2;
        if (*(long *)(param_1 + 0xc0) == 0) {
          *(long **)(param_1 + 0xc0) = plVar6;
          *plVar6 = 0;
        }
        else {
          *plVar6 = *(long *)(param_1 + 0xc0);
          *(long **)(param_1 + 0xc0) = plVar6;
        }
      }
      else {
        bVar2 = *(byte *)((long)plVar6 + 0x14);
        if ((bVar2 & 7) == 0) goto LAB_005021fc;
LAB_005021c4:
        FUN_004fbe00(param_1,plVar6,0);
        FUN_004ffeb0(*(undefined8 *)(param_1 + 0x50));
      }
      if (plVar7 == (long *)0x0) break;
      plVar6 = (long *)param_2[1];
      if (plVar6 != plVar7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    } while( true );
  }
  plVar6 = *(long **)(param_1 + 0xb8);
  if ((plVar6 != (long *)0x0) && (bVar2 = *(byte *)((long)plVar6 + 0x14), (bVar2 & 7) != 0)) {
    do {
      if ((bVar2 & 7) == 2) {
        plVar7 = *(long **)(param_1 + 0xc0);
        if (plVar7 != (long *)0x0) {
          plVar3 = (long *)0x0;
          plVar5 = plVar7;
          do {
            plVar4 = (long *)*plVar5;
            if (plVar6 == plVar5) {
              if (plVar6 == plVar7) {
                *(long **)(param_1 + 0xc0) = plVar4;
              }
              else {
                *plVar3 = (long)plVar4;
              }
              break;
            }
            plVar3 = plVar5;
            plVar5 = plVar4;
          } while (plVar4 != (long *)0x0);
        }
      }
      else if (*plVar6 == 0) {
        *(undefined8 *)(param_1 + 0xb0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
      }
      else {
        *(long *)(param_1 + 0xb8) = *plVar6;
      }
      FUN_004fbe00(param_1,plVar6,1);
      FUN_004ffeb0(*(undefined8 *)(param_1 + 0x50));
      plVar6 = *(long **)(param_1 + 0xb8);
    } while ((plVar6 != (long *)0x0) && (bVar2 = *(byte *)((long)plVar6 + 0x14), (bVar2 & 7) != 0));
  }
  if (*(long **)(param_1 + 0xc0) != (long *)0x0) {
    bVar1 = true;
    plVar6 = *(long **)(param_1 + 0xc0);
    do {
      plVar7 = (long *)*plVar6;
      FUN_005036a0(plVar6,*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x608),bVar1,local_24);
      bVar1 = local_24[0] == 0;
      plVar6 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
  return;
}


